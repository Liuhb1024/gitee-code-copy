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
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
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
//	//����-����
//	//ð������
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
                 //�﷨�Ͽ��������飬���Ǳ��ʣ�int * arr
void bubble_sort(int arr[],int sz)
{
	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
	        //sizeof(arr)�����һ��ָ��Ĵ�С
	//ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
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
	//����-����
	//ð������
	bubble_sort(arr,sz);//arr��������Ԫ�ص�ַ���� 3�ĵ�ַ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
