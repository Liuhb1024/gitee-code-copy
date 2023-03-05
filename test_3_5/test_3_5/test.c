#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//#include<stdio.h>
//
//int checkData(int* p)
//{
//	int tmp[7] = { 0 };
//	int i;
//	for (i = 0; i < 5;i++)
//	{
//		if (tmp[p[i]])
//		{
//			return 0;
//		}
//		tmp[p[i]] = 1;
//		return 1;
//	}
//}
//
//int main()
//{
//	int p[5];
//	for (p[0] = 1; p[0] <= 5; p[0]++)
//	{
//		for (p[1] = 1; p[1] <= 5; p[1]++)
//		{
//			for (p[2] = 1; p[2] <= 5; p[2]++)
//			{
//				for (p[3] = 1; p[3] <= 5; p[3]++)
//				{
//					for (p[4] = 1; p[4] <= 5; p[4]++)
//						if ((p[1] == 2) + (p[0] == 3) == 1 && (p[1] == 2) + (p[4] == 4) == 1 && (p[2] == 1) + (p[3] == 2) == 1 && (p[2] == 5) + (p[3] == 3) == 1 && (p[4] == 4) + (p[0] == 1) == 1 && checkData(p))
//						{
//							for (int i = 0; i < 5; i++)
//							{
//								printf("%d", p[i]);
//							}
//							putchar('\n');
//						}
//				}
//			}
//		}
//	}
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//#include<stdio.h>
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("凶手是%c", killer);
//	}
//	return 0;
//}

//在屏幕上打印杨辉三角。
void yangHuiTriangle(int n)
{
	int data[30][30] = { 1 };
	int i, j;
	for (i = 1; i < n; i++)
	{
		data[i][0] = 1;
		for (j = 1; j <= i; j++)
		{
			data[i][j] = data[i - 1][j] + data[i - 1][j - 1];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", data[i][j]);
		}
		putchar('\n');
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	yangHuiTriangle(n);
	return 0;
}