#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	float a, b;
//	puts("����������������");
//	printf("����a��");
//	scanf("%d", &a);
//	printf("����b��");
//	scanf("%d", &b);
//
//	printf("a��ֵ��b��%0.f%%", (a / b) * 100);
//	return 0;
//}


//int main()
//{
//	int a, b = 0;
//	puts("����������������");
//	printf("����a��");
//	scanf("%d", &a);
//	printf("����b��");
//	scanf("%d", &b);
//	printf("���ǵĺ���%d������%d", a + b, a * b);
//}

//int main()
//{
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//
//	printf("����ȡ��֮���ֵ��%d��\n", -num);
//
//	return 0;
//}

//int main()
//{
//	int a, b = 0;
//	puts("����������������");
//	printf("����a��");
//	scanf("%d", &a);
//	printf("����b��");
//	scanf("%d", &b);
//
//	printf("���ǵ�ƽ��ֵ�ǣ�%d��", (a + b) / 2);
//		
//}


//int main()
//{
//	int n;
//	double x;
//	n = 9.99;
//	x = 9.99;
//
//	printf("int   �ͱ��� n �� ֵ��%d\n", n);
//	printf("            n / 2 : %d\n", n / 2);
//	printf("double �ͱ���x �� ֵ��%f\n", x);
//	printf("            x / 2 : %f\n", x / 2.0);
//	return 0;
//}

//int main()
//{
//	double vx, vy;
//	puts("��������������");
//	printf("ʵ��vx��");
//	scanf("%lf", &vx);
//	printf("ʵ��vy��");
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
//	printf("������һ��ʵ����");
//		scanf("%lf", &a);
//	printf("��������ǣ�%f",a);
//	return 0;
//}

//double   intС����
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
//	puts("����������������");
//	printf("����a��");
//	scanf("%d", &a);
//	printf("����b��");
//	scanf("%d", &b);
//
//	printf("���ǵ�ƽ��ֵ�ǣ�%f��\n", (a + b) / 2.0);
//		
//}

//   (double)(a + b) ����ת��
//int main()
//{
//	int a, b;
//	puts("����������������");		
//			printf("����a��");
//			scanf("%d", &a);
//			printf("����b��");
//			scanf("%d", &b);
//		
//			printf("���ǵ�ƽ��ֵ�ǣ�%f��\n",(double)(a + b) / 2);
//						
//	return 0;
//}

//int main()
//{
//	float a, b = 0;
//	puts("����������������");
//	printf("����a��");
//	scanf("%d", &a);
//	printf("����b��");
//	scanf("%d", &b);
//
//	printf("a��b��%f%%��\n",(double)(a / b) * 100);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int sum;
//	double ave;
//
//	puts("����������������");
//	
//	printf("����a��");
//	scanf("%d", &a);
//	printf("����b��");
//	scanf("%d", &b);
//	printf("����c��");
//	scanf("%d", &c);
//
//	sum = a + b + c;
//	ave = (double)sum / 3;
//	printf("���ǵĺϼ�ֵ��%5d��\n",sum);
//	printf("���ǵ�ƽ��ֵ��%5.1f��\n",ave);
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
//	printf("�������������ߣ�");
//	scanf("%d", &height);
//	weight = (height - 100) * 0.9;
//	printf("���ı�׼������%.1f���", weight);
//	return 0;
//}

//�ڶ����ܽ�

int main()
{
	int a, b;

	double r;

	printf("����a��b��ֵ��");
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a % b = %d\n", a % b);

	printf("(a + b) / 2 = %d\n", (a + b) / 2);
	printf("ƽ��ֵ = %f\n\n", (double)(a + b) / 2);

	printf("�뾶��");
	scanf("%lf", &r);

	printf("�뾶Ϊ%.3f��Բ�������%.3f��\n", r, 3.14 * r * r);
	return 0;
}