#define _CRT_SECURE_NO_WARNINGS 1

/ ָ������ - ������ - ��һ�ִ��ָ�������
//����ָ�� - ��ָ�� - ��һ��ָ�������ָ�� - ��ŵ�������ĵ�ַ

//int main()
//{
//	//ָ������
//	char* arr[4];
//	//����ָ��
//	int arr[5];
//	int (*p)[5] = &arr;
//
//	return 0;
//}

//int arr[10];
//arr �� &arr ��ʲô����
#include <stdio.h>


//���������󲿷��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������) - sizeof�ڲ�������һ����������ʱ����������ʾ���������飬����õ�����������ܴ�С
//2. &arr  - �������������ʾ�������飬ȡ��������������ĵ�ַ,�ӵ�ֵַ�ĽǶ�������������Ԫ�صĵ�ַ��һ���ģ��������岻һ��
//

//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));
//	printf("%p\n", arr);//int * 
//	printf("%p\n", arr+1);//4
//
//	printf("%p\n", &arr[0]);//int* 
//	printf("%p\n", &arr[0]+1);//4
//
//	printf("%p\n", &arr);//int(*)[10]
//	printf("%p\n", &arr+1);
//	int (*p)[10] = &arr;//p��һ������ָ��
//	//int(*)[10]
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int (* p)[10] = &arr;
//	int i = 0;
//	//p  --- &arr
//	//*p --- *&arr
//	//*p --- arr
//	//��Ȼ�ԣ����ǲ��Ƽ�
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//	//��Ȼ�ԣ����ǲ��Ƽ�
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *((*p) + i));
//	}*/
//
//	//ʹ��ָ��������
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	//�±����ʽ��������
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	return 0;
//}

//һά���鴫�Σ��β�������
//void print1(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////һά���鴫�Σ��β���ָ��
//void print(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(*(arr + i) + j));//arr[i]
//			printf("%d ", arr[i][j]);//arr[i]
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//	//��ά�������������Ҳ��ʾ��Ԫ�صĵ�ַ
//	//��ά�������Ԫ���ǵ�һ��
//	//��Ԫ�صĵ�ַ���ǵ�һ�еĵ�ַ,��һ��һά����ĵ�ַ
//	//
//	print(arr, 3, 5);
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	return x + y;
//}

//&�������õ����Ǻ����ĵ�ַ

//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//pf���Ǻ���ָ��
//	int (* pf)(int, int) = Add;//�����ĵ�ַҪ���������͵÷��ڡ�����ָ���������
//	
//	int ret = (*pf)(3, 5);
//	//int ret = Add(3, 5);
//	//int ret = pf(3, 5);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//char* test(int c, float* pf)
//{
//
//}
//int main()
//{
//	char* (*pt)(int, float*) = test;
//
//	return 0;
//}
//

//typedef int* ptr_t;
//typedef void(*pf_t)(int);//��void(*)(int)�����������������pf_t
//
////
//typedef void(*pf_t2)(int);//pf_t2��������
//void(*pf)(int);//pf�Ǻ���ָ�����������

//����1
//int main()
//{
//	//1. ��0ǿ������ת��Ϊvoid (*)() ���͵ĺ���ָ��
//	//2. �����ζ��0��ַ������һ������������û����������������void
//	//3. ����0��ַ�����������
//	//���������һ�κ�������
//	//(*( void (*)() ) 0)();
//
//	//����2
//	void (* signal(int, void(*)(int) ) )(int);
//	//
//	pf_t signal(int, pf_t);
//	//�����Ĵ�����һ������������
//	//������������signal
//	//signal�����Ĳ�����һ����int���ͣ��ڶ�����void(*)(int)���͵ĺ���ָ��
//	//�ú���ָ��ָ��ĺ���������int������������void
//	// 
//	//signal�����ķ�������Ҳ��һ������ָ��
//	//�ú���ָ��ָ��ĺ���������int������������void
//	//
//	//void (* signal(int, void(*)(int)))(int)
//	return 0;
//}
//



//
//����ָ������
//�����ÿ��Ԫ����һ������ָ��
//

//ָ������
//����ָ�������
//int* arr[4];
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
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
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




int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//дһ�������������������+-*/
//����: << >> & | ^ && ||
//
void menu()
{
	printf("******************************\n");
	printf("****   1. add    2.sub   *****\n");
	printf("****   3. mul    4.div   *****\n");
	printf("****   0. exit           *****\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	//ת�Ʊ� - ����ָ�������
	int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
	//0    1    2    3    4

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}