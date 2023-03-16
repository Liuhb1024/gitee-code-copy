#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	//10000000 00000000 00000000 00010100  -- -20
//	//11111111 11111111 11111111 11101011  -- 反码
//	//11111111 11111111 11111111 11101100  -- 补码
//	//00000000 00000000 00000000 00001010  -- 10原反补相同
//	// 相加
//	//11111111 11111111 11111111 11110110  -- 计算结果的补码，是存储在内存中的
//	// %d形式打印出来
//	// 减1取反
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
//		Sleep(1000);//单位是毫秒
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
		printf("n的值为：%d\n", n);
		printf("*pFloat的值为：%f\n", *pFloat);
		*pFloat = 9.0;
		printf("num的值为：%d\n", n);
		printf("*pFloat的值为：%f\n", *pFloat);
		return 0;
	}

