#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
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
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k >= 1)
//		return n * Pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = Pow(n, k);
//	printf("%d的%d次方的值为%d\n", n, k, ret);
//	return 0;
//}

//#include<stdio.h>
//
//int DigitSum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
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
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//void Printf(unsigned int n)
//{
//	if (n > 9)
//	{ 
//		Printf(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	Printf(n);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while ('\0' != *arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[10] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//int my_strlen(char* arr)
//{
//	if ('\0' != *arr)
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[10] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int reverse_string(char* string)
//{
//	char* left = string;
//	char* right = string + strlen(string) - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", string);
//}
//
//int main()
//{
//	char arr[10] = "abcdef";
//	reverse_string(arr);
//	return 0;
//}

#include<stdio.h>
#include<string.h>

void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
	
}

int main()
{
	char arr[10] = "abcdefg";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}

