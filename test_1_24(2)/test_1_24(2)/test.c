#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//
//void A()
//{
//
//}
//
//void B()
//{
//
//}
//
//int main()
//{
//
//	return 0;
//}
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	/*int len = strlen("abcdef");
//	printf("%d\n", len);*/
//
//	//printf("%d\n", strlen("abcdef"));
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//int a;//����
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}
//int a = 10;//����


//#include <stdio.h>
//int a;//����
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
////����������
//int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////�����Ķ���
//int Add(int x ,int y)
//{
//	return x + y;
//}

//#include"add.h"
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺
//���룺1234����� 1 2 3 4

//#include<stdio.h>
////%u -�޷��ŵ�����
////%d -�з��ŵ�����
//void Printf(unsigned int n)
//{
//	if (n > 9)
//	{
//		Printf(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
////Printf(1234)
////Printf(123) 4
////Printf(12) 3 4
////Printf(1) 2 3 4
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	Printf(num);
//	return 0;
//}

//��д���������ַ����ĳ��ȡ�
#include <stdio.h>
#include <string.h>

//��������������Ԫ�صĵ�ַ
//
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	// [a b c d e f \0 _ _ _]
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//��д��������������ʱ���������ַ����ĳ��ȡ�

//#include <stdio.h>
//#include <string.h>
//
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	    return 1 + my_strlen(str + 1);
//	else
//		return 0;
//	
//}
//int main()
//{
//	char arr[10] = "abc";
//	// [a b c d e f \0 _ _ _]
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//��n�Ľ׳ˡ��������������

#include<stdio.h>

//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

////���n��쳲����������������������
//#include<stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//40
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//���n��쳲����������������������
#include<stdio.h>
//1 1 2 3 5 8 13 21 34 55........
int Fib(int  n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);//40
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}