#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
#include<stdio.h>

//����ͨѶ¼����ع���
void menu()
{
	printf("*************************************\n");
	printf("***** 1. add       2.del    *********\n");
	printf("***** 3.search     4.modify *********\n");
	printf("***** 5.show       6.sort   *********\n");
	printf("***** 0.exit                *********\n");
	printf("*************************************\n");
}

//���Ӵ���ɶ���
enum Option 
{
	//����
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
	Contact con;//ͨѶ¼
	/*
	PeoInfo data[100];
	int sz = 0;//��¼ͨѶ¼�ж����˵���Ϣ
    */
	//��ʼ��ͨѶ¼
	//InitContact(con);--->�޷��ﵽ�޸Ĺ���
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}