#define _CRT_SECURE_NO_WARNINGS 1

//�žų˷���
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 9; i++)
//	{
//		//��ӡһ�е�����
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��ʮ���������ֵ
//��������̨-����max
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//// �±�            0,1,2,3,4,5,6,7,8,9
//	int max = arr[0];  ע��
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}


//�������
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1 / i;
//	}
//
//	printf("%f\n", sum);
//	return 0;
//}
//�Ľ���
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0f / i;
//		flag = -flag;
//	}
//
//	printf("%f\n", sum);
//	return 0;
//}


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



