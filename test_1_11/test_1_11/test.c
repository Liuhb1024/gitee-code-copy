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
//	//VS2019 ��֧��C99�еı䳤����
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
    //����
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
//        //��n����ѭ���Ĵ�����ÿ�δ�ӡ*
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
//    //�����ٶ�3��
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
//    //����
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
//    //���
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

//дһ�������ӡ1-100֮������3�ı���������
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

//д���뽫�������������Ӵ�С�����
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int tmp = 0;
//    //����
//    scanf("%d %d %d", &a, &b, &c);// 2 3 1
//    //���� - ��a,b,c����������ֵ��������a�����b�д�֮��c����С
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
//    //���
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}

//дһ�����룺��ӡ100~200֮�������
//�������жϣ�
//ֻ�ܱ�1������������������������
//7
//2 3 4 5 6
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int flag = 1;//����i������
//        //�ж�i�Ƿ�Ϊ����
//        //��2~i-1֮�������ȥ�Գ�i
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;//��������
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
//        int flag = 1;//����i������
//        //�ж�i�Ƿ�Ϊ����
//        //��2~i-1֮�������ȥ�Գ�i
//        int j = 0;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;//��������
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
//        int flag = 1;//����i������
//        //�ж�i�Ƿ�Ϊ����
//        //��2~i-1֮�������ȥ�Գ�i
//        int j = 0;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;//��������
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
//�Գ���
//����������N�־��硷
//

//��ӡ1000�굽2000��֮�������
//�����жϵĹ���
//1. �ܱ�4���������Ҳ��ܱ�100����������
//2. �ܱ�400����������
//
//
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for (y = 1000; y <= 2000; y++)
//    {
//        //�ж�y�Ƿ�Ϊ����
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

//���������������������������Լ��

//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    //����m��n�����Լ����m��n�Ľ�Сֵ
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

//շת�����
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