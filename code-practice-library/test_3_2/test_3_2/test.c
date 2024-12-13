#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//

#include<stdio.h>

//void swap_arr(int arr[], int sz)
//{
	/*int left = 0;
	int right = sz - 1;
	int tmp = 0;

	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left--;
		}
		while ((left < right) && (arr[right] % 2 == 1))
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}*/
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr[10]) / sizeof(arr[0]);
//	swap_arr(arr[0], sz);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr[10]) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left--;
//		}
//		while ((left < right) && (arr[right] % 2 == 1))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}for (int i = 0; i < 11; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	}
//	
//	return 0;
//}

//模拟库函数strcpy

//char* my_strcpy(char* dst, const char* src)
//{
//	char* cp = dst;
//	while (*cp++ = *src++);
//	return (dst);
//}

size_t my_strlen(const char* str)
{
	const char* eos = str;
	while (*eos++);
	return(eos - str - 1);
}