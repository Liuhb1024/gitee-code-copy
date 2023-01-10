#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1. 计算 n的阶乘。
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	//注意事项：代码实现的前提是不溢出
//	//整型可表示的最大值：
//#include<limits.h>
//	INT_MAX//f12
//}


//明解c语言第三章
//int main()
//{
//	int n1, n2;
//	puts("请输入两个整数。");
//	printf("整数1：");
//	scanf("%d", &n1);
//	printf("整数2：");
//	scanf("%d", &n2);
//
//	if (n1 == n2)
//		puts("这两个整数相等");
//	else
//		puts("这两个整数不相等");
//
//	return 0;
//}

//int main()
//{
//	int n1, n2;
//	puts("请输入两个整数。");
//	printf("整数1：");
//	scanf("%d", &n1);
//	printf("整数2：");
//	scanf("%d", &n2);
//
//	if (n1 != n2)
//		puts("这两个整数不相等");
//	else
//		puts("这两个整数相等");
//
//	return 0;
//}
//
//余数的判断
//int main()
//{
//	int num;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//
//	if ((num % 10) == 5)
//	{
//		puts("该整数的个位数是5。");
//	}
//	else
//		puts("该整数的个位数不是5。");
//
//	return 0;
//}
//由于%的优先级比运算符==高，所以其实 num % 10两边的括号（）可以省略


//int main()
//{
//	int no;
//	printf("请输入一个整数");
//	scanf("%d", &no);
//	if (no == 0)
//		puts("该整数是0。");
//	else if(no > 0)
//		puts("该整数是正数。");
//	else
//		puts("该整数是负数。");
//
//	return 0;
//}

//int main()
//{
//	int no;
//	printf("请输入一个整数");
//	scanf("%d", &no);
//	if (no == 0)
//		puts("该整数是0。");
//	else if(no > 0)
//		puts("该整数是正数。");
//	else if (no < 0)
//		puts("该整数是负数。");
//
//	return 0;
//}
//int main()
//{
//	int i;
//	printf("请输入一个整数：");
//	scanf("%d", &i);
//	if (i == 0)
//		printf("该整数的绝对值是%d", i);
//	else if(i > 0)
//		printf("该整数的绝对值是%d", i);
//	else
//		printf("该整数的绝对值是%d", -i);
//
//	return 0;
//}
//int main()
//{
//    int a;    //布尔型变量的返回值就是一个逻辑值
//    int i;
//
//    a = (5 >= 3);    //返回值为真 
//    printf("%d\n", a);
//
//    a = (5 <= 3);    //返回值为假
//    printf("%d\n", a);
//
//    a = (5 == 3);   //返回值为假 
//    printf("%d\n", a);
//
//    a = (5 != 3);   //返回值为真
//    printf("%d\n", a);
//
//    i = 1;
//    while (1)    // while的条件为非零时为真，为0时为假，自己可换几个值试试。 
//    {
//        printf("%d ", i);
//        i += 1;
//        if (i > 10)
//            break;
//    }
//}
//int main(void)
//{
//	int a;
//
//	a = (5 >= 3);
//	printf("%d\n", a);
//
//	a = (5 <= 3);
//	printf("%d\n", a);
//
//	a = (5 == 3);
//	printf("%d\n", a);
//
//	a = (5 != 3);
//	printf("%d\n", a); return 0;
//}
//计算较大值
//int main()
//{
//	int n1, n2;
//	puts("请输入两个整数。");
//	printf("整数1：");
//	scanf("%d", &n1);
//	printf("整数2：");
//	scanf("%d", &n2);
//	
//	if (n1 > n2)
//		printf("较大的数是%d\n", n1);
//	else
//		printf("较大的数是%d\n", n2);
//
//	return 0;
//}

//int main()
//{
//	int i, j, max;
//
//	puts("请输入两个整数。");
//	printf("整数1：");
//	scanf("%d", &i);
//	printf("整数2：");
//	scanf("%d", &j);
//
//	if (i > j)
//		max = i;
//	else
//		max = j;
//	printf("较大的数是%d", max);
//	return 0;
//}

//3个数比大小
//int main()
//{
//	int n1, n2, n3, max;
//	puts("请输入3个整数。");
//		printf("整数1：");
//		scanf("%d", &n1);
//		printf("整数2：");
//		scanf("%d", &n2);
//		printf("整数3：");
//		scanf("%d", &n3);
//
//		max = n1;
//		if (max < n2)
//		{
//			max = n2;
//		}
//		if (max < n3)
//		{
//			max = n3;
//		}
//		printf("较大数是%d。", max);
//	return 0;
//}

//int main()
//{
//	int n1, n2, max;
//	puts("请输入3个整数。");
//			printf("整数1：");
//			scanf("%d", &n1);
//			printf("整数2：");
//			scanf("%d", &n2);
//			max = (n1 > n2) ? n1 : n2;
//			printf("较大数是%d", max);
//
//	return 0;
//}
//int main()
//{
//	int n1, n2;
//	printf("整数1：");
//	scanf("%d", &n1);
//	printf("整数2：");
//	scanf("%d", &n2);
//	printf("n1和n2之间的差是%d", (n1 > n2) ? n1 - n2 : n2 - n1);
//	return 0;
//}
//int main()
//{
//	int n1, n2, n3, min;
//	puts("请输入3个整数。");
//	printf("整数1：");
//	scanf("%d", &n1);
//	printf("整数2：");
//	scanf("%d", &n2);
//	printf("整数3：");
//	scanf("%d", &n3);
//
//	min = n1;
//	if (n2 < min)
//		min = n2;
//	if (n3 < min)
//		min == n3;
//	printf("最小的数是%d", min);
//	return 0;
//}

//int main()
//{
//	int n1, n2, n3, n4, max1, max2, max;
//
//	puts("请输入4个整数。");
//	printf("整数1：");
//	scanf("%d", &n1);
//	printf("整数2：");
//	scanf("%d", &n2);
//	printf("整数3：");
//	scanf("%d", &n3);
//	printf("整数4：");
//	scanf("%d", &n4);
//
//	max1 = (n1 > n2) ? n1 : n2;
//	max2 = (n3 > n4) ? n3 : n4;
//	max = (max1 > max2) ? max1 : max2;
//
//	printf("最大值是%d", max);
//	return 0;
//}