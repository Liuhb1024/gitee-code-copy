#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//99�˷���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
//�����ֵ
//��10 �����������ֵ

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 0)
//			count++;
//	}
//	printf("1�� 100 �����������г��� %d ��9��", count);
//	return 0;
//

//int main()
//{
//	printf("���������룺>");
//	char password[20] = { 0 };
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N��:>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	if (ch == 'N')
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	printf("���������룺>");
//	char password[20] = { 0 };
//	scanf("%s", password);
//	getchar(); //����\n
//	printf("��ȷ�����루Y/N��:>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	if (ch == 'N')
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("���������룺>");
//	char password[20] = { 0 };
//	scanf("%s", password);
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("��ȷ�����루Y/N��:>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	if (ch == 'N')
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//
//{
//	char name[20] = { 0 };
//	scanf("%[^\n]", name);;
//	printf("%s\n", name);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//for(i=1/*��ʼ��*/; i<=10/*�жϲ���*/; i++/*��������*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//	for (; ;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//    int j = 0;
//    int i = 0;
//    //���ӡ������hehe�أ�
//    for (; i < 3; i++)
//    {
//        for (; j < 3; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//int x, y;
//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//{
//	printf("hehe\n");
//}
//return 0;
//}
//����ѭ��Ҫѭ�����ٴΣ�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}

//#include <stdlib.h>
//#include <time.h>
//
//
//void menu()
//{
//	printf("********************************\n");
//	printf("*******     1. play      *******\n");
//	printf("*******     0. exit      *******\n");
//	printf("********************************\n");
//}
//
//
//void game()
//{
//	//RAND_MAX-32767
//	//1.���������
//	//����rand����
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��С��\n")
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	//����srand����
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//

//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}