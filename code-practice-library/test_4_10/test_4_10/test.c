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

//malloc
//calloc
//realloc - 调整申请的堆区内存的大小的
//补充：realloc也可以像malloc一样申请空间
//#include <stdio.h>
//
//int main()
//{
//	realloc(NULL, 20);//malloc(20);
//	return 0;
//}
//


//柔性数组

//struct S
//{
//	int n;
//	char c;
//	int arr[];//柔性数组成员
//};


//err
//struct SA
//{
//	int arr[];//柔性数组成员
//};

#include <string.h>
#include <errno.h>
#include <stdlib.h>
//
//struct S
//{
//	int n;
//	char c;
//	int arr[0];//柔性数组成员
//};
//
//int main()
//{
//	//      8               + 40
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10*sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	ps->n = 100;
//	ps->c = 'w';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", ps->arr[i]);
//	}
//	//调整arr数组的大小
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		ps = ptr;
//	}
//	//使用
//	//...
//	
//	//释放
//	free(ps);
//	ps = NULL;
//
//	//printf("%d\n", sizeof(struct S));//
//
//	return 0;
//}
//
//struct S
//{
//	int n;
//	char c;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int*ptr = (int*)malloc(10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("malloc2");
//		return 1;
//	}
//	else
//	{
//		ps->arr = ptr;
//	}
//	//使用
//	ps->n = 100;
//	ps->c = 'w';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//扩容 - 调整arr的大小
//	ptr = realloc(ps->arr, 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//	{
//		ps->arr = ptr;
//	}
//	//使用
//
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
