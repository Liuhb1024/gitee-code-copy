#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
// arr 和 &arr 有什么区别？
// 数组名绝大部分情况下是数组首元素地址
// 但是有两个例外
// 1. sizeof（数组名） - sizeof内部单独放一个数组名的时候，数组名表示的整个数组，计算得到的是数组的总大小
// 2. &arr - 这里的数组名表示整个数组，取出的是整个数组的地址，从地址值的角度来说和数组首元素的地址是一样的，但意义不一样
// 
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//用途
//#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//  int i = 0;
//	//一种奇葩但不方便的写法
//	int(*p)[10] = &arr;
//
//	//p --- &arr
//	//*p --- *&arr
//	//*p --- arr
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *((*p) + i));//*p[i]
//	}
//
// 
// 
//	//下标的形式来访问数组
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	//使用指针来访问
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//
////一维数组传参，形参为数组
//void print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]); 
//	}
//	printf("\n");
//}
//
//void print1(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	print1(arr, sz);
//
//	return 0;
//}

//#include<stdio.h>
//
//void print(int arr[3][5],int r,int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print1(int (*arr)[5],int r ,int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(*(arr+i)+j));//arr[i]
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//
//	//二维数组的数组名，也表示首元素地址
//	//二维数组的首元素是第一行
//	//首元素的地址是第一行的地址，是一个一维数组的地址
//	//二维数组其实是一维数组的数组
//	print1(arr, 3, 5);
//	return 0;
//}


////分析几段代码
//#include<stdio.h>
//int main()
//{
//	int arr[5];//数组
//	int* parr1[10];//指针数组
//	int(*parr2)[10];//数组指针
//
//	int(*parr3[10])[5];
//	//parr3是数组
//	//数组中存放的是数组指针，该指针指向的是又是数组
//	return 0;
//}
//
//传参
//
//一维数组传参，形参可以是数组，当形参是指针的时候，要注意类型

//二维数组传参，函数形参的设计只能省略第一个[]的数字
//因为对一个二维数组，可以不知道有多少行，但是必须真的第一行有多少个元素
//这样才方便运算
// 
//二维数组传参
// 参数可以是指针，也可以是数组
// 如果是数组，行可以省略，但是列不可以省略
// 
// 如果是指针，传过去的是第一行的地址，形参就应该是数组指针

//函数指针
//整型指针 - 指向整型的指针 - int *
//字符指针 - 指向字符的指针 - char *
//数组指针 - 指向数组的指针 - int arr[10];  int(*p)[10] = &arr;
//函数指针 - 指向函数的指针 - 存放函数的地址
//函数有地址吗？
//详细见以下代码
//#include<stdio.h>
////&函数名得到的就是函数的地址
////实际上，&函数名和函数名就是函数的地址
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//pf - 函数指针
//	int (*pf)(int, int) = Add;//函数地址要存放起来，就得放在【函数指针变量】pf 中
//	
//	//int ret = (*pf)(3, 5);
//	//int ret = Add(3,5);
//	//int ret = pf(3, 5);
//	int ret = (********pf)(3, 5);//其实上*在这里没啥用
//	printf("%d", ret);
//	return 0;
//}

//char* test(int c, float* pf)
//{
//
//}
//int main()
//{
//	char(*pt)(int,float*) = test;
//	return 0;
//}
//








