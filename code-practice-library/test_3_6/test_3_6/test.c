#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//#include<stdio.h>
//
//void LeftRound(char* arr, int time)
//{
//	int i, j, tmp;
//	int len = strlen(arr);
//	time %= len;
//	for (i = 0; i < time; i++)
//	{
//		tmp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//		
//	}
//}
//
//int main()
//{
//	char arr[10] = {0};
//	int time = 0;
//	scanf("%c", &arr[10]);
//	LeftRound(arr,time);
//	return 0;
//}

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
#include<stdio.h>

int findnum(int a[][3], int x, int y, int f)
{
	int i = 0, j = y - 1;
	while (j >= 0 && i < x)
	{
		if (a[i][j] < f)
		{
			i++;
		}
		else if (a[i][j] > f)
		{
			j--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int a[][3] = { {1,3,5} ,{3,5,7} ,{5,7,9} };
	if (findnum(a, 3, 3, 2))
	{
		printf("It has been found!\n");
	}
	else
	{
		printf("It hasn't been found!\n");
	}
	return 0;
}