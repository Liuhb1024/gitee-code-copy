#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	//VS2019 不支持C99中的变长数组
//	/*int n = 10;
//	int arr[n];*/
//
//	int a = 10;
//	int b = 20;
//	int m = Max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//    int x = 0;
//    int y = 0;
//    //2 3
//    //4 5
//    //6 6
//    //7 6
//    //8 2
//
//    //while (scanf("%d %d", &x, &y) == 2)
//    //{
//    //    if (x > y)
//    //        printf("%d>%d\n", x, y);
//    //    else if (x < y)
//    //        printf("%d<%d\n", x, y);
//    //    else
//    //        printf("%d=%d\n", x, y);
//    //}
//
//    while (scanf("%d %d", &x, &y) != EOF)
//    {
//        if (x > y)
//            printf("%d>%d\n", x, y);
//        else if (x < y)
//            printf("%d<%d\n", x, y);
//        else
//            printf("%d=%d\n", x, y);
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &n);
//        printf("%d ", n);
//    }
//
//    return 0;
//}

/*
int main()
{
    int arr[10]= {0};
    //输入
    int i = 0;
    while(i<10)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    i = 0;
    while(i<10)
    {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}
*/
//
//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        if (n % 2 == 1)
//            printf("Odd\n");
//        else
//            printf("Even\n");
//    }
//
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        //拿n控制循环的次数，每次打印*
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//    }
//    printf("%.1lf\n", sum / 5.0);
//
//    return 0;
//}

/*

int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%.1lf", (a+b+c+d+e)/5.0);

    return 0;
}

*/

//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", (n / 12) * 4 + 2);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int max = 0;
//    int n = 0;
//    scanf("%d", &max);
//    //继续再读3个
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &n);
//        if (n > max)
//            max = n;
//    }
//    printf("%d\n", max);
//
//    return 0;
//}
//

#include <stdio.h>

//int main() {
//    int sc = 0;
//    char level = 0;
//    scanf("%d", &sc);
//    if (sc >= 90 && sc <= 100)
//        level = 'A';
//    else if (sc >= 80 && sc <= 89)
//        level = 'B';
//    else if (sc >= 70 && sc <= 79)
//        level = 'C';
//    else if (sc >= 60 && sc <= 69)
//        level = 'D';
//    else if (sc >= 0 && sc <= 59)
//        level = 'E';
//    else
//        level = 'F';
//
//    printf("%c\n", level);
//
//    return 0;
//}

//int main()
//{
//    /*printf("%c\n", 'A');
//    printf("%c\n", 65);
//    printf("%d\n", 'A');*/
//
//    return 0;
//}
//

#include <stdio.h>
//
//int main() {
//    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%c", arr[i]);
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int positive = 0;
//    int negative = 0;
//    //输入
//    int i = 0;
//    int n = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &n);
//        if (n >= 0)
//            positive++;
//        else
//            negative++;
//    }
//    //输出
//    printf("positive:%d\n", positive);
//    printf("negative:%d\n", negative);
//
//    return 0;
//}
//

//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (i = 5)
//            printf("%d ", i);//5
//    }
//    return 0;
//}



//#include <stdio.h>
//int main() {
//    int x = 3;
//    int y = 3;
//    switch (x % 2) {
//    case 1:
//        switch (y)
//        {
//        case 0:
//            printf("first");
//        case 1:
//            printf("second");
//            break;
//        default: printf("hello");
//        }
//    case 2:
//        printf("third");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 20) break;
//        if (b % 3 == 1)
//        {
//            b = b + 3;
//            continue;
//        }
//        b = b - 5;
//    }
//    printf("%d\n", a);
//    return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//    int i = 0;
//    //for (i = 1; i <= 100; i++)
//    //{
//    //    if (i % 3 == 0)
//    //    {
//    //        printf("%d ", i);
//    //    }
//    //}
//
//    for (i = 3; i <= 100; i+=3)
//    {
//        printf("%d ", i);
//    }
//    return 0;
//}
//

//写代码将三个整数数按从大到小输出。
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int tmp = 0;
//    //输入
//    scanf("%d %d %d", &a, &b, &c);// 2 3 1
//    //处理 - 讲a,b,c三个变量中值，调整，a中最大，b中次之，c中最小
//    if (a < b)
//    {
//        tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c)
//    {
//        tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b < c)
//    {
//        tmp = b;
//        b = c;
//        c = tmp;
//    }
//    //输出
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}

//写一个代码：打印100~200之间的素数
//素数的判断：
//只能被1和他本身整除的数，是素数
//7
//2 3 4 5 6
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int flag = 1;//假设i是素数
//        //判断i是否为素数
//        //拿2~i-1之间的数字去试除i
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;//不是素数
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\ncount = %d\n", count);
//    return 0;
//}
#include <math.h>
//
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int flag = 1;//假设i是素数
//        //判断i是否为素数
//        //拿2~i-1之间的数字去试除i
//        int j = 0;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;//不是素数
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\ncount = %d\n", count);
//    return 0;
//}


//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 101; i <= 200; i+=2)
//    {
//        int flag = 1;//假设i是素数
//        //判断i是否为素数
//        //拿2~i-1之间的数字去试除i
//        int j = 0;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;//不是素数
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\ncount = %d\n", count);
//    return 0;
//}

//
//试除法
//《素数求解的N种境界》
//

//打印1000年到2000年之间的闰年
//闰年判断的规则：
//1. 能被4整除，并且不能被100整除是闰年
//2. 能被400整除是闰年
//
//
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for (y = 1000; y <= 2000; y++)
//    {
//        //判断y是否为闰年
//        if (y % 4 == 0)
//        {
//            if (y % 100 != 0)
//            {
//                count++;
//                printf("%d ", y);
//            }
//        }
//        if (y % 400 == 0)
//        {
//            count++;
//            printf("%d ", y);
//        }
//
//        /*if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//        {
//            count++;
//            printf("%d ", y);
//        }*/
//    }
//
//    printf("\ncount = %d\n", count);
//    return 0;
//}
//

//给定两个数，求这两个数的最大公约数

//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    //假设m和n的最大公约数是m和n的较小值
//    int k = (m < n ? m : n);//18 24
//    while (1)
//    {
//        if (m % k == 0 && n % k == 0)
//            break;
//        k--;
//    }
//    printf("%d\n", k);
//
//    return 0;
//}
//

//辗转相除法
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int k = 0;
//    while (k = m % n)
//    {
//        m = n;
//        n = k;
//    }
//    printf("%d\n", n);
//
//    return 0;
//}

//
//1 2 3 4 5 6 7 8 9 10
//(1+10)*10/2
//