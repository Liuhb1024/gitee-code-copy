#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//定义学生类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	float weight;
//} s4, s5, s6;//全局变量
//
//int main()
//{
//	//int num = 0;
//	struct Stu s1;//局部变量
//	struct Stu s2;
//	struct Stu s3;
//
//	return 0;
//}

//匿名结构体类型
//struct 
//{
//	char c;
//	int a;
//	double d;
//}s1;
//
//struct
//{
//	char c;
//	int a;
//	double d;
//}* ps;
//
//int main()
//{
//	//ps = &s1;//err
//
//	return 0;
//}

//这是一个错误的示范
//struct Node
//{
//	int data;
//	struct Node n;
//};

//struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//};
//
//int main()
//{
//	struct Node n1;
//	struct Node n2;
//	n1.next =  &n2;
//
//	return 0;
//}

//typedef struct
//{
//	int data;
//	char c;
//} S;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//

//
//struct S
//{
//	int a;
//	char c;
//}s1;
//
//struct S s3;
//
//struct B
//{
//	float f;
//	struct S s;
//};
//
//int main()
//{
//	//int arr[10] = {1,2,3};
//	//int a = 0;
//	struct S s2 = {100, 'q'};
//	struct S s3 = {.c = 'r', .a = 2000};
//	struct B sb = { 3.14f, {200, 'w'}};
//	printf("%f,%d,%c\n", sb.f, sb.s.a, sb.s.c);
//
//	return 0;
//}

//
//struct S
//{
//	char name[100];
//	int* ptr;
//};
//
//int main()
//{
//	int a = 100;
//	struct S s = {"abcdef", NULL};
//
//	return 0;
//}
//
//struct S1
//{
//	int a;
//	char c;
//};
//
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S3
//{
//	char c1;
//	int a;
//	char c2;
//	char c3;
//}; 
//
//int main()
//{
//	//5 6 7
//	//8 8 8
//	//8 12 12
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}

#include <stddef.h>


//struct S
//{
//	char c;
//	int a;
//};
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, a));//4
//
//	return 0;
//}
//


//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S4));
//
//	return 0;
//}

//#pragma pack(1)
//struct S
//{
//	char c1;//1 1 1
//	int i;  //4 1 1
//	char c2;//1 1 1
//};
//#pragma pack()
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(const struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);//传结构体
//	print2(&s);//传地址
//	return 0;
//}

//位段 - 二进制位
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};//47 bit
////
//
//int main()
//{
//	struct A sa = {0};
//	printf("%d\n", sizeof(sa));
//
//	return 0;
//}
//

//一个例子
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	
//	return 0;
//}

//enum Sex
//{
//	//枚举的可能取值,默认是从0开始，递增1的
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//

//0 - EXIT
//1 - PLAY
//
//#define EXIT 0
//#define PLAY 1


enum OPTION
{
	EXIT,
	PLAY,
	ADD,
	DEL
};

int main()
{
	enum OPTION op = EXIT;
	int arr[PLAY];

	return 0;
}