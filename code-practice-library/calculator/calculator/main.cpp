#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
#include <iostream>
#include <stdlib.h>   
#include <string.h>
#include <windows.h>
#include <math.h>  
#define pi 3.1415926

using namespace std;

//�������岿��
void adorn(char adorn, int n); // װ�κ��� 
int fun(char* c1, int o, int p); // �ж������Ƿ�ƥ��
void PrintList(int top, float a[]); // ��ӡ������ 
void input(); // �Ӽ����ж�ȡ����
void Change(char c1[]); // ����׺���ʽת��Ϊ��׺���ʽ�����м���
int main(); // ʹϵͳ�����ں����ڵ���main����
void systemmenu(); //��ӡϵͳ�û����� 
float easycalculate(float a, char b, float c);//�򵥼��������㹦�� 
int easymenu();//�򵥼������Ĺ��ܽ��� 

// ���������ַ������Ա�ʵ��ջ����
char c1[1024];// ���ڴ洢�������׺���ʽ
char c2[1024];// Ϊջ����ת�������ж����Ͳ���������ѹջ
char c3[1024];// ����Ԫ�س�ջ�����������㣬�������ս����������ѹջ

// ����ȫ�ֱ���
float a[1024];// �����������������ʹ�� 
int count = 0;

// ���Ӻ���ʵ�ֲ���
int easymenu()//�򵥼������Ĺ��ܽ��� 
{
	float a;
	char b;
	float c;
	float num;
	scanf("%f%c%f", &a, &b, &c);
	num = easycalculate(a, b, c);
	cout << a << b << c << "=" << num << endl;
	cout << "����������μ��������� E �ż�" << endl;
co:		cout << num;//��ʾ��һλ���� 
	a = num;
	cin >> b;//�û�ֻ��Ҫ������������ֽ������뼴�� 
	if (b == 'E')
	{
		return 0;
	}
	else
	{
		cin >> c;
		num = easycalculate(a, b, c);//������ʽ�����ٴ����� 
		cout << a << b << c << "=" << num << endl;
		goto co;
	}
}
float easycalculate(float a, char b, float c)//�򵥼��������㹦�� 
{
	float i = 0;
	if (b == '+')
	{
		i = (a + c);
	}
	else if (b == '-')
	{
		i = (a - c);
	}
	else if (b == '*')
	{
		i = (a * c);
	}
	else if (b == '/')
	{
		i = (a / c);
	}
	return i;
}
void systemmenu()//��ӡϵͳ�û�����
{
	cout << "��ӭʹ�� IKUN �������" << endl;
	cout << "��ϵͳ��ʵ�ֵĹ�����:" << endl;
	cout << endl;
	cout << "*******************************************************************************" << endl;
	cout << "****  1��ֱ������                                                          ****" << endl;
	cout << "****  [������֧��'+''-''*''/'�����������]                                 ****" << endl;
	cout << "****  2����׺���ʽת��׺���ʽ������                                      ****"<< endl;
	cout << "****  [�˹���ʶ��ĵļ������Ϊ'+''-''*''/''^''!']                         ****" << endl;
	cout << "*******************************************************************************" << endl;
	cout << "****  �����������ֿ��˳���ϵͳ,��ѡ���Ӧѡ��                              ****" << endl;
	cout << "*******************************************************************************" << endl;
}
void adorn(char adorn, int n)// װ�κ��� 
{
	for (int i = 0; i < n; i++)
	{
		putchar(adorn);// ���ն������ַ� 
	}
	putchar('\n'); // ǿ�����ն��ַ����Ľ�β����\n,��������ַ����ڵĸ��� 
}
int fun(char* c1, int o, int p)// �ж������Ƿ�ƥ�� ��1ƥ�䣻0��ƥ�䣩 
{
	char T;
	char F;
	while ((o <= p))
	{
		switch (c1[o])
		{
		case '(':   T = c1[o];
			F = ')';
			break;
		case '[':   T = c1[o];
			F = ']';
			break;
		case '{':   T = c1[o];
			F = '}';
			break;
		case ')':   return 0;
		case ']':   return 0;
		case '}':   return 0; // �������ַ���Ϊ�����ַ����򷵻�0 
		default:
			T = '\0';
			break;
		}
		if (c1[o] == T)
		{
			int b = 1;
			int c = 0;
			int x = o + 1; // xΪo����һ���ַ� 
			while ((x <= p)) // ����ƥ��������� 
			{
				if (c1[x] == T)
					b++;
				if (c1[x] == F)
					c++;
				if (c > b)
					return 0;
				if (b == c)      // �ٶ���ƥ��������������Ž���ƥ��  
				{
					if (fun(c1, o + 1, x - 1) == 0) // �ݹ���ã������������ŷֱ�����ƥ�� 
						return 0;
					o = x;
					break;
				}
				x++;
			}
			if (b > c)
				return 0;//�����ƥ�䷵��0;
		}
		o++;
	}
	return 1;//��ƥ���Ϸ���1 
}
void PrintList(int top, float a[])//��ӡ������ 
{
	cout << "������Ϊ:" << endl;
	if (a[top] > 1000 || a[top] < 0.001) //��ѧ������ 
		printf("%.3E\n", a[top]);
	else if (a[top] <= 1000 || a[top] >= 0.001)
		printf("%.8f\n", a[top]);
	adorn('-', 90);
}
void input()//�Ӽ����ж�ȡ���� 
{
	int count = 0;
	int i;
	int j;
	int m;
	int n;
	int top = 0;
	int v = -1;
	//int u=0;
	fflush(stdin);
	fgets(c1, sizeof(c1), stdin);//����c1			
}
void Change(char c1[])//����׺���ʽת��Ϊ��׺���ʽ�����м��� 
{
	fflush(stdin); //������뻺���� 
	int count = 0;
	int i;
	int j;
	int m;
	int n;
	int top = 0;
	int v = -1;//Ϊջ�� 
	//int u=0;
	int k = strlen(c1);
	int r = fun(c1, 0, k - 1);
	if (r != 1)
	{
		printf("  ���Ų�ƥ�䣬���������� ��\n");
	loop:
		input();
		if (*c1 == 'E')
		{
			main();//���������� 
		}
		else
		{
			Change(c1);
		}
	}
	else
	{
		for (i = 0; i < k; i++)//�������������к�׺���ʽת��	
		{
			switch (c1[i])
			{
			case '(':
				c2[++top] = c1[i];
				break;
			case '+':
			case '-':
				while (top > 0 && c2[top] != '(')//�ж�ջ����Ԫ���Ƿ�Ϊ���ţ���ջ����ʱ ����ջ�е�ǰ����Ԫ�ؽ��г�ջ�����㣬������Ľ������������ջ  
				{
					c3[++v] = c2[top];
					c3[++v] = ' ';  //�ո� 
					top--;
				}
				c2[++top] = c1[i]; //��ջ�ջ�������(ʱ����"-"ֱ����ջ 
				break;
			case '*':
			case '/':
				while (top > 0 && c2[top] != '(' && c2[top] != '+' && c2[top] != '-')//�������ȼ�
				{
					c3[++v] = c2[top];
					c3[++v] = ' ';
					top--;
				}
				c2[++top] = c1[i];
				break;
			case '%':
				while (top > 0 && c2[top] != '(' && c2[top] != '+' && c2[top] != '-')//�������ȼ�
				{
					c3[++v] = c2[top];
					c3[++v] = ' ';
					top--;
				}
				c2[++top] = c1[i];
				break;
			case '^':
				while (top > 0 && c2[top] != '(' && c2[top] != '+' && c2[top] != '-')//�������ȼ�
				{
					c3[++v] = c2[top];
					c3[++v] = ' ';
					top--;
				}
				c2[++top] = c1[i];
				break;
			case '!':
				while (top > 0 && c2[top] != '(' && c2[top] != '+' && c2[top] != '-')//�������ȼ� 
				{
					c3[++v] = c2[top];
					c3[++v] = ' ';
					top--;
				}
				c2[++top] = c1[i];
				break;
			case ')':
				while (c2[top] != '(') {
					c3[++v] = c2[top];
					c3[++v] = ' ';
					top--;
				}
				top--;
				break;
			default:
				c3[++v] = c1[i];
				if (c1[i + 1] > '9' || c1[i + 1] < '0')
					c3[++v] = ' ';
				break;
			}
		}
		while (top > 0 && c2[top] != '(')
		{
			c3[++v] = c2[top];
			c3[++v] = ' ';
			top--;
		}
		cout << "���ĺ�׺���ʽ�ǣ�" << endl;
		puts(c3);
		top = 0;
		float sum;
		k = strlen(c3);
		for (i = 0; i < k; i++)
		{
			if (c3[i] == ' ')
			{
				;
			}
			else if (c3[i] == '+')
			{
				sum = a[top - 1] + a[top];
				a[--top] = sum;
			}
			else if (c3[i] == '-')
			{
				sum = a[top - 1] - a[top];
				a[--top] = sum;
			}
			else if (c3[i] == '*')
			{
				sum = a[top - 1] * a[top];
				a[--top] = sum;
			}
			else if (c3[i] == '/')
			{
				if (a[top] == 0)
				{
					cout << "  ������󣬱���������Ϊ0������������  ��" << endl;
					goto loop; 	// ��������ָ���ĵط� 
				}
				else
				{
					sum = a[top - 1] / a[top];
					a[--top] = sum;
				}
			}
			else if (c3[i] == '%')
			{
				if (a[top] == 0)
				{
					cout << "  ������󣬱�ȡ��������Ϊ0������������  ��" << endl;
					goto loop;
				}
				else
				{
					int sum1 = a[top - 1] * 10;
					int sum2 = a[top] * 10;
					sum = (sum1 % sum2) / 10;
					a[--top] = sum;
				}
			}
			else if (c3[i] == '^')
			{
				sum = pow(a[top - 1], a[top]);
				a[--top] = sum;
			}
			else if (c3[i] == '!')
			{
				if (a[top] < 0)
				{
					cout << "  ������󣬸���û�н׳ˣ����������� ��" << endl;//��ʾ��Ϣ������������
					input();
					goto loop;
				}
				else
				{
					float sum = 1;
					for (int j = 1; j <= a[top]; j++)
					{
						sum = sum * j;
					}
					a[top] = sum;
				}
			}
			else
			{
				int m = 0;
				while (c3[i] >= '0' && c3[i] <= '9')
				{
					m = 10 * m + c3[i] - '0';
					i++;
				}
				a[++top] = m;
			}
		}
		PrintList(top, a);
	}
}
// ����������
int main()
{
	while (1)
	{
	open:
		system("cls");
		systemmenu();
		int n;
		cin >> n;
		switch (n)
		{
		case 1: system("cls");
			while (1)
			{
				cout << "��ӭʹ�� IKUN ��򵥼�����" << endl;
				cout << "������֧�� + - * / �����������";
				cout << "[�����������ΪӢ���ַ�]" << endl;
				easymenu();
				int flag;
				cout << "*******************************" << endl;
				cout << "*******************************" << endl;
				cout << "** �Ƿ�ʹ�ü����򵥼�������  **" << endl;
				cout << "** 1-����                    **" << endl;
				cout << "** 2-�������˵�              **" << endl;
				cout << "*******************************" << endl;
				cout << "*******************************" << endl;
				cin >> flag;
				if (flag == 2)
				{
					break;
					goto open;
				}
			}
			break;
		case 2:	system("cls"); // ʵ����������DOS���ܣ������ʾ����Ļ�ϵ����ݣ�ʹDOS��ʾ������Ļ���Ͻ�  
			while (1)
			{
				fflush(stdin);//�����������ֵ 
				int count = 0;
				int i;
				int j;
				int m;
				int n;
				int top = 0;
				int v = -1;
				//int u=0;
				adorn('-', 90);
				cout << "  ��������Ҫ�������׺���ʽ,ֱ�ӻس����ɣ�" << endl;
				cout << "������˳������棬������'E'�ż�" << endl;
				input();
				if (*c1 == 'E')
				{
					break;
					goto open;
				}
				else
				{
					Change(c1);
				}
			}
			break;
		default:system("cls");
			cout << "**************" << endl;
			cout << "��л����ʹ�ã�" << endl;
			cout << "�ǵú���Ŷ��" << endl;
			cout << "**************" << endl;
			goto over;
		}
	}
over:
	return 0;
}