#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.c));
//
//	return 0;
//}



//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	u.i = 1;
//	if (u.c == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//
//	return 0;
//}


//union Un
//{
//	char arr[5];//5
//	int n;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}

//union Un
//{
//	short s[7];//14
//	int n;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}
//\
#include "contact.h"


void menu()
{
	printf("********************************\n");
	printf("*****    1. add     2. del   ***\n");
	printf("*****    3. search  4. modify***\n");
	printf("*****    5. show    6. sort  ***\n");
	printf("*****    0. exit             ***\n");
	printf("********************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

int main()
{
	int input = 0;
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
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
