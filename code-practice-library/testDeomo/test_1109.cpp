//����������С����
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//���� 
//	scanf("%d%d%d", &a, &b, &c);
//	//����˳��
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	} 
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//���-��С 
//	printf("%d %d %d\n", a, b, c);
//	return 0;
// } 
// 
 
 
 
//��ӡ3�ı���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�ж�i�Ƿ�Ϊ3�ı���
//		if (i % 3 == 0)
//		{
//			printf("%d\t",i);
//		} 
//	}
//	return 0;
// } 
// 
 
 
//���������������������������Լ�� 

//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	//24  18
//	int max = 0;
//	//�������Լ������m��n�Ľ�Сֵ 
//	if (m > n)
//		max = n;
//	else
//		max = m;
//		
//	while(1)
//	{
//	if(m % max == 0 && n % max ==0)
//	{
//		printf("���Լ�����ǣ�%d\n",max);
//		break;
//	}
//	max--;    
//	}
//		
//	return 0;
//}
//


//��չ��շת���������������������������������
//#include <stdio.h> 
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (m%n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("���Լ��%d\n",n);
//	//��С������ = m*n /���Լ�� 
//	return 0;
//} 
// 
// 
 
//�ж�����
//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000;y <= 2000; y++)
//	{
//		//�ж� 
//		//1.��4���������ܱ�100����������
//		//2. �ܱ�400����������
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d\t",y);
//				count++;
//			}
//		 } 
//		if (y % 400 == 0)
//		{
//			printf("%d\t",y);
//			count++;
//		 } 
//		 
//		// if((y % 4 == 0) && (y % 100 != 0)||(y % 400 == 0)) 
//	}
//	printf("\ncount= %d\n",count);
//	return 0;
//}
 
 
 
//��ӡ����
//���� - ����
//ֻ�ܱ�1������������ 
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�����
//		//2->i-1֮�������ȥ�Գ�i�����ܲ������� 
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if(i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\t", i);
//		}
//	}
//	return 0;
//} 
// 
 
//�Ż�
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0; 
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1; //����i��������
//		for (j = 2; j < i; j++)
//		{
//			if(i % j == 0)
//			{
//				flag = 0;//�������� 
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\t", i);
//		}
//	}
//	printf("\ncount= %d\n",count);
//	return 0;
// } 
 //                  p40   !!!!!!!!!!!!!
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
