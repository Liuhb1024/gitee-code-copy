#define _CRT_SECURE_NO_WARNINGS 1
//C99��׼ǰ������Ĵ�С�����ǳ������ʽָ��
//C99��׼�У�����䳤����ĸ�� �䳤��������������Ĵ�С�ñ�����ָ��

//int main()
//{
//	int arr[8];
//	char ch[10];
//	float arr2[15];
//	double arr3[3 + 5];
//	
//	int n = 10;
//	int arr4[n];
//
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	//int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
//	//int arr2[10] = { 1,2,3,4,5 };//����ȫ��ʼ����ʣ���Ĭ�ϳ�ʼ��Ϊ0
//
//	/*char ch1[5] = {'a', 'b', 99};
//	char ch2[10] = "abcdef";*/
//	
//	//��������ʼ���ˣ����Բ�ָ������Ĵ�С������Ĵ�С����ݳ�ʼ����������ȷ��
//	//char ch3[] = "abc";
//	//char ch4[] = { 'a', 'b', 'c' };
//	//printf("%s\n", ch3);
//	//printf("%s\n", ch4);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	//printf("%d\n", arr[9]);
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//
//
//	//int a = 10;
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int * p = &arr[0];
//	//char * pc;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%p == %p\n", p + i, &arr[i]);
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//	//int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	//int arr1[][4] = { {1,2},{3,4},{5,6} };
//	//��ά���������ʼ�������ǿ���ʡ�Եģ������в���
//	//char arr2[5][6];
//	//
//	//1  2  3  4 
//	//5  6  7  8
//	//9 10 11 12
//	//
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//printf("%d\n", arr1[1][2]);
//	int i = 0;
//	for (i = 0; i < 3; i++)//0 1 2
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-2d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);//Խ�������
//	}
//	return 0;
//}
                //int* arr
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	
//	//ð�����������
//	for (i = 0; i < sz-1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//
//void bubble_sort(int *arr, int sz)
//{
//	int i = 0;
//
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,5,9,2,4,7,6,8,0 };
//	//���� - ����
//	//ð������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);//arr��������Ԫ�صĵ�ַ
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//

//
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//sizeof(������)�������������������sizeof�ڲ����������������ʾ�������飬���������������Ĵ�С
//&���������������������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���������е�����������������Ԫ�صĵ�ַ
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	//printf("%d\n", sizeof(arr));//40
//	return 0;
//}
//
#include "game.h"


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
	//memset(&board[0][0], ' ', row*col*sizeof(board[0][0]));
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if(i < row-1)
//			printf("---|---|---\n");
//	}
//}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
//ͷ�ļ��İ���
#include <string.h>
#include <stdio.h>


#define ROW 3
#define COL 3

//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
#include <game.h>

void menu()
{
	printf("*******************************\n");
	printf("********    1. play      ******\n");
	printf("********    0. exit      ******\n");
	printf("*******************************\n");
}

void game()
{
	//���������Ҫһ��3*3�Ķ�ά����
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ʾ����
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		//��ӡ����
		//�ж���Ӯ
		//��������
		//��ӡ����
		//�ж���Ӯ
	}
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}