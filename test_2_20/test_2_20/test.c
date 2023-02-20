#define _CRT_SECURE_NO_WARNINGS 1

//乘法表--函数
//#include<stdio.h>
//
//void Printf_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i;j++)
//		{
//			printf(" %-2d*%-2d = %-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//打印对应的乘法口诀表
//	Printf_table(n);
//	return 0;
//}

//求n的次方

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%lf", pow(n, k));
//	return 0;
//}

//#include<stdio.h>
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n , k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%lf\n", Pow(n, k));
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//DigitSum(1729)
//DigitSum(172) + 9
//DigitSum(17) + 2 + 9
//DigitSum(1) + 7 + 2 + 9
//#include<stdio.h>
//
//int DigitSum(int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}


//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";--->fedcba

#include<stdio.h>
//先用库函数
//#include<string.h>
#include<assert.h>
//void reverse_string(char* str)
//{
//	assert(str);
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--; 
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//不用库函数
//非递归
// #include<stdio.h>
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//递归思路:
//reverse_string(abcdef)
//交换a和f + reverse_string(bcde)
//#include<stdio.h>
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
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;//1
//	*str = *(str + len - 1);//2   a  f
//	*(str + len - 1) = '\0';//3
//	if(my_strlen(str+1)>=2)
//	reverse_string(str+1);//4
//	*(str + len - 1) = tmp;//5
//}
//
//int main()
//{
//	//char arr[] = "abcdefg";
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//数组名是常量的地址，不能多数组名进行赋值或者++--的操作
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,0 };
//	//交换
//	int i = 0;
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//#include<stdio.h>
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Printf(arr, sz);
//	reverse(arr, sz);
//	Printf(arr, sz);
//	init(arr,sz);
//	Printf(arr, sz);
//	return 0;
//}