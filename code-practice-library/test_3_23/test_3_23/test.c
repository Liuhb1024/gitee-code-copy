#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
// arr �� &arr ��ʲô����
// ���������󲿷��������������Ԫ�ص�ַ
// ��������������
// 1. sizeof���������� - sizeof�ڲ�������һ����������ʱ����������ʾ���������飬����õ�����������ܴ�С
// 2. &arr - �������������ʾ�������飬ȡ��������������ĵ�ַ���ӵ�ֵַ�ĽǶ���˵��������Ԫ�صĵ�ַ��һ���ģ������岻һ��
// 
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//��;
//#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//  int i = 0;
//	//һ�����⵫�������д��
//	int(*p)[10] = &arr;
//
//	//p --- &arr
//	//*p --- *&arr
//	//*p --- arr
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *((*p) + i));//*p[i]
//	}
//
// 
// 
//	//�±����ʽ����������
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	//ʹ��ָ��������
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//
////һά���鴫�Σ��β�Ϊ����
//void print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]); 
//	}
//	printf("\n");
//}
//
//void print1(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	print1(arr, sz);
//
//	return 0;
//}

//#include<stdio.h>
//
//void print(int arr[3][5],int r,int c)
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
//void print1(int (*arr)[5],int r ,int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(*(arr+i)+j));//arr[i]
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//
//	//��ά�������������Ҳ��ʾ��Ԫ�ص�ַ
//	//��ά�������Ԫ���ǵ�һ��
//	//��Ԫ�صĵ�ַ�ǵ�һ�еĵ�ַ����һ��һά����ĵ�ַ
//	//��ά������ʵ��һά���������
//	print1(arr, 3, 5);
//	return 0;
//}


////�������δ���
//#include<stdio.h>
//int main()
//{
//	int arr[5];//����
//	int* parr1[10];//ָ������
//	int(*parr2)[10];//����ָ��
//
//	int(*parr3[10])[5];
//	//parr3������
//	//�����д�ŵ�������ָ�룬��ָ��ָ�������������
//	return 0;
//}
//
//����
//
//һά���鴫�Σ��βο��������飬���β���ָ���ʱ��Ҫע������

//��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]������
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ�����ĵ�һ���ж��ٸ�Ԫ��
//�����ŷ�������
// 
//��ά���鴫��
// ����������ָ�룬Ҳ����������
// ��������飬�п���ʡ�ԣ������в�����ʡ��
// 
// �����ָ�룬����ȥ���ǵ�һ�еĵ�ַ���βξ�Ӧ��������ָ��

//����ָ��
//����ָ�� - ָ�����͵�ָ�� - int *
//�ַ�ָ�� - ָ���ַ���ָ�� - char *
//����ָ�� - ָ�������ָ�� - int arr[10];  int(*p)[10] = &arr;
//����ָ�� - ָ������ָ�� - ��ź����ĵ�ַ
//�����е�ַ��
//��ϸ�����´���
//#include<stdio.h>
////&�������õ��ľ��Ǻ����ĵ�ַ
////ʵ���ϣ�&�������ͺ��������Ǻ����ĵ�ַ
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//pf - ����ָ��
//	int (*pf)(int, int) = Add;//������ַҪ����������͵÷��ڡ�����ָ�������pf ��
//	
//	//int ret = (*pf)(3, 5);
//	//int ret = Add(3,5);
//	//int ret = pf(3, 5);
//	int ret = (********pf)(3, 5);//��ʵ��*������ûɶ��
//	printf("%d", ret);
//	return 0;
//}

//char* test(int c, float* pf)
//{
//
//}
//int main()
//{
//	char(*pt)(int,float*) = test;
//	return 0;
//}
//








