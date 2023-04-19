#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法增加\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("添加成功\n");
}

void ShowContact(const Contact* pc)
{
	int i = 0;
	//姓名      年龄      性别     电话      地址
	//zhangsan 20        男      123456    北京
	//
	//打印标题
	printf("%-10s %-4s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	//打印数据
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s %-4d %-5s %-12s %-30s\n",
			pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

static int FindByName(const Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(pContact pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	//删除
	//1. 找到要删除的人 - 位置（下标）
	printf("输入要删除人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	int i = 0;
	//2. 删除 - 删除pos位置上的数据
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

void SearchContact(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	//查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	//打印
	printf("%-10s %-4s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	//打印数据
	printf("%-10s %-4d %-5s %-12s %-30s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	//修改
	printf("请输入名字:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);

	printf("修改成功\n");
}


//按照名字来排序
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(PeoInfo), cmp_by_name);
	printf("排序成功\n");
}