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

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

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

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//#include<stdio.h>
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("������%c", killer);
//	}
//	return 0;
//}

//����Ļ�ϴ�ӡ������ǡ�
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