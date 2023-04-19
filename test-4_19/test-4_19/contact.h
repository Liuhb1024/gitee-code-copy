#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//表示一个人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];//存放数据
	int sz;//记录通讯录中的有效信息个数
}Contact, * pContact;

//初始化通讯录
void InitContact(Contact* pc);

//增加指定联系人
void AddContact(Contact* pc);

//显示联系人信息
void ShowContact(const Contact* pc);

//删除指定联系人
//void DelContact(Contact* pc);
void DelContact(pContact pc);

//查找指定联系人
void SearchContact(const Contact* pc);

//修改通讯录
void ModifyContact(Contact* pc);

//排序通讯录元素
void SortContact(Contact* pc);