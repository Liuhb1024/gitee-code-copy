#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	//10000000 00000000 00000000 00010100  -- -20
//	//11111111 11111111 11111111 11101011  -- ����
//	//11111111 11111111 11111111 11101100  -- ����
//	//00000000 00000000 00000000 00001010  -- 10ԭ������ͬ
//	// ���
//	//11111111 11111111 11111111 11110110  -- �������Ĳ��룬�Ǵ洢���ڴ��е�
//	// %d��ʽ��ӡ����
//	// ��1ȡ��
//	//10000000 00000000 00000000 00001010
//	// -10
//	printf("%d\n", i + j);
//	return 0;
//}

//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//��λ�Ǻ���
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//#include<stdio.h>
//unsigned char i = 0;
//int main()
//{
//    for (i = 0; i <= 255; i++)
//    {
//        printf("hello world\n");
//    }
//    return 0;
//}
#include<stdio.h>

	int main()
	{
		int n = 9;
		float* pFloat = (float*)&n;
		printf("n��ֵΪ��%d\n", n);
		printf("*pFloat��ֵΪ��%f\n", *pFloat);
		*pFloat = 9.0;
		printf("num��ֵΪ��%d\n", n);
		printf("*pFloat��ֵΪ��%f\n", *pFloat);
		return 0;
	}

