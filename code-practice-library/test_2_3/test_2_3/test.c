#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int PrintfMulTable(int a)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a;
//	printf("请输入数字：> ，生成该数字的乘法表。");
//	scanf("%d", &a);
//	PrintfMulTable(a);
//	return 0;
//}


//#include<stdio.h>
//
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	Swap2(&a,&b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//#include<stdio.h>
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int is_Prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1 == is_Prime(i))
//		{
//			count++;
//			pintf("%d ", i);
//		}
//	}
//	printf("n\count=&d", count);
//	return 0;
//}

#include<stdio.h>
#include<math.h>

int is_Prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
		return 1;
	}
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (1 == is_Prime(i))
		{
			count++;
			pintf("%d ", i);
		}
	}
	printf("n\count=&d", count);
	return 0;
}