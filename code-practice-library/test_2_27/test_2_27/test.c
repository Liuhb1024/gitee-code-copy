#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//#include<stdio.h>
//
//
//int main()
//{
//    int n, m;
//    scanf("%d %d\n", &n, &m);
//    int i, j, arr[2000];
//    int tmp;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = n; i < n + m; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        for (j = 0; j < n + m - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//
//#include <stdio.h>
//
//int Fib(int n)
//{
//    if (n <= 2)
//        return n;
//    else
//        return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//
//    printf("%d\n", ret);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i;
//    for (i = 9999; i <= 99999; i++) {
//        int a = i / 10000;
//        int b = i % 10000;
//        int c = i / 1000;
//        int d = i % 1000;
//        int e = i / 100;
//        int f = i % 100;
//        int g = i / 10;
//        int h = i % 10;
//        if ((a * b) + (c * d) + (e * f) + (g * h) == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a, b, c;
//
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && a == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b || b == c || a == c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else {
//            printf("Not a triangle!\n");
//        }
//    }
//
//    return 0;
//}

#include "game.h"

void menu()
{
	printf("*******************************\n");
	printf("*******    1. play      *******\n");
	printf("*******    0. exit      *******\n");
	printf("*******************************\n");
}

void game()
{
	//mine数组是专门存放布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//show数组是专门存放排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'
	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}