#define _CRT_SECURE_NO_WARNINGS 1
//C99标准前，数组的大小必须是常量表达式指定
//C99标准中，引入变长数组的概念， 变长数组中允许数组的大小用变量来指定

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
//	//int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	//int arr2[10] = { 1,2,3,4,5 };//不完全初始化，剩余的默认初始化为0
//
//	/*char ch1[5] = {'a', 'b', 99};
//	char ch2[10] = "abcdef";*/
//	
//	//如果数组初始化了，可以不指定数组的大小，数组的大小会根据初始化的内容来确定
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
//	//二维数组如果初始化，行是可以省略的，但是列不能
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
//		printf("%d ", arr[i]);//越界访问了
//	}
//	return 0;
//}
                //int* arr
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	
//	//冒泡排序的趟数
//	for (i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序的过程
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
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
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
//	//排序 - 升序
//	//冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);//arr是数组首元素的地址
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
//数组名是数组首元素的地址
//但是有2个例外：
//sizeof(数组名)，数组名如果单独放在sizeof内部，这里的数组名表示整个数组，计算的是整个数组的大小
//&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//除此之外，遇到的所有的数组名都输数组首元素的地址
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
//头文件的包含
#include <string.h>
#include <stdio.h>


#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
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
	//存放数据需要一个3*3的二维数组
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//显示棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		//打印棋盘
		//判断输赢
		//电脑下棋
		//打印棋盘
		//判断输赢
	}
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}