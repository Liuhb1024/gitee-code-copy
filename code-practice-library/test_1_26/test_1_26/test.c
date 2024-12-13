#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//
//void bubble_sort(int arr[])
//{
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	//冒泡排序的躺数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//}
//
//int main()
//{
//	int arr[] = { 3,1,5,9,2,4,7,6,8,0 };
//	//排序-升序
//	//冒泡排序
//	int sz;
//	bubble_sort(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n\n", &arr + 1);
//
//	return 0;
//}
#include<stdio.h>
                 //语法上可以是数组，但是本质：int * arr
void bubble_sort(int arr[],int sz)
{
	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
	        //sizeof(arr)算的是一个指针的大小
	//冒泡排序的躺数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}
}

int main()
{
	int arr[] = { 3,1,5,9,2,4,7,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序-升序
	//冒泡排序
	bubble_sort(arr,sz);//arr是数组首元素地址，即 3的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
