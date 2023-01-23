#define _CRT_SECURE_NO_WARNINGS 1

//goto语句
//#include<stdio.h>
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	printf("heihei\n");
//	goto again;
//	return 0;
//}

//关机程序
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
////使用命令行关机：
////shutdown -s -t 60

//#include<stdio.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, 'x', 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "xxxxxxxx";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//写一个函数可以找出两个整数中的最大值。
//#include<stdio.h>
//get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//Max()
//	//GetMax()
//	int m = get_max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容
//#include<stdio.h>
//void Swap(int x,int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a=%d b=%d", a, b);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}
//
//
#include<stdio.h>
void swap(int* pa,int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);

	printf("交换前：a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后：a=%d b=%d", a, b);

	return 0;
}






























