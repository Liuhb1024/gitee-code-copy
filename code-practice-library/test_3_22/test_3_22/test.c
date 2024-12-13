#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	//张三
//	//申请
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	/*for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	/*for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("calloc()-->%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
//

//
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//	int* ptr = (int*)realloc(p, 400000);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		//使用
//		for (i = 5; i < 10; i++)
//		{
//			p[i] = i + 1;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int* p = (int*)malloc(20);
//	//可能会出现对NULL指针的解引用操作
//	//所以malloc函数的返回值要判断的
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//可能会出现对NULL指针的解引用操作
//	//所以malloc函数的返回值要判断的
//	int i = 0;
//	//越界访问
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//对非动态开辟内存使用free释放
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;
//	//....
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	int i = 0;
//	//[1] [2] [3] [4] [5] [ ] [ ] [ ] [ ] [ ] 
//	for (i = 0; i < 5; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//对同一块动态内存多次释放
//int main()
//{
//	int*p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
//	// 
//	free(p);
//	p = NULL;
//
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(20);
//	//使用
//	//存放1 2 3 4 5
//}
//
//int main()
//{
//	test();
//	//
//	return 0;
//}
//
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}
//




//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int main()
//{
//	//char* p = "hehe\n";
//	//printf("hehe\n");
//	//printf("%s\n", "hehe");
//
//	return 0;
//}
//

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	//printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}
//

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//释放
//	free(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	str = NULL;

	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}