#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
#include<stdio.h>

//测试通讯录的相关功能
void menu()
{
	printf("*************************************\n");
	printf("***** 1. add       2.del    *********\n");
	printf("***** 3.search     4.modify *********\n");
	printf("***** 5.show       6.sort   *********\n");
	printf("***** 0.exit                *********\n");
	printf("*************************************\n");
}

//增加代码可读性
enum Option 
{
	//递增
	EXIT,//0
	ADD,//2
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT,//6
};

int main()
{
	int input = 0;
	Contact con;//通讯录
	/*
	PeoInfo data[100];
	int sz = 0;//记录通讯录有多少人的信息
    */
	//初始化通讯录
	//InitContact(con);--->无法达到修改功能
	InitContact(&con);

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}