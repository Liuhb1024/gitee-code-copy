#define _CRT_SECURE_NO_WARNINGS 1

//
//void A()
//{
//
//}
//
//void B()
//{
//	A();
//}
//
//int main()
//{
//
//	return 0;
//}
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	//printf("%d\n", strlen("abcdef"));
//	
//	printf("%d", printf("%d", printf("%d", 54)));
//
//	return 0;
//}

//int a;//����������
//
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}
//
//int a = 10;//����


//int a;//����
//
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}
//�������Ǻ������������ȶ���(����)��ʹ��
//

//����������
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
//
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}


//�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
//
//#include "add.h"
//
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//

//%u - �޷��ŵ�����
//%d - �з��ŵ�����


//
//Print(1234)
//Print(123) 4
//Print(12) 3 4
//Print(1) 2 3 4
//
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	Print(num);
//	return 0;
//}


#include <stdio.h>
#include <string.h>
//��д��������������ʱ���������ַ����ĳ��ȡ�
//��д���������ַ����ĳ��ȡ�//1

//��������������Ԫ�صĵ�ַ
//

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

//my_strlen("abcdef");
//1+my_strlen("bcdef")
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[10] = "abc";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[10] = "abc";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//
//	return 0;
//}
//

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



//���n��쳲�������

//int count = 0;
//
//int Fib(int n)
//{
//	//ͳ�Ƶ��ǵ�3��쳲����������ظ�����Ĵ���
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//

//�����ķ�ʽ
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//40
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}
//
