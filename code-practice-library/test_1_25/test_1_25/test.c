#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}

//数组创建
//type_t arr_name[const_n];
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小
//#include <stdio.h>
//
////C99语法标准之前，数组大小必须是常量表达式指定
////C99语法标准中，引长变长数组的概念，变长数组中允许数组大小用变量来指定。
//
//int main()
//{
//	int arr[8];
//	char ch[10];
//	float arr2[15];
//	double arr3[3 + 5];
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//创建数组
//	int arr[n];//变长数组不能初始化
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[3] = { 'a','b','c' };
//	int arr1[10] = { 1,2,3 };//不完全初始化，剩余的默认初始化为0
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };//完全初始化
//	//字符数组
//	char arr4[5] = { 'a','b', 99 };//----->'a','b','c', \0, \0
//	char arr5[] = { 'a','b','c' };
//	char arr6[10] = "abcdef";//------>a,b,c,d,e,f,\0,\0,\0
//	return 0;
//}

//如果数组初始化了，可以不指定数组的大小，数组的大小会根据初始化的内容来确定
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//--->a b c \0
//	char arr2[3] = { 'a','b','c' };// -----> a b c
//	char arr3[] = { 'a','b','c' };// -----> a b c
//	return 0;
//}


#include<stdio.h>
#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr3[] = { 'a','b','c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr3);
//
//	return 0;
//}



//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	//printf("%d\n", arr[9]);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//
//	/*int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));*/
//
//	
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	//char* pc;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%p == %p\n", p + i,&arr[i]);
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


	//int arr2[][4] = { {1,2},{3,4},{5,6} };
	//二维数组如果有初始化，行可以省略，列不能省略

	
	//    1  2  3  4
	//    5  6  7  8 
	//    9  10 11 12
	//printf("%d\n", arr1[1][2]);

#include<stdio.h>
int main()
{

	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	for (i = 0; i < 3; i++)//0 1 2
	{
		//列
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}