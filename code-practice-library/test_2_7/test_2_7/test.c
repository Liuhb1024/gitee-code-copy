#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//#include<stdio.h>
//
//int count_one_bit(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("1的个数为：%d\n", count);
//	
//}
//
//int main()
//{
//	int a;
//	printf("请输入一个整数：>");
//	scanf("%d", &a);
//	count_one_bit(a);
//	return 0;
//}

//#include<stdio.h>
//
//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Printbit(num);
//	return 0;
//}

#include <stdio.h>
int calc_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}


int main()
{
	int m, n;
	while (scanf("%d %d", &m, &n) == 2)
	{
		printf("%d\n", calc_diff_bit(m, n));
	}
	return 0;
}