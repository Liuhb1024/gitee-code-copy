#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100 - ����
//	//00000000 00000000 00000000 00001010 - ԭ��
//	//11111111 11111111 11111111 11110110 - ������Ľ�����Ǵ����ڴ��У��ǲ���
//	//11111111 11111111 11111111 11110101
//	//10000000 00000000 00000000 00001010
//	//-10
//	printf("%d\n", i + j);
//
//	return 0;
//}
//
#include <windows.h>

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//��λ�Ǻ���
//	}
//
//	return 0;
//}

//

//char ���͵�ȡֵ��Χ�� -128~127
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 -4 -5 -6 ...-127 -128 -129 ... -998 -999 -1000
//	//char -1 -2 -3 -128	127 126 .... 3 2 1 0 -1 -2 -3 ... -128 127 ...
//	//1000��ֵ
//	printf("%d", strlen(a));//255
//	//strlen ���ַ������ȣ��ҵ���\0��\0��ASCII��ֵ��0.
//	return 0;
//}
//

//#include <stdio.h>
//unsigned char i = 0;
////0~255
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//


//
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001 - 9�Ĳ���
//	//
//	//0 00000000 00000000000000000001001
//	//E = 1-127 = -126
//	//M = 0.00000000000000000001001
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//	//
//	float* pFloat = (float*)&n;
//
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//0.0
//
//	*pFloat = 9.0;//�Ը��������ӽǣ���Ÿ����͵�����
//	//1001.0
//	//1.001 * 2^3
//	//(-1)^0 * 1.001 * 2^3
//	//S=0
//	//E=3
//	//M=1.001
//	//0 10000010 00100000000000000000000
//	//
//	printf("num��ֵΪ��%d\n", n);//1,091,567,616
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//9.0
//
//	return 0;
//}
//

//
//int main()
//{
//	float f = 5.5f;
//	//101.1
//	//(-1)^0 * 1.011 * 2^2
//	//0 10000001 01100000000000000000000
//	//40b00000
//	//
//	return 0;
//}
//

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc�����ַ�ָ��
//
//	const char *p = "abcdef";
//	*p = 'w';//
//
//	//char arr[] = "abcdef";
//	//char* p = arr;
//	//*p = 'w';
//	//printf("%s\n", arr);
//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//int main()
//{
//	char* arr[] = { "abcdef", "hehe", "qwer" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	//arr[i] == *(arr+i)
//	//arr��һ���������ָ�������
//	int* arr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *(arr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//