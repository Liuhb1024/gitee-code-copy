#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//明解c语言第一章
// 
// 
// 
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//		printf("%d\n", b);
//	if (a > b)
//		printf("%d\n", a);
//	return 0;
//}
//计算15和37的和

//int main()
//{
//	printf("%d\n", 15 + 37);
//	return 0;
//}

//int main()
//{
//	printf("天\n");
//	printf("地\n");
//	printf("人\n");
//	return 0;
//}

//int main()
//{
//	printf("喂！！！！\n");
//	printf("  \n");
//	printf("您好！\n");
//	printf("再见。\n");
//}

//int main()
//{
//	int vx, vy;
//	vx = 57;
//	vy = vx + 10;
//
//	printf("vx的值是%d.\n", vx);
//	printf("vy的值是%d.\n", vy);
//	return 0;
//}

//int main()
//{
//	int no;
//	printf("请输入一个整数：");
//	scanf("%d", &no);
//	printf("您输入的数字为：%d\n", no);
//	return 0;
//}

//int main()
//{
//	int no;
//	printf("请输入一个整数：");
//	scanf("%d", &no);
//	printf("它的5倍数是：%d", 5 * no);
//	return 0;
//}


//int main()
//{
//	int a;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	printf("这个数加上12为：%d", 12 + a);
//	return 0;
//}

//int main()
//{
//	int n1, n2;
//	puts("请输入两个整数：");
//	printf("整数1：");
//		scanf("%d", &n1);
//	printf("整数2：");
//		scanf("%d", &n2);
//
//	printf("它们的和是%d\n", n1 + n2);
//	return 0;
//}

//int main()
//{
//	puts("天");
//	puts("地");
//	puts("人");
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//	puts("请输入两个整数");
//	printf("整数1:");
//	scanf("%d", &a);
//	printf("整数2:");
//	scanf("%d", &b);
//	printf("两个整数的乘积为：%d", a * b);
//}

int main()
{
	int a, b, c;
	puts("请输入三个整数。");
	printf("整数1：");
	scanf("%d", &a);
	printf("整数2：");
	scanf("%d", &b);
	printf("整数3：");
	scanf("%d", &c);
	printf("它们的和是：%d", a + b + c);
	return 0;
}