//三个整数从小到大
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入 
//	scanf("%d%d%d", &a, &b, &c);
//	//调整顺序
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
//	//输出-大到小 
//	printf("%d %d %d\n", a, b, c);
//	return 0;
// } 
// 
 
 
 
//打印3的倍数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断i是否为3的倍数
//		if (i % 3 == 0)
//		{
//			printf("%d\t",i);
//		} 
//	}
//	return 0;
// } 
// 
 
 
//给定两个数，求这两个数的最大公约数 

//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	//24  18
//	int max = 0;
//	//假设最大公约数就是m和n的较小值 
//	if (m > n)
//		max = n;
//	else
//		max = m;
//		
//	while(1)
//	{
//	if(m % max == 0 && n % max ==0)
//	{
//		printf("最大公约数就是：%d\n",max);
//		break;
//	}
//	max--;    
//	}
//		
//	return 0;
//}
//


//拓展：辗转相除法！！！！！！！！！！！！！！
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
//	printf("最大公约数%d\n",n);
//	//最小公倍数 = m*n /最大公约数 
//	return 0;
//} 
// 
// 
 
//判断闰年
//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000;y <= 2000; y++)
//	{
//		//判断 
//		//1.被4整除，不能被100整除是闰年
//		//2. 能被400整除是闰年
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
 
 
 
//打印素数
//素数 - 质数
//只能被1和他本身整除 
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断素数
//		//2->i-1之间的数字去试除i，看能不能整除 
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
 
//优化
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0; 
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1; //假设i就是素数
//		for (j = 2; j < i; j++)
//		{
//			if(i % j == 0)
//			{
//				flag = 0;//不是素数 
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
