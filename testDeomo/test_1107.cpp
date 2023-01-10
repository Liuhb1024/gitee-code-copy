#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	unsigned int number;
//	int result;
//	printf("请输入一个无符号整数：\n");
//	scanf("%d",&number);
//	result = number % 2;
//	if(result == 0)
//	{
//		printf("%d为偶数\n",number);
//	}
//	else
//	{
//		printf("%d为奇数\n",number);
//	}
//	
//	return 0;
// } 
#include<stdio.h>
int main()
{
 int x = 0;
 printf("请输入一个整数：");
 scanf("%d", &x);
 if (x < 0) {printf("x(%d)是负数？是\n", x);}
 else { printf("x(%d)是负数？否\n", x); }
 if (x-100<0) { printf("x(%d)小于等于100？是\n",x); }
 else{ printf("x(%d)小于等于100？否\n",x); }
 if ((-20 <= x)&&(x <= -10)) { printf("x(%d)在-10和-20之间？是\n",x); }
 else { printf("x(%d)在-10和-20之间？否\n",x); }
 if (0<x < 100) { printf("x(%d)在0和100之间？是\n", x); }
 else { printf("x(%d)是负数？否\n", x); }
 if ((100<x)||(x<10)){ printf("x(%d)大于100或者x小于10？是\n", x); }
 else { printf("x(%d)大于100或者x小于10？否\n", x); }
 if (x%2==0) { printf("x(%d)是偶数？是\n", x); }
 else { printf("x(%d)是偶数？否\n", x); }
 if (x % 2 != 0) { printf("x(%d)是奇数？是\n", x); }
 else { printf("x(%d)是奇数？否\n", x); }
 if (x%5==0) { printf("x(%d)是5的倍数？是\n", x); }
 else { printf("x(%d)是5的倍数？否\n", x); }
 if ((20<x)&&(x%3==0)) { printf("x(%d)大于20并且是3的倍数？是\n", x); }
 else { printf("x(%d)大于20并且是3的倍数？否\n", x); }
 if ((x%3==0) || (x%5==0)) { printf("x(%d)能被3整除或者能被5整除？是\n", x); }
 else { printf("x(%d)能被三整除或者能被5整除？否\n", x); }
 if ((x % 3 != 0) && (x % 5 == 0)) { printf("x(%d)能被5整除但不能被3整除？是\n", x); }
 else { printf("x(%d)能被5整除但不能被3整除？否\n", x); }
 if ((x % 3 == 0) && (x % 5 == 0)) { printf("x(%d)能被5整除并且能被3整除？是\n", x); }
 else { printf("x(%d)能被5整除并且能被3整除？否\n", x); }
 if ((0<x<100)&& (x % 3 == 0) && (x % 5 == 0)) { printf("x(%d)是0~100内的整数，并且，x是能被3整除并且能被5整除？是\n", x); }
 else { printf("x(%d)是0~100内的整数，并且，x是能被3整除并且能被5整除？否\n", x); }
 if ((x<0)&&(x>100)|| (x % 3 != 0) && (x % 5 == 0)) { printf("不是0~100内的整数，或者，x不是能被3整除并且能被5整除？是\n", x); }
 else { printf("x(%d)不是0~100内的整数，或者，x不是能被3整除且能被5整除？否\n", x);}
 printf("哈哈，我真棒！！！");
 return 0;
}




















