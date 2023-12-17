#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
#include <iostream>
#include <stdlib.h>   
#include <string.h>
#include <windows.h>
#include <math.h>  
#define pi 3.1415926

using namespace std;

//函数定义部分
void adorn(char adorn, int n); // 装饰函数 
int fun(char* c1, int o, int p); // 判断括号是否匹配
void PrintList(int top, float a[]); // 打印计算结果 
void input(); // 从键盘中读取数据
void Change(char c1[]); // 将中缀表达式转换为后缀表达式并进行计算
int main(); // 使系统可以在函数内调用main函数
void systemmenu(); //打印系统用户界面 
float easycalculate(float a, char b, float c);//简单计算器计算功能 
int easymenu();//简单计算器的功能界面 

// 定义三个字符串，以便实现栈操作
char c1[1024];// 用于存储输入的中缀表达式
char c2[1024];// 为栈用于转化过程中对数和操作符进行压栈
char c3[1024];// 用于元素出栈后进行相关运算，并将最终结果进行重新压栈

// 定义全局变量
float a[1024];// 用于最后计算结果的输出使用 
int count = 0;

// 各子函数实现部分
int easymenu()//简单计算器的功能界面 
{
	float a;
	char b;
	float c;
	float num;
	scanf("%f%c%f", &a, &b, &c);
	num = easycalculate(a, b, c);
	cout << a << b << c << "=" << num << endl;
	cout << "若想结束本次计算请输入 E 号键" << endl;
co:		cout << num;//显示第一位数字 
	a = num;
	cin >> b;//用户只需要对运算符与数字进行输入即可 
	if (b == 'E')
	{
		return 0;
	}
	else
	{
		cin >> c;
		num = easycalculate(a, b, c);//对运算式进行再次运算 
		cout << a << b << c << "=" << num << endl;
		goto co;
	}
}
float easycalculate(float a, char b, float c)//简单计算器计算功能 
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
void systemmenu()//打印系统用户界面
{
	cout << "欢迎使用 IKUN 版计算器" << endl;
	cout << "本系统可实现的功能有:" << endl;
	cout << endl;
	cout << "*******************************************************************************" << endl;
	cout << "****  1、直接运算                                                          ****" << endl;
	cout << "****  [本功能支持'+''-''*''/'四种运算符号]                                 ****" << endl;
	cout << "****  2、中缀表达式转后缀表达式并计算                                      ****"<< endl;
	cout << "****  [此功能识别的的计算符号为'+''-''*''/''^''!']                         ****" << endl;
	cout << "*******************************************************************************" << endl;
	cout << "****  输入其他数字可退出本系统,请选择对应选项                              ****" << endl;
	cout << "*******************************************************************************" << endl;
}
void adorn(char adorn, int n)// 装饰函数 
{
	for (int i = 0; i < n; i++)
	{
		putchar(adorn);// 向终端输送字符 
	}
	putchar('\n'); // 强制在终端字符串的结尾加上\n,方便计算字符串内的个数 
}
int fun(char* c1, int o, int p)// 判断括号是否匹配 （1匹配；0不匹配） 
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
		case '}':   return 0; // 若输入字符串为以上字符，则返回0 
		default:
			T = '\0';
			break;
		}
		if (c1[o] == T)
		{
			int b = 1;
			int c = 0;
			int x = o + 1; // x为o的下一个字符 
			while ((x <= p)) // 搜索匹配的右括号 
			{
				if (c1[x] == T)
					b++;
				if (c1[x] == F)
					c++;
				if (c > b)
					return 0;
				if (b == c)      // 再对已匹配括号里面的括号进行匹配  
				{
					if (fun(c1, o + 1, x - 1) == 0) // 递归调用，从最外层的括号分别向内匹配 
						return 0;
					o = x;
					break;
				}
				x++;
			}
			if (b > c)
				return 0;//如果不匹配返回0;
		}
		o++;
	}
	return 1;//都匹配上返回1 
}
void PrintList(int top, float a[])//打印计算结果 
{
	cout << "计算结果为:" << endl;
	if (a[top] > 1000 || a[top] < 0.001) //科学计数法 
		printf("%.3E\n", a[top]);
	else if (a[top] <= 1000 || a[top] >= 0.001)
		printf("%.8f\n", a[top]);
	adorn('-', 90);
}
void input()//从键盘中读取数据 
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
	fgets(c1, sizeof(c1), stdin);//输入c1			
}
void Change(char c1[])//将中缀表达式转换为后缀表达式并进行计算 
{
	fflush(stdin); //清空输入缓存区 
	int count = 0;
	int i;
	int j;
	int m;
	int n;
	int top = 0;
	int v = -1;//为栈空 
	//int u=0;
	int k = strlen(c1);
	int r = fun(c1, 0, k - 1);
	if (r != 1)
	{
		printf("  括号不匹配，请重新输入 ：\n");
	loop:
		input();
		if (*c1 == 'E')
		{
			main();//返回主函数 
		}
		else
		{
			Change(c1);
		}
	}
	else
	{
		for (i = 0; i < k; i++)//对输入的数组进行后缀表达式转换	
		{
			switch (c1[i])
			{
			case '(':
				c2[++top] = c1[i];
				break;
			case '+':
			case '-':
				while (top > 0 && c2[top] != '(')//判断栈顶的元素是否为括号，且栈不空时 ，将栈中的前两个元素进行出栈与运算，将运算的结果进行重新入栈  
				{
					c3[++v] = c2[top];
					c3[++v] = ' ';  //空格 
					top--;
				}
				c2[++top] = c1[i]; //当栈空或者遇到(时，将"-"直接入栈 
				break;
			case '*':
			case '/':
				while (top > 0 && c2[top] != '(' && c2[top] != '+' && c2[top] != '-')//考虑优先级
				{
					c3[++v] = c2[top];
					c3[++v] = ' ';
					top--;
				}
				c2[++top] = c1[i];
				break;
			case '%':
				while (top > 0 && c2[top] != '(' && c2[top] != '+' && c2[top] != '-')//考虑优先级
				{
					c3[++v] = c2[top];
					c3[++v] = ' ';
					top--;
				}
				c2[++top] = c1[i];
				break;
			case '^':
				while (top > 0 && c2[top] != '(' && c2[top] != '+' && c2[top] != '-')//考虑优先级
				{
					c3[++v] = c2[top];
					c3[++v] = ' ';
					top--;
				}
				c2[++top] = c1[i];
				break;
			case '!':
				while (top > 0 && c2[top] != '(' && c2[top] != '+' && c2[top] != '-')//考虑优先级 
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
		cout << "它的后缀表达式是：" << endl;
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
					cout << "  输入错误，被除数不能为0，请重新输入  ：" << endl;
					goto loop; 	// 跳到程序指定的地方 
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
					cout << "  输入错误，被取余数不能为0，请重新输入  ：" << endl;
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
					cout << "  输入错误，负数没有阶乘，请重新输入 ：" << endl;//提示信息，并重新输入
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
// 主函数部分
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
				cout << "欢迎使用 IKUN 版简单计算器" << endl;
				cout << "本功能支持 + - * / 四种运算符号";
				cout << "[且运算符号需为英文字符]" << endl;
				easymenu();
				int flag;
				cout << "*******************************" << endl;
				cout << "*******************************" << endl;
				cout << "** 是否使用继续简单计算器？  **" << endl;
				cout << "** 1-继续                    **" << endl;
				cout << "** 2-返回主菜单              **" << endl;
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
		case 2:	system("cls"); // 实现启动器的DOS功能，清除显示器屏幕上的内容，使DOS提示符到屏幕左上角  
			while (1)
			{
				fflush(stdin);//清除缓冲区的值 
				int count = 0;
				int i;
				int j;
				int m;
				int n;
				int top = 0;
				int v = -1;
				//int u=0;
				adorn('-', 90);
				cout << "  请输入需要计算的中缀表达式,直接回车即可：" << endl;
				cout << "如果想退出本界面，请输入'E'号键" << endl;
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
			cout << "感谢您的使用！" << endl;
			cout << "记得好评哦！" << endl;
			cout << "**************" << endl;
			goto over;
		}
	}
over:
	return 0;
}