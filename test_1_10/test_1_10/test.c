#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1. ���� n�Ľ׳ˡ�
//int main()
//{
//	int n = 0;
//	//����
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	//ע���������ʵ�ֵ�ǰ���ǲ����
//	//���Ϳɱ�ʾ�����ֵ��
//#include<limits.h>
//	INT_MAX//f12
//}


//����c���Ե�����
//int main()
//{
//	int n1, n2;
//	puts("����������������");
//	printf("����1��");
//	scanf("%d", &n1);
//	printf("����2��");
//	scanf("%d", &n2);
//
//	if (n1 == n2)
//		puts("�������������");
//	else
//		puts("���������������");
//
//	return 0;
//}

//int main()
//{
//	int n1, n2;
//	puts("����������������");
//	printf("����1��");
//	scanf("%d", &n1);
//	printf("����2��");
//	scanf("%d", &n2);
//
//	if (n1 != n2)
//		puts("���������������");
//	else
//		puts("�������������");
//
//	return 0;
//}
//
//�������ж�
//int main()
//{
//	int num;
//	printf("������һ��������");
//	scanf("%d", &num);
//
//	if ((num % 10) == 5)
//	{
//		puts("�������ĸ�λ����5��");
//	}
//	else
//		puts("�������ĸ�λ������5��");
//
//	return 0;
//}
//����%�����ȼ��������==�ߣ�������ʵ num % 10���ߵ����ţ�������ʡ��


//int main()
//{
//	int no;
//	printf("������һ������");
//	scanf("%d", &no);
//	if (no == 0)
//		puts("��������0��");
//	else if(no > 0)
//		puts("��������������");
//	else
//		puts("�������Ǹ�����");
//
//	return 0;
//}

//int main()
//{
//	int no;
//	printf("������һ������");
//	scanf("%d", &no);
//	if (no == 0)
//		puts("��������0��");
//	else if(no > 0)
//		puts("��������������");
//	else if (no < 0)
//		puts("�������Ǹ�����");
//
//	return 0;
//}
//int main()
//{
//	int i;
//	printf("������һ��������");
//	scanf("%d", &i);
//	if (i == 0)
//		printf("�������ľ���ֵ��%d", i);
//	else if(i > 0)
//		printf("�������ľ���ֵ��%d", i);
//	else
//		printf("�������ľ���ֵ��%d", -i);
//
//	return 0;
//}
//int main()
//{
//    int a;    //�����ͱ����ķ���ֵ����һ���߼�ֵ
//    int i;
//
//    a = (5 >= 3);    //����ֵΪ�� 
//    printf("%d\n", a);
//
//    a = (5 <= 3);    //����ֵΪ��
//    printf("%d\n", a);
//
//    a = (5 == 3);   //����ֵΪ�� 
//    printf("%d\n", a);
//
//    a = (5 != 3);   //����ֵΪ��
//    printf("%d\n", a);
//
//    i = 1;
//    while (1)    // while������Ϊ����ʱΪ�棬Ϊ0ʱΪ�٣��Լ��ɻ�����ֵ���ԡ� 
//    {
//        printf("%d ", i);
//        i += 1;
//        if (i > 10)
//            break;
//    }
//}
//int main(void)
//{
//	int a;
//
//	a = (5 >= 3);
//	printf("%d\n", a);
//
//	a = (5 <= 3);
//	printf("%d\n", a);
//
//	a = (5 == 3);
//	printf("%d\n", a);
//
//	a = (5 != 3);
//	printf("%d\n", a); return 0;
//}
//����ϴ�ֵ
//int main()
//{
//	int n1, n2;
//	puts("����������������");
//	printf("����1��");
//	scanf("%d", &n1);
//	printf("����2��");
//	scanf("%d", &n2);
//	
//	if (n1 > n2)
//		printf("�ϴ������%d\n", n1);
//	else
//		printf("�ϴ������%d\n", n2);
//
//	return 0;
//}

//int main()
//{
//	int i, j, max;
//
//	puts("����������������");
//	printf("����1��");
//	scanf("%d", &i);
//	printf("����2��");
//	scanf("%d", &j);
//
//	if (i > j)
//		max = i;
//	else
//		max = j;
//	printf("�ϴ������%d", max);
//	return 0;
//}

//3�����ȴ�С
//int main()
//{
//	int n1, n2, n3, max;
//	puts("������3��������");
//		printf("����1��");
//		scanf("%d", &n1);
//		printf("����2��");
//		scanf("%d", &n2);
//		printf("����3��");
//		scanf("%d", &n3);
//
//		max = n1;
//		if (max < n2)
//		{
//			max = n2;
//		}
//		if (max < n3)
//		{
//			max = n3;
//		}
//		printf("�ϴ�����%d��", max);
//	return 0;
//}

//int main()
//{
//	int n1, n2, max;
//	puts("������3��������");
//			printf("����1��");
//			scanf("%d", &n1);
//			printf("����2��");
//			scanf("%d", &n2);
//			max = (n1 > n2) ? n1 : n2;
//			printf("�ϴ�����%d", max);
//
//	return 0;
//}
//int main()
//{
//	int n1, n2;
//	printf("����1��");
//	scanf("%d", &n1);
//	printf("����2��");
//	scanf("%d", &n2);
//	printf("n1��n2֮��Ĳ���%d", (n1 > n2) ? n1 - n2 : n2 - n1);
//	return 0;
//}
//int main()
//{
//	int n1, n2, n3, min;
//	puts("������3��������");
//	printf("����1��");
//	scanf("%d", &n1);
//	printf("����2��");
//	scanf("%d", &n2);
//	printf("����3��");
//	scanf("%d", &n3);
//
//	min = n1;
//	if (n2 < min)
//		min = n2;
//	if (n3 < min)
//		min == n3;
//	printf("��С������%d", min);
//	return 0;
//}

//int main()
//{
//	int n1, n2, n3, n4, max1, max2, max;
//
//	puts("������4��������");
//	printf("����1��");
//	scanf("%d", &n1);
//	printf("����2��");
//	scanf("%d", &n2);
//	printf("����3��");
//	scanf("%d", &n3);
//	printf("����4��");
//	scanf("%d", &n4);
//
//	max1 = (n1 > n2) ? n1 : n2;
//	max2 = (n3 > n4) ? n3 : n4;
//	max = (max1 > max2) ? max1 : max2;
//
//	printf("���ֵ��%d", max);
//	return 0;
//}