#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	float a, b;
//	puts("请输入两个整数。");
//	printf("整数a：");
//	scanf("%d", &a);
//	printf("整数b：");
//	scanf("%d", &b);
//
//	printf("a的值是b的%0.f%%", (a / b) * 100);
//	return 0;
//}


//int main()
//{
//	int a, b = 0;
//	puts("请输入两个整数。");
//	printf("整数a：");
//	scanf("%d", &a);
//	printf("整数b：");
//	scanf("%d", &b);
//	printf("它们的和是%d，积是%d", a + b, a * b);
//}

//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//
//	printf("符号取反之后的值是%d。\n", -num);
//
//	return 0;
//}

//int main()
//{
//	int a, b = 0;
//	puts("请输入两个整数。");
//	printf("整数a：");
//	scanf("%d", &a);
//	printf("整数b：");
//	scanf("%d", &b);
//
//	printf("它们的平均值是：%d。", (a + b) / 2);
//		
//}


//int main()
//{
//	int n;
//	double x;
//	n = 9.99;
//	x = 9.99;
//
//	printf("int   型变量 n 的 值：%d\n", n);
//	printf("            n / 2 : %d\n", n / 2);
//	printf("double 型变量x 的 值：%f\n", x);
//	printf("            x / 2 : %f\n", x / 2.0);
//	return 0;
//}

//int main()
//{
//	double vx, vy;
//	puts("请输入两个数。");
//	printf("实数vx：");
//	scanf("%lf", &vx);
//	printf("实数vy：");
//	scanf("%lf", &vy);
//
//	printf("vx + vy = %f\n", vx + vy);
//	printf("vx - vy = %f\n", vx - vy);
//	printf("vx * vy = %f\n", vx * vy);
//	printf("vx / vy = %f\n", vx / vy);
//	return 0;
//}

//int main()
//{
//	double a;
//	printf("请输入一个实数：");
//		scanf("%lf", &a);
//	printf("您输入的是：%f",a);
//	return 0;
//}

//double   int小规则
//int main()
//{
//	int n1, n2, n3, n4;
//	double d1, d2, d3, d4;
//
//	n1 = 5 / 2;
//	n2 = 5.0 / 2.0;
//	n3 = 5.0 / 2;
//	n4 = 5 / 2.0;
//
//	d1 = 5 / 2;
//	d2 = 5.0 / 2.0;
//	d3 = 5.0 / 2;
//	d4 = 5 / 2.0;
//
//	printf("n1 = %d\n", n1);
//	printf("n2 = %d\n", n2);
//	printf("n3 = %d\n", n3);
//	printf("n4 = %d\n\n", n4);
//	
//	printf("d1 = %f\n", d1);
//	printf("d2 = %f\n", d2);
//	printf("d3 = %f\n", d3);
//	printf("d4 = %f\n", d4);
//
//	return 0;
//}

//int main()
//{
//	int a, b = 0;
//	puts("请输入两个整数。");
//	printf("整数a：");
//	scanf("%d", &a);
//	printf("整数b：");
//	scanf("%d", &b);
//
//	printf("它们的平均值是：%f。\n", (a + b) / 2.0);
//		
//}

//   (double)(a + b) 类型转化
//int main()
//{
//	int a, b;
//	puts("请输入两个整数。");		
//			printf("整数a：");
//			scanf("%d", &a);
//			printf("整数b：");
//			scanf("%d", &b);
//		
//			printf("它们的平均值是：%f。\n",(double)(a + b) / 2);
//						
//	return 0;
//}

//int main()
//{
//	float a, b = 0;
//	puts("请输入两个整数。");
//	printf("整数a：");
//	scanf("%d", &a);
//	printf("整数b：");
//	scanf("%d", &b);
//
//	printf("a是b的%f%%。\n",(double)(a / b) * 100);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int sum;
//	double ave;
//
//	puts("请输入三个整数。");
//	
//	printf("整数a：");
//	scanf("%d", &a);
//	printf("整数b：");
//	scanf("%d", &b);
//	printf("整数c：");
//	scanf("%d", &c);
//
//	sum = a + b + c;
//	ave = (double)sum / 3;
//	printf("它们的合计值是%5d。\n",sum);
//	printf("它们的平均值是%5.1f。\n",ave);
//
//	return 0;
//}

//int main()
//{
//	printf("[%d]\n",  123);
//	printf("[%.4d]\n",123);
//	printf("[%4d]\n", 123);
//	printf("[%04d]\n",123);
//	printf("[%-4d]\n\n",123);
//
//	printf("[%d]\n",    12345);
//	printf("[%.3d]\n",  12345);
//	printf("[%3d]\n",   12345);
//	printf("[%03d]\n",  12345);
//	printf("[%-3d]\n\n",12345);
//
//	printf("[%f]\n",     123.13);
//	printf("[%.1f]\n",   123.13);
//	printf("[%6.1f]\n\n",123.13);
//
//	printf("[%f]\n",     123.13);
//	printf("[%.1f]\n",   123.13);
//	printf("[%4.1f]\n\n",123.13);
//	
//	return 0;
//}


//int main()
//{
//	int height;
//	double weight;
//	printf("请输入您的身高：");
//	scanf("%d", &height);
//	weight = (height - 100) * 0.9;
//	printf("您的标准体重是%.1f公斤。", weight);
//	return 0;
//}

//第二章总结

int main()
{
	int a, b;

	double r;

	printf("整数a和b的值：");
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a % b = %d\n", a % b);

	printf("(a + b) / 2 = %d\n", (a + b) / 2);
	printf("平均值 = %f\n\n", (double)(a + b) / 2);

	printf("半径：");
	scanf("%lf", &r);

	printf("半径为%.3f的圆的面积是%.3f。\n", r, 3.14 * r * r);
	return 0;
}
