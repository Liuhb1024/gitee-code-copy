#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	unsigned int number;
//	int result;
//	printf("������һ���޷���������\n");
//	scanf("%d",&number);
//	result = number % 2;
//	if(result == 0)
//	{
//		printf("%dΪż��\n",number);
//	}
//	else
//	{
//		printf("%dΪ����\n",number);
//	}
//	
//	return 0;
// } 
#include<stdio.h>
int main()
{
 int x = 0;
 printf("������һ��������");
 scanf("%d", &x);
 if (x < 0) {printf("x(%d)�Ǹ�������\n", x);}
 else { printf("x(%d)�Ǹ�������\n", x); }
 if (x-100<0) { printf("x(%d)С�ڵ���100����\n",x); }
 else{ printf("x(%d)С�ڵ���100����\n",x); }
 if ((-20 <= x)&&(x <= -10)) { printf("x(%d)��-10��-20֮�䣿��\n",x); }
 else { printf("x(%d)��-10��-20֮�䣿��\n",x); }
 if (0<x < 100) { printf("x(%d)��0��100֮�䣿��\n", x); }
 else { printf("x(%d)�Ǹ�������\n", x); }
 if ((100<x)||(x<10)){ printf("x(%d)����100����xС��10����\n", x); }
 else { printf("x(%d)����100����xС��10����\n", x); }
 if (x%2==0) { printf("x(%d)��ż������\n", x); }
 else { printf("x(%d)��ż������\n", x); }
 if (x % 2 != 0) { printf("x(%d)����������\n", x); }
 else { printf("x(%d)����������\n", x); }
 if (x%5==0) { printf("x(%d)��5�ı�������\n", x); }
 else { printf("x(%d)��5�ı�������\n", x); }
 if ((20<x)&&(x%3==0)) { printf("x(%d)����20������3�ı�������\n", x); }
 else { printf("x(%d)����20������3�ı�������\n", x); }
 if ((x%3==0) || (x%5==0)) { printf("x(%d)�ܱ�3���������ܱ�5��������\n", x); }
 else { printf("x(%d)�ܱ������������ܱ�5��������\n", x); }
 if ((x % 3 != 0) && (x % 5 == 0)) { printf("x(%d)�ܱ�5���������ܱ�3��������\n", x); }
 else { printf("x(%d)�ܱ�5���������ܱ�3��������\n", x); }
 if ((x % 3 == 0) && (x % 5 == 0)) { printf("x(%d)�ܱ�5���������ܱ�3��������\n", x); }
 else { printf("x(%d)�ܱ�5���������ܱ�3��������\n", x); }
 if ((0<x<100)&& (x % 3 == 0) && (x % 5 == 0)) { printf("x(%d)��0~100�ڵ����������ң�x���ܱ�3���������ܱ�5��������\n", x); }
 else { printf("x(%d)��0~100�ڵ����������ң�x���ܱ�3���������ܱ�5��������\n", x); }
 if ((x<0)&&(x>100)|| (x % 3 != 0) && (x % 5 == 0)) { printf("����0~100�ڵ����������ߣ�x�����ܱ�3���������ܱ�5��������\n", x); }
 else { printf("x(%d)����0~100�ڵ����������ߣ�x�����ܱ�3�������ܱ�5��������\n", x);}
 printf("�����������������");
 return 0;
}




















