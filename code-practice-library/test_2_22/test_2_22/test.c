#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//F5  - 开始调试
//ctrl+f5 开始执行(不调试)
//F9 设置断点/取消断点
//F10 逐过程
//F11 逐语句 - 遇到函数会进入函数
//F5是和F9配合使用的

//
//fn-辅助功能键
//
//
//
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int g_val = 100;
//
//int main()
//{
//	int i = 0;
//	char ch[] = "abcdef";
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test();
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//

//void test(int arr[])
//{
//
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	test(arr);
//	return 0;
//}


//实现代码：求 1！+2！+3！ ...+ 10! ；不考虑溢出。
//
//int main()
//{
//	int n = 0;
//	//n! = 1*2*3*..*n
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	//1+2+6 = 9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//模拟实现库函数：strcpy
//strcpy
//string copy
//字符串拷贝
//
#include <string.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;// \0的拷贝
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++ )
//	{
//		;
//	}
//}
#include <assert.h>

//健壮性
//鲁棒性

//strcpy函数返回的是目标空间的起始地址

char* my_strcpy(char* dest, const char* src)
{
	//断言 - 保证指针的有效性
	assert(dest && src);
	char* ret = dest;
	//把src指向的字符串拷贝到dest指向是的数组空间，包括\0字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "hello world";
	char arr2[20] = { 0 };
	//链式访问
	printf("%s\n", my_strcpy(arr2, arr1));

	return 0;
}

//
//int main()
//{
//	//int n = 10;
//	//n = 20;
//	int n = 100;
//	const int m = 0;
//	//m = 20;//err
//	//const 修饰指针
//	//1. const 放在*的左边, *p不能改了，也就是p指向的内容，不能通过p来改变了。但是p是可以改变的，p可以指向其他的变量
//	//2. const 放在*的右边,限制的是p，p不能改变，但是p指向的内容*p，是可以通过p来改变的
//	//
//	//const int * p = &m;
//	//*p = 20;//err
//	//p = &n;//ok
//
//	int* const p = &m;
//	*p = 20;//ok
//	p = &n;//err
//	printf("%d\n", m);
//
//	return 0;
//}

