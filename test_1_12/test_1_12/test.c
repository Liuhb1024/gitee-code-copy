#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int is_leapyear(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400) == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int y = 0;
//
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leapyear(y))
//		{
//			printf("%d ", y);
//
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1; 
//
//	while (left <= right) 
//	{
//	int mid = left + (right - left) / 2;
//	if (arr[mid] > key) 
//	{
//			right = mid - 1; 
//	}
//	else if (arr[mid] < key)
//	{
//			left = mid + 1; 
//	}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}

//#include <stdlib.h>
//#include <time.h>
//
//int menu()
//{
//	printf("********************************\n");
//	printf("*******     1. play      *******\n");
//	printf("*******     0. exit      *******\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//RAND_MAX-32767
//	//1.生成随机数
//	//讲解rand函数
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//讲解srand函数
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//#include <stdio.h>
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}