#define _CRT_SECURE_NO_WARNINGS 1

//void fun(int* a, int* b)
//{
//	int *c;
//	c = a;
//	a = b;
//	b = c;
//}
//int main()
//{
//	int x = 3, y = 5, * p = &x, * q = &y;
//	fun(p, q);
//	printf("%d %d", *p, *q);
//	return 0;
//}
//#include<stdio.h>
//void Swap3(int* px, int* py)
//{
//	int* tmp = px;
//	px = py;
//	py = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* p = &a;
//	int* q = &b;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap3(p, q);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//дһ�����������ж�һ�����ǲ���������
//����������1
//������������2
//#include<stdio.h>
//#include<math.h>
//
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (1 == is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

//дһ�������ж�һ���ǲ������ꡣ
//#include<stdio.h>
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//		
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�Ƿ�Ϊ����
//		//�ǣ�����1
//		//���ǣ�����0
//		if (is_leap_year(y))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//#include<stdio.h>
//#include<string.h>
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while(left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����±꣬�Ҳ����ͷ���-1
//	//Ϊʲô������0��?��Ϊ�����ҵ����պþ��ǵ�һ����������������ʷ���-1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��


// void Add(int* p)
//{
//	//*p = *p + 1;
//	*p++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//int Add(int n)
//{
//	 return n + 1;
//}
//
//int main()
//{
//	int num = 0;
//	num = Add(num); 
//	printf("%d\n", num);
//	num = Add(num);
//	printf("%d\n", num);
//	num = Add(num);
//	printf("%d\n", num);
//	return 0;
//}
















#include<stdio.h>
#include<string.h>

int binary_search(int arr[], int k)
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while(left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);
	int ret = binary_search(arr, k);
	if (ret == -1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±���%d\n", ret);
	return 0;
}