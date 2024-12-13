#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int findRound(const char* src, char* find)
{
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcpy(tmp, src);
	return strstr(tmp, find) != NULL;
}
*/

//qsort使用练习
#include <stdio.h>      
#include <stdlib.h>     
//
//int values[] = { 40, 10, 100, 90, 20, 25 };
//
//int compare(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//	int n;
//	qsort(values, 6, sizeof(int), compare);
//	for (n = 0; n < 6; n++)
//		printf("%d ", values[n]);
//	return 0;
//}

void myqsort(void* base, size_t nitems, size_t size, int(*compar)(const void*, const void*))
{
	int i, j;
	char* st = (char*)base; //void *不方便加减，用char *加减轻松且字节跳转为1，方便控制。
	char tmp[16]; //考虑到long double类型，临时空间做成16字节比较保险

	for (i = 0; i < nitems - 1; i++)
	{
		for (j = 0; j < nitems - 1 - i; j++) //冒泡常用循环头
		{
			if (compar(st + j * size, st + (j + 1) * size)) 
			{
				memcpy(tmp, st + j * size, size); 
				memcpy(st + j * size, st + (j + 1) * size, size);
				memcpy(st + (j + 1) * size, tmp, size);
			}
		}
	}
}