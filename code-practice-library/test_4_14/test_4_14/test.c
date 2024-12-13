#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//数组和指针
//数组 - 能够存放一组相同类型的元素,数组的大小取决于数组的元素个数和元素类型
//指针 - 地址/指针变量 ,大小是4/8个字节
//数组是数组，指针是指针，二者不等价
//数组名是数组首元素的地址，这个地址就可以存放在指针变量中
//我们就可以使用指针来遍历数组
//
//数组名
//大部分情况下数组名是数组首元素的地址
//但是有2个例外：
//sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小
//&数组名 - 数组名表示整个数组，取出的是数组的地址
////
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	//sizeof(a)就是数组名单独放在sizeof内部，计算的数组总大小，单位是字节
//	printf("%d\n", sizeof(a + 0));//4/8 个字节
//	//a+0 其实是数组首元素的地址
//	printf("%d\n", sizeof(*a));//4
//	//a是数组首元素的地址 - &a[0]
//	//*a -> *&a[0] -> a[0]
//	printf("%d\n", sizeof(a + 1));//4/8
//	//a是数组首元素的地址 -- int*
//	//a+1 跳过1个整型, 是第二个元素的地址
//	//
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4/8
//	//&a - 取出的是数组的地址，但是数组的地址也是地址呀，是地址大小就是4/8字节
//	//int (*pa)[4] = &a;//int(*)[4]
//	//
//	printf("%d\n", sizeof(*&a));//16
//	//sizeof(a)
//	//int(*)[4]
//	//
//	printf("%d\n", sizeof(&a + 1));//4/8
//	//&a -->  int (*)[4]
//	//&a+1 跳过一个数组
//
//	printf("%d\n", sizeof(&a[0]));//取出首元素的地址 4/8
//	printf("%d\n", sizeof(&a[0] + 1));//第二个元素的地址
//
//	return 0;
//}
#include <string.h>


//int main()
//{
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%d\n", strlen(arr));//随机值，因为不知道\0的位置
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));//非法访问
//	////printf("%d\n", strlen(arr[1]));//'b' - 98 当成地址，形参非法访问
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
// 
//
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//arr+0是数组首元素的地址 4/8
//	//printf("%d\n", sizeof(*arr));//*arr是首元素的，计算的是首元素的大小 1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//&arr是数组的地址 4/8
//	//printf("%d\n", sizeof(&arr + 1));//&arr + 1跳过一个数组后的地址，4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址
//
//
//	return 0;
//}

//int main()
//{   
//	//char arr1[] = { 'a','b','c','d','e','f' };
//
//	char arr[] = "abcdef";//[a b c d e f \0]
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	//&arr - char (*)[7]
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//*arr -是数组首元素 1
//	////arr[0]   *(arr+0)
//	////int sz = sizeof(arr)/sizeof(*arr);
//	////int sz = sizeof(arr)/sizeof(arr[0]);
//
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//数组的地址，是地址就是4 / 8
//	//printf("%d\n", sizeof(&arr + 1));//4 / 8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 / 8
//
//	return 0;
//}
//
//
//int main()
//{
//	char* p = "abcdef";
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//p+1是'b'的地址 5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));//随机值
//	//printf("%d\n", strlen(&p[0] + 1));
//
//
//	//printf("%d\n", sizeof(p));//4 / 8
//	//printf("%d\n", sizeof(p + 1));//'b'的地址，4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//*(p+0)--'a' 1
//	//printf("%d\n", sizeof(&p));//
//	//printf("%d\n", sizeof(&p + 1));
//	//printf("%d\n", sizeof(&p[0] + 1));//&p[0]+1是'b'的地址
//
//	return 0;
//}
//
//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//	printf("%d\n", sizeof(a));//48 - a这个二维数组的数组名单独放在sizeof内部，计算整个数组的大小
//	printf("%d\n", sizeof(a[0][0]));//第一行第一个元素，4个字节
//	printf("%d\n", sizeof(a[0]));//16
//	//a[0] 第一行的数组名，这时数组名单独放在sizeof内部了
//	//计算的是数组的大小，单位是字节，16
//	printf("%d\n", sizeof(a[0] + 1));//4
//	//a[0]不是单独放在sizeof内部，a[0]表示的首元素的地址，即第一行第一个元素的地址 - &a[0][0]
//	//a[0] + 1 是第一行第2个元素的地址 &a[0][1]
//	printf("%d\n", sizeof(*(a[0] + 1)));//a[0][1] 大小是：4个字节
//	printf("%d\n", sizeof(a + 1));//
//	//a作为二维数组的数组名并非单独放在sizeof内部,所以表示首元素的地址
//	//二维数组的首元素是第一行，这里的a就是第一行的地址---  int (*)[4]
//	//a+1是跳过第一行，指向了第二行
//
//	printf("%d\n", sizeof(*(a + 1)));//16
//	//*(a+1)-->a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//&a[0]是第一行的地址
//	//&a[0]+1是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  a[1]
//	printf("%d\n", sizeof(*a));//16 *a - 就是第一行
//	//*a -- *(a+0) -- a[0]
//	printf("%d\n", sizeof(a[3]));//16
//	
//	//int a = 5;
//	//short s = 11;
//	//printf("%d\n", sizeof(s = a + 2));//2
//	//printf("%d\n", s);//11
//
//	return 0;
//}
//

//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}
//
//
//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//1048576+1=1048577--> 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}
//

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}
