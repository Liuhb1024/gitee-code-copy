#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		int d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		int d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i / 2; j++) 
//		{
//			if (i % j == 0)
//			{
//				break;
//			}			
//		}
//		if (j > i / 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a, b;
//	int c = 0;
//	scanf("%d %d", & a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//	return 0;
//}
// 
// 
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	    else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//��ϰ:�ж��Ƿ�Ϊ����
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 2 == 1)
//		printf("%d������", i);
//	return 0;
//}
//���1-100������
//int main()
//{
//	int i = 0;
//	//while����1-100����
//	while (i <= 100)
//		//if���ж�����
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	//����
//	scanf("%d", &day);
//
//	if (1 == day)
//		printf("����1\n");
//	else if (2 == day)
//		printf("����2\n");
//	else if (3 == day)
//		printf("����3\n");
//	else if (4 == day)
//		printf("����4\n");
//	else if (5 == day)
//		printf("����5\n");
//	else if (6 == day)
//		printf("����6\n");
//	else if (7 == day)
//		printf("������\n");
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}
//	
////	//1,2,3,4,5 ������
////	//6,7       ��Ϣ��
//int main()
//{
//	int day = 1;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:
//			m++;n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	
//	return 0;
//}
//�����m = 5,n =3

//ʹ��whileѭ������Ļ�ϴ�ӡ1~10
//int main()
//{	
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//
//	return 0;
//}
// 
// 
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}