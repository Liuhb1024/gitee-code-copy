#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	//����
//	//����
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	/*for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	/*for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("calloc()-->%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//

//
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//	int* ptr = (int*)realloc(p, 400000);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		//ʹ��
//		for (i = 5; i < 10; i++)
//		{
//			p[i] = i + 1;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int* p = (int*)malloc(20);
//	//���ܻ���ֶ�NULLָ��Ľ����ò���
//	//����malloc�����ķ���ֵҪ�жϵ�
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ܻ���ֶ�NULLָ��Ľ����ò���
//	//����malloc�����ķ���ֵҪ�жϵ�
//	int i = 0;
//	//Խ�����
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;
//	//....
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	int i = 0;
//	//[1] [2] [3] [4] [5] [ ] [ ] [ ] [ ] [ ] 
//	for (i = 0; i < 5; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int*p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	// 
//	free(p);
//	p = NULL;
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(20);
//	//ʹ��
//	//���1 2 3 4 5
//}
//
//int main()
//{
//	test();
//	//
//	return 0;
//}
//
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}
//




//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int main()
//{
//	//char* p = "hehe\n";
//	//printf("hehe\n");
//	//printf("%s\n", "hehe");
//
//	return 0;
//}
//

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	//printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}
//

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�ͷ�
//	free(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	str = NULL;

	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}