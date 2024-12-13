#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;//a是整形，占用4个字节的内存空间，每个字节都有对应的地址
//	
//	int* pa = &a;//&a - 得到的是a的地址（指针），其实得到的是a所占内存中4个字节中第一个字节的地址，pa是指针变量
//
//	pa = 10;
//
//	return 0;
//}

//int main()
//{
//	//char c;//1
//	//short s;//2
//	//int i;//4
//
//	//char* pc;//4
//	//short* ps;//4
//	//int* pi;//4
//
//	//printf("%zu\n", sizeof(char*));
//	//printf("%zu\n", sizeof(short*));
//	//printf("%zu\n", sizeof(int*));
//
//
//	return 0;
//}

//
//指针类型决定了，在解引用指针的时候能访问几个字节
//

//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = &a;//int*
//	*pc = 0;
//
//	return 0;
//}
//


//指针类型的第二个意义
//指针类型决定了，指针进行+1、-1的时候，一步走多远
//
//
//int main()
//{
//	int a = 10;
//	int*  pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[10] = {0};
//	char* p = &arr[0];
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//

//err
//int main()
//{
//	int* p;
//	*p = 20;
//
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}
//

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*p = test();
//	*p = 100;
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	//一个指针不知道应该指向哪里的时候，暂时可以初始化为NULL;
//	//int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 100;
//	}
//
//	return 0;
//}

//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		//str++;//指针+整数
//		str = str + 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = &arr[0] - &arr[9];
//	printf("%d\n", n);
//
//	return 0;
//}
//



//int my_strlen(char * str)
//{
//	char* start = str;
//	while (*str != '\0')
//		str++;
//	return str - start;//指针-指针得到的是元素个数
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]
//	int i = 0;
//	//存放
//	for (i = 0; i < 10; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	
//	//打印
//	p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}
//



//二级指针

//int main()
//{
//	int a = 10;//a是要在内存中申请4个字节的空间的
//	//一级指针
//	int* pa = &a;//0x0012ff40, pa是指针变量，用来存放地址，也得向内存申请，申请4/8
//	//二级指针
//	int** ppa = &pa;//0x0012ff48
//
//	int** * pppa = &ppa;
//
//	printf("%d\n", **ppa);
//
//	return 0;
//}
//


//指针数组
//int main()
//{
//	//int* p;
//	//int arr[10];//
//	//char ch[5];//
//
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	////指针数组-存放指针的数组
//	//int* arr[] = { &a, &b, &c };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *(arr[i]));
//	//}
//
//	char* arr2[5];
//	float* arr3[5];
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];//[char* char* char* char* char*]
//	char** p = arr;//&arr[0] - char**
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* ptr[] = {arr1, arr2, arr3};
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", ptr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//

//
//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i[arr]);
//		//i[arr] -- *(i+arr)
//		//arr[i] -- *(arr+i)
//	}
//
//	//int* p = arr;
//	//test(arr, 10);
//	////
//	////*(arr+i) -- *(p+i) -- arr[i]
//	////arr[i] --> *(arr+i) --> *(i+arr) -- i[arr]
//	////
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p = %p\n", &arr[i], p+i);
//	//}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5];
//	//arr[i][j]
//	//(*(arr+i))[j]
//	//*(*(arr+i)+j)
//
//	return 0;
//}

//1
//struct Book
//{
//	char name[20];
//	int price;
//};

//2
//struct Book
//{
//	char name[20];
//	int price;
//}b3, b4, b5;

//3
//typedef struct Book
//{
//	char name[20];
//	int price;
//}Book;
//Book b3;
//Book b4;
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Book b1;
//	struct Book b2;
//	Book b3;
//
//	return 0;
//}
//

//struct Book
//{
//	char name[20];
//	int price;
//};
//
//typedef struct Book Book;
//

//
//struct S
//{
//	char c;
//	char arr[10];
//	int* p;
//}s1, s2;
//
//struct S s3;
//
//struct B
//{
//	int a;
//	struct S s;
//	double d;
//}sb1, sb2;
//
//struct B sb3;
//
//int main()
//{
//	struct S s4 = {'c', "zhangsan", NULL};
//
//	int a = 10;
//	struct B sb4 = { 100, {'q', "lisi", &a}, 3.14};
//
//	return 0;
//}
//
//struct Book
//{
//	char name[20];
//	int price;
//};
//
//void print(struct Book* p)
//{
//	printf("%s %d\n", p->name, p->price);
//}
//
//int main()
//{
//	struct Book b1 = {"鹏哥C语言", 66};
//	struct Book b2 = { .price = 80, .name = "杭哥C++"};
//	//结构体变量.结构体成员
//	printf("%s %d\n", b1.name, b1.price);
//	printf("%s %d\n", b2.name, b2.price);
//	//结构体指针->结构体成员
//	//struct Book* p1 = &b1;
//	print(&b1);
//	return 0;
//}

struct S
{
	int arr[100];
	int n;
};

void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ss.arr[i]);
	}
	printf("\n%d\n", ss.n);
}

void print2(struct S* ps)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n%d\n", ps->n);
}

int main()
{
	struct S s = { {1,2,3,4,5}, 100 };
	print1(s);
	print2(&s);

	return 0;
}