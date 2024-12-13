#define _CRT_SECURE_NO_WARNINGS 1

//九九乘法表
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 9; i++)
//	{
//		//打印一行的数据
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//求十个整数最大值
//两两打擂台-最后的max
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//// 下标            0,1,2,3,4,5,6,7,8,9
//	int max = arr[0];  注意
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}


//分数求和
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1 / i;
//	}
//
//	printf("%f\n", sum);
//	return 0;
//}
//改进：
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0f / i;
//		flag = -flag;
//	}
//
//	printf("%f\n", sum);
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



