#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//F5  - ��ʼ����
//ctrl+f5 ��ʼִ��(������)
//F9 ���öϵ�/ȡ���ϵ�
//F10 �����
//F11 ����� - ������������뺯��
//F5�Ǻ�F9���ʹ�õ�

//
//fn-�������ܼ�
//
//
//
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int g_val = 100;
//
//int main()
//{
//	int i = 0;
//	char ch[] = "abcdef";
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test();
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//

//void test(int arr[])
//{
//
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	test(arr);
//	return 0;
//}


//ʵ�ִ��룺�� 1��+2��+3�� ...+ 10! �������������
//
//int main()
//{
//	int n = 0;
//	//n! = 1*2*3*..*n
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	//1+2+6 = 9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//ģ��ʵ�ֿ⺯����strcpy
//strcpy
//string copy
//�ַ�������
//
#include <string.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;// \0�Ŀ���
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++ )
//	{
//		;
//	}
//}
#include <assert.h>

//��׳��
//³����

//strcpy�������ص���Ŀ��ռ����ʼ��ַ

char* my_strcpy(char* dest, const char* src)
{
	//���� - ��ָ֤�����Ч��
	assert(dest && src);
	char* ret = dest;
	//��srcָ����ַ���������destָ���ǵ�����ռ䣬����\0�ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "hello world";
	char arr2[20] = { 0 };
	//��ʽ����
	printf("%s\n", my_strcpy(arr2, arr1));

	return 0;
}

//
//int main()
//{
//	//int n = 10;
//	//n = 20;
//	int n = 100;
//	const int m = 0;
//	//m = 20;//err
//	//const ����ָ��
//	//1. const ����*�����, *p���ܸ��ˣ�Ҳ����pָ������ݣ�����ͨ��p���ı��ˡ�����p�ǿ��Ըı�ģ�p����ָ�������ı���
//	//2. const ����*���ұ�,���Ƶ���p��p���ܸı䣬����pָ�������*p���ǿ���ͨ��p���ı��
//	//
//	//const int * p = &m;
//	//*p = 20;//err
//	//p = &n;//ok
//
//	int* const p = &m;
//	*p = 20;//ok
//	p = &n;//err
//	printf("%d\n", m);
//
//	return 0;
//}

