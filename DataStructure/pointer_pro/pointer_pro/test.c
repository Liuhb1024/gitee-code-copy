#define _CRT_SECURE_NO_WARNINGS 1

//��ʾʵ��

#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;//p��ŵ���������Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p  <====> p+%d = %p\n", i, &arr[i], i, p + i);
	}
	return 0;
}

int main6()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}

int main5() {
	int arr[] = { 10, 20, 30, 40, 50 };
	int* ptr1 = &arr[1]; // ָ������ĵڶ���Ԫ��
	int* ptr2 = &arr[4]; // ָ����������һ��Ԫ��

	// ����ָ��֮��ľ���
	int diff = ptr2 - ptr1;

	printf("Distance between ptr1 and ptr2: %d\n", diff);

	return 0;
}


int main4() {
	int arr[] = { 10, 20, 30, 40, 50 };
	int* ptr = arr; // ָ������ĵ�һ��Ԫ��

	// ʹ��ָ��ļӷ�����
	printf("Elements of array using pointer arithmetic:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *ptr);
		ptr++; // ָ������ƶ�һ�� int ��С��λ��
	}

	printf("\n");

	// ʹ��ָ��ļ�������
	ptr = &arr[4]; // ָ����������һ��Ԫ��

	printf("Elements of array (reverse order) using pointer arithmetic:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *ptr);
		ptr--; // ָ����ǰ�ƶ�һ�� int ��С��λ��
	}

	printf("\n");

	return 0;
}

int main3() {
	int num = 10;
	int* ptr = &num;

	printf("Value of num: %d\n", num);      // �����Value of num: 10
	printf("Value of num using pointer: %d\n", *ptr);   // �����Value of num using pointer: 10

	*ptr = 20;    // ʹ��ָ������ò����޸�ָ����ָ����ڴ�λ�õ�ֵ

	printf("Updated value of num using pointer: %d\n", *ptr);   // �����Updated value of num using pointer: 20
	printf("Updated value of num: %d\n", num);      // �����Updated value of num: 20

	return 0;
}

int main2()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
	*pi = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
	return 0;
}


int main1()
{
	int n = 10;
	char* pc = (char*)&n;
	int* pi = &n;

	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	printf("%p\n", pi);
	printf("%p\n", pi + 1);
	return 0;
}