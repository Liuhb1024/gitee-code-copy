#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//99乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
//求最大值
//求10 个整数中最大值

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 0)
//			count++;
//	}
//	printf("1到 100 的所有整数中出现 %d 个9。", count);
//	return 0;
//

//int main()
//{
//	printf("请输入密码：>");
//	char password[20] = { 0 };
//	scanf("%s", password);
//	printf("请确认密码（Y/N）:>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	if (ch == 'N')
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//int main()
//{
//	printf("请输入密码：>");
//	char password[20] = { 0 };
//	scanf("%s", password);
//	getchar(); //处理\n
//	printf("请确认密码（Y/N）:>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	if (ch == 'N')
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("请输入密码：>");
//	char password[20] = { 0 };
//	scanf("%s", password);
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("请确认密码（Y/N）:>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	if (ch == 'N')
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//
//{
//	char name[20] = { 0 };
//	scanf("%[^\n]", name);;
//	printf("%s\n", name);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//	for (; ;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//    int j = 0;
//    int i = 0;
//    //会打印出几个hehe呢？
//    for (; i < 3; i++)
//    {
//        for (; j < 3; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//int x, y;
//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//{
//	printf("hehe\n");
//}
//return 0;
//}
//请问循环要循环多少次？
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}

//#include <stdlib.h>
//#include <time.h>
//
//
//void menu()
//{
//	printf("********************************\n");
//	printf("*******     1. play      *******\n");
//	printf("*******     0. exit      *******\n");
//	printf("********************************\n");
//}
//
//
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
//			printf("猜小了\n")
//		}
//	}
//}
//
//
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
//

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