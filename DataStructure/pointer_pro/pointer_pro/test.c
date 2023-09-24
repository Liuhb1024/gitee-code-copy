#define _CRT_SECURE_NO_WARNINGS 1

//演示实例

#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;//p存放的是数组首元素的地址
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
	int* ptr1 = &arr[1]; // 指向数组的第二个元素
	int* ptr2 = &arr[4]; // 指向数组的最后一个元素

	// 计算指针之间的距离
	int diff = ptr2 - ptr1;

	printf("Distance between ptr1 and ptr2: %d\n", diff);

	return 0;
}


int main4() {
	int arr[] = { 10, 20, 30, 40, 50 };
	int* ptr = arr; // 指向数组的第一个元素

	// 使用指针的加法运算
	printf("Elements of array using pointer arithmetic:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *ptr);
		ptr++; // 指针向后移动一个 int 大小的位置
	}

	printf("\n");

	// 使用指针的减法运算
	ptr = &arr[4]; // 指向数组的最后一个元素

	printf("Elements of array (reverse order) using pointer arithmetic:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *ptr);
		ptr--; // 指针向前移动一个 int 大小的位置
	}

	printf("\n");

	return 0;
}

int main3() {
	int num = 10;
	int* ptr = &num;

	printf("Value of num: %d\n", num);      // 输出：Value of num: 10
	printf("Value of num using pointer: %d\n", *ptr);   // 输出：Value of num using pointer: 10

	*ptr = 20;    // 使用指针解引用操作修改指针所指向的内存位置的值

	printf("Updated value of num using pointer: %d\n", *ptr);   // 输出：Updated value of num using pointer: 20
	printf("Updated value of num: %d\n", num);      // 输出：Updated value of num: 20

	return 0;
}

int main2()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0; //重点在调试的过程中观察内存的变化。
	*pi = 0; //重点在调试的过程中观察内存的变化。
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