#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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

//qsortʹ����ϰ
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
	char* st = (char*)base; //void *������Ӽ�����char *�Ӽ��������ֽ���תΪ1��������ơ�
	char tmp[16]; //���ǵ�long double���ͣ���ʱ�ռ�����16�ֽڱȽϱ���

	for (i = 0; i < nitems - 1; i++)
	{
		for (j = 0; j < nitems - 1 - i; j++) //ð�ݳ���ѭ��ͷ
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