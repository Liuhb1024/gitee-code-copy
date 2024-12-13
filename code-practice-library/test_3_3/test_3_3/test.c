#define _CRT_SECURE_NO_WARNINGS 1

/ 指针数组 - 是数组 - 是一种存放指针的数组
//数组指针 - 是指针 - 是一种指向数组的指针 - 存放的是数组的地址

//int main()
//{
//	//指针数组
//	char* arr[4];
//	//数组指针
//	int arr[5];
//	int (*p)[5] = &arr;
//
//	return 0;
//}

//int arr[10];
//arr 和 &arr 有什么区别？
#include <stdio.h>


//数组名绝大部分情况下是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名) - sizeof内部单独放一个数组名的时候，数组名表示的整个数组，计算得到的是数组的总大小
//2. &arr  - 这里的数组名表示整个数组，取出的是整个数组的地址,从地址值的角度来讲和数组首元素的地址是一样的，但是意义不一样
//

//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));
//	printf("%p\n", arr);//int * 
//	printf("%p\n", arr+1);//4
//
//	printf("%p\n", &arr[0]);//int* 
//	printf("%p\n", &arr[0]+1);//4
//
//	printf("%p\n", &arr);//int(*)[10]
//	printf("%p\n", &arr+1);
//	int (*p)[10] = &arr;//p是一个数组指针
//	//int(*)[10]
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int (* p)[10] = &arr;
//	int i = 0;
//	//p  --- &arr
//	//*p --- *&arr
//	//*p --- arr
//	//虽然对，但是不推荐
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//	//虽然对，但是不推荐
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *((*p) + i));
//	}*/
//
//	//使用指针来访问
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	//下标的形式访问数组
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	return 0;
//}

//一维数组传参，形参是数组
//void print1(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////一维数组传参，形参是指针
//void print(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//
//void print1(int arr[3][5], int r, int c)
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
//void print(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(*(arr + i) + j));//arr[i]
//			printf("%d ", arr[i][j]);//arr[i]
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//	//二维数组的数组名，也表示首元素的地址
//	//二维数组的首元素是第一行
//	//首元素的地址就是第一行的地址,是一个一维数组的地址
//	//
//	print(arr, 3, 5);
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	return x + y;
//}

//&函数名得到就是函数的地址

//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//pf就是函数指针
//	int (* pf)(int, int) = Add;//函数的地址要存起来，就得放在【函数指针变量】中
//	
//	int ret = (*pf)(3, 5);
//	//int ret = Add(3, 5);
//	//int ret = pf(3, 5);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//char* test(int c, float* pf)
//{
//
//}
//int main()
//{
//	char* (*pt)(int, float*) = test;
//
//	return 0;
//}
//

//typedef int* ptr_t;
//typedef void(*pf_t)(int);//将void(*)(int)类型重新起个别名叫pf_t
//
////
//typedef void(*pf_t2)(int);//pf_t2是类型名
//void(*pf)(int);//pf是函数指针变量的名字

//代码1
//int main()
//{
//	//1. 将0强制类型转换为void (*)() 类型的函数指针
//	//2. 这就意味着0地址处放着一个函数，函数没参数，返回类型是void
//	//3. 调用0地址处的这个函数
//	//下面代码是一次函数调用
//	//(*( void (*)() ) 0)();
//
//	//代码2
//	void (* signal(int, void(*)(int) ) )(int);
//	//
//	pf_t signal(int, pf_t);
//	//上述的代码是一个函数的声明
//	//函数的名字是signal
//	//signal函数的参数第一个是int类型，第二个是void(*)(int)类型的函数指针
//	//该函数指针指向的函数参数是int，返回类型是void
//	// 
//	//signal函数的返回类型也是一个函数指针
//	//该函数指针指向的函数参数是int，返回类型是void
//	//
//	//void (* signal(int, void(*)(int)))(int)
//	return 0;
//}
//



//
//函数指针数组
//数组的每个元素是一个函数指针
//

//指针数组
//整型指针的数组
//int* arr[4];
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
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
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




int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//写一个计算器能完成整数的+-*/
//增加: << >> & | ^ && ||
//
void menu()
{
	printf("******************************\n");
	printf("****   1. add    2.sub   *****\n");
	printf("****   3. mul    4.div   *****\n");
	printf("****   0. exit           *****\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	//转移表 - 函数指针的数组
	int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
	//0    1    2    3    4

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}