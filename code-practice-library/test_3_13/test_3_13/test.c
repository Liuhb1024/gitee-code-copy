#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//
//"zpengwei@yeah.net"
//@. - �ָ��
//"192.168.3.212"
//"@."

//int main()
//{
//	char arr[] = "192.168.3.212";
//	char buf[30] = {0};//zpengwei\0yeah\0net\0
//	strcpy(buf, arr);
//
//	const char* p = ".";
//	char* str = strtok(buf, p);//
//	printf("%s\n", str);
//
//	str = strtok(NULL, p);//
//	printf("%s\n", str); 
//	
//	str = strtok(NULL, p);//
//	printf("%s\n", str);
//
//	str = strtok(NULL, p);//
//	printf("%s\n", str);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "zpengwei@yeah.net";
//	char buf[30] = { 0 };//zpengwei\0yeah\0net\0
//	strcpy(buf, arr);
//
//	//const char* buf = "zpengwei@yeah.net";
//
//	const char* p = "@.";
//	char* str = NULL;
//	for (str = strtok(buf, p); str != NULL; str=strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//
//	return 0;
//}
//


//int main()
//{
//	char* p = strerror(0);
//	printf("%s\n", p);
//
//	p = strerror(1);
//	printf("%s\n", p);
//
//	p = strerror(2);
//	printf("%s\n", p);
//
//	p = strerror(3);
//	printf("%s\n", p);
//	return 0;
//}
#include <errno.h>

//int main()
//{
//	//���ļ�
//	//���ļ���ʱ������ļ��Ĵ򿪷�ʽ��"r"
//	//�ļ�������򿪳ɹ����ļ������ڴ�ʧ��
//	//���ļ�ʧ�ܵĻ����᷵��NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ�ܣ�ԭ���ǣ�%s\n", strerror(errno));
//		return 1;
//	}
//	//��д�ļ�
//	//...
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//


//
//int main()
//{
//	//���ļ�
//	//���ļ���ʱ������ļ��Ĵ򿪷�ʽ��"r"
//	//�ļ�������򿪳ɹ����ļ������ڴ�ʧ��
//	//���ļ�ʧ�ܵĻ����᷵��NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("���ļ�ʧ��");
//		//printf + strerror
//		return 1;
//	}
//	//��д�ļ�
//	//...
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//

void test1()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[8] = { 0 };
	//��arr1�е�ǰ5�����ݿ�����arr2��
	memcpy(arr2, arr1, 20);
}
void test2()
{
	float arr1[] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
	float arr2[8] = { 0 };
	//��arr1�е�ǰ5�����ݿ�����arr2��
	memcpy(arr2, arr1, 12);
}

//mempcy�������ص���Ŀ��ռ����ʼ��ַ
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

void test3()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[8] = { 0 };
	//��arr1�е�ǰ5�����ݿ�����arr2��
	my_memcpy(arr2, arr1, 20);
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//ǰ->��
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//��->ǰ
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

void test4()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//             1 2 1 2 3 4 5 8 9 10
	//my_memcpy(arr1+2, arr1, 20);
	//my_memmove(arr1 + 2, arr1, 20);
	//my_memmove(arr1, arr1+2, 20);
	//memcpy(arr1, arr1 + 2, 20);
	//memcpy(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}

//C���ԣ�memcpy�������ص����ڴ�
//�ص��ľͽ���memmove
//memmove > memcpy
//100       60
//VS:100   100

void test5()
{
	int arr1[] = { 1,2,3,4,7 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 07 00 00 00
	int arr2[] = { 1,2,3,4,6 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 06 00 00 00
	int ret = memcmp(arr1, arr2, 17);
	printf("%d\n", ret);
}

void test6()
{
	/*char arr[] = "hello world";
	memset(arr, 'x', 5);
	printf("%s\n", arr);*/

	int arr[10] = { 0 };
	//01 01 01 01
	memset(arr, 1, sizeof(arr));//����д���޷������ݵ�ÿ��Ԫ������Ϊ1
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%x ", arr[i]);
	}
}

#include <ctype.h>

void test7()
{
	printf("%d\n", isdigit('6'));
	printf("%d\n", isspace('2'));
	printf("%d\n", islower('x'));
	printf("%c\n", toupper('x'));
	printf("%c\n", tolower('X'));
}

void test8()
{
	char arr[128] = { 0 };
	gets(arr);
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	test8();
	return 0;
}