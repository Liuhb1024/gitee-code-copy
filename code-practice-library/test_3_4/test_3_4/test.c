#define _CRT_SECURE_NO_WARNINGS 1

//int my_strlen(const char* str)
//{
//	return 0;
//}
//
//int main()
//{
//	//ָ������
//	char* arr[10];
//	//����ָ��
//	int arr2[5] = { 0 };
//	int (*p)[5] = &arr2;//p��һ��ָ�������ָ�����
//	//����ָ��
//	int (* pf)(const char*) = my_strlen;//pf��һ��ָ�����ĺ���ָ�����
//	//(*pf)("abcdef");
//	//my_strlen("abcdef");
//	//pf("abcdef");
//
//	//����ָ������ - ��ź���ָ�������
//	int (* pfArr[10])(const char*);
//
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	//����ָ������
//	int (* pfArr[4])(int, int) = {Add, Sub};
//	//
//	int (*(* ppfArr)[4])(int, int) = &pfArr;//ppfArr��һ��ָ����ָ�������ָ�����
//
//	return 0;
//}
#include <stdio.h>


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////дһ�������������������+-*/
////����: << >> & | ^ && ||
////
//void menu()
//{
//	printf("******************************\n");
//	printf("****   1. add    2.sub   *****\n");
//	printf("****   3. mul    4.div   *****\n");
//	printf("****   0. exit           *****\n");
//	printf("******************************\n");
//}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//

//int main()
//{
//	//��ź���ָ������� - ����ָ������
//	int (* pf[4])(int, int) = {Add, Sub, Mul, Div};
//	//0 1 2 3
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pf[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}
//
//

//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//����
//	//ʹ��ð��������㷨��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//
//	bubble_sort(arr, sz);
//	//��ӡ
//	print_arr(arr, sz);
//
//	return 0;
//}
//
//
//void qsort(void* base, //ָ���˴���������ĵ�һ��Ԫ��
//	       size_t num,   //�������Ԫ�ظ���
//	       size_t size, //ÿ��Ԫ�صĴ�С����λ���ֽ�
//	       int (* cmp)(const void*, const void*) //ָ��һ������������������ԱȽ�2��Ԫ�صĴ�С
//          );
//

#include <stdlib.h>
#include <string.h>

//qsort������ʹ�����ṩ�������
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

test1()
{
	int arr[] = { 3,1,5,2,4,9,8,6,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��qsort�������������飬�����Ҫ�ṩһ���ȽϺ���������ȽϺ����ܹ��Ƚ�2�������Ĵ�С
	//qsort Ĭ�����ų������
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

//����qsort ����ṹ������
struct Stu
{
	char name[20];
	int age;
};

//�����������Ƚ�
int cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}

int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

void test2()
{
	struct Stu s[] = { {"zhangsan", 30}, {"lisi", 25}, {"wangwu", 50} };
	int sz = sizeof(s) / sizeof(s[0]);
	//���԰�������������
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//���԰�������������
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//��������Ϊ����
//ϣ�����bubble_sort�������������������͵�����
void bubble_sort(void* base, size_t num, size_t width,
	int (*cmp)(const void* p1, const void* p2))
{
	//Ҫȷ������
	size_t i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int flag = 1;//�����Ѿ�������
		//һ��ð������Ĺ���
		size_t j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//�������ڵ�Ԫ�رȽ�
			//arr[j] arr[j+1]
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				flag = 0;
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void test3()
{
	int arr[] = { 3,1,5,2,4,9,8,6,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

void test4()
{
	struct Stu s[] = { {"zhangsan", 30}, {"lisi", 25}, {"wangwu", 50} };
	int sz = sizeof(s) / sizeof(s[0]);
	//���԰�������������
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//���԰�������������
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}

//int main()
//{
//	int a = 10;
//	//char* p = &a;//int*
//	void* p = &a;//void* - �޾������͵�ָ�룬���������Խ����κ����͵ĵ�ַ
//	//*p;//err,void*��ָ�벻�ܽ����ò�����
//	//p++;//err
//	*(int*)p;
//	return 0;
//}