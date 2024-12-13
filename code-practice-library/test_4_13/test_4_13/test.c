#define _CRT_SECURE_NO_WARNINGS 1

//int my_strlen(const char* str)
//{
//	return 0;
//}
//
//int main()
//{
//	//指针数组
//	char* arr[10];
//	//数组指针
//	int arr2[5] = { 0 };
//	int (*p)[5] = &arr2;//p是一个指向数组的指针变量
//	//函数指针
//	int (* pf)(const char*) = my_strlen;//pf是一个指向函数的函数指针变量
//	//(*pf)("abcdef");
//	//my_strlen("abcdef");
//	//pf("abcdef");
//
//	//函数指针数组 - 存放函数指针的数组
//	int (* pfArr[10])(const char*);
//
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	//函数指针数组
//	int (* pfArr[4])(int, int) = {Add, Sub};
//	//
//	int (*(* ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个指向函数指针数组的指针变量
//
//	return 0;
//}
#include <stdio.h>


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////写一个计算器能完成整数的+-*/
////增加: << >> & | ^ && ||
////
//void menu()
//{
//	printf("******************************\n");
//	printf("****   1. add    2.sub   *****\n");
//	printf("****   3. mul    4.div   *****\n");
//	printf("****   0. exit           *****\n");
//	printf("******************************\n");
//}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//

//int main()
//{
//	//存放函数指针的数组 - 函数指针数组
//	int (* pf[4])(int, int) = {Add, Sub, Mul, Div};
//	//0 1 2 3
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pf[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}
//
//

//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//排序
//	//使用冒泡排序的算法，来排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//
//	bubble_sort(arr, sz);
//	//打印
//	print_arr(arr, sz);
//
//	return 0;
//}
//
//
//void qsort(void* base, //指向了待排序数组的第一个元素
//	       size_t num,   //待排序的元素个数
//	       size_t size, //每个元素的大小，单位是字节
//	       int (* cmp)(const void*, const void*) //指向一个函数，这个函数可以比较2个元素的大小
//          );
//

#include <stdlib.h>
#include <string.h>

//qsort函数的使用者提供这个函数
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

test1()
{
	int arr[] = { 3,1,5,2,4,9,8,6,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用qsort来排序整型数组，这里就要提供一个比较函数，这个比较函数能够比较2个整数的大小
	//qsort 默认是排成升序的
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

//测试qsort 排序结构体数据
struct Stu
{
	char name[20];
	int age;
};

//按照年龄来比较
int cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}

int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

void test2()
{
	struct Stu s[] = { {"zhangsan", 30}, {"lisi", 25}, {"wangwu", 50} };
	int sz = sizeof(s) / sizeof(s[0]);
	//测试按照年龄来排序
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//测试按照名字来排序
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//假设排序为升序
//希望这个bubble_sort函数可以排序任意类型的数据
void bubble_sort(void* base, size_t num, size_t width,
	int (*cmp)(const void* p1, const void* p2))
{
	//要确定趟数
	size_t i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int flag = 1;//假设已经有序了
		//一趟冒泡排序的过程
		size_t j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//两个相邻的元素比较
			//arr[j] arr[j+1]
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				flag = 0;
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void test3()
{
	int arr[] = { 3,1,5,2,4,9,8,6,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

void test4()
{
	struct Stu s[] = { {"zhangsan", 30}, {"lisi", 25}, {"wangwu", 50} };
	int sz = sizeof(s) / sizeof(s[0]);
	//测试按照年龄来排序
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//测试按照名字来排序
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}

//int main()
//{
//	int a = 10;
//	//char* p = &a;//int*
//	void* p = &a;//void* - 无具体类型的指针，所以它可以接收任何类型的地址
//	//*p;//err,void*的指针不能解引用操作符
//	//p++;//err
//	*(int*)p;
//	return 0;
//}