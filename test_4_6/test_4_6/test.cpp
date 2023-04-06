#define _CRT_SECURE_NO_WARNINGS 1

/*
Acwing语法基础课1
变量、输出输入、表达式、顺序语句
*/

//hello world 代码
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//	cout << "Hello world" << endl;
//	return 0;
//}

/*
cpp程序基本框架：

头文件
#include<iostream> 
#include<cstdio>  ---  cout <<" "<< endl

using namespace std;  命名空间

int main() -- 函数入口
{
    return 0;
}
*/

/*
变量

类型：bool（存储true、false）
     char（字符类型） char 'a';
     int（整数类型）-2147484648 ~ 2147483647
     float（浮点型）

int main()
{
    bool true/false    1byte
        char'a','c',' ','\n'     1byte
        int - -2147484648 ~2147483647    4byte
        float 1.23, 2.5, 1.235e2, 6-7位有效数字    4byte
        double 15-16位有效数字     8byte

        longlong  -   -2^63 ~ 2^63-1     8byte
        long double 18-19位有效数字      12byte 
        return 0;
}
 */
/*
#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    int a, b = 2, c = b;
    float d = 1.5, e = 1, f = 1.234e2;
    bool g = true, h = false;
    char j = 'a', k = 'b';

    long long  l = 12312121LL;
    long double m = 123.45f;

    return 0;
}
*/
/*
输入输出
*/

//两数相加
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int a, b;//定义两个变量
//
//    cin >> a >> b;// 输入
//    cout << a + b << endl;// 输出
//    //endl--回车
//
//    return 0;
//}

//字符串的输入输出

//#include<iostream>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//    string str;
//    cin >> str;
//    cout << str;
//    return 0;
//}

//输出多个变量
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int a, b;//定义两个变量
//
//    cin >> a >> b;// 输入
//    cout << a + b << ' ' << a * b << endl;// 输出
//    //endl--回车
//
//    return 0;
//}

//用scanf、printf
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//    int a, b;//定义两个变量
//    float c, d;
//    char e, f;
//    long long g, h;
////整数输入
//    scanf("%d %d\n", &a, &b);
////浮点数输入
//    scanf("%f %f\n", &c, &d);
////字符类型的输入
//    scanf("%c %c\n", &e, &f);
//
//    scanf("%lld%lld", &g, &h);
//
////%d %f读取整数类型
//    printf("%d %d\n", a, b);
////整数输出
//    printf("a + b = %d\na * b = %d\n", a + b, a * b);
////浮点数输出
//    printf("a + b = %.2f\na * b = %.3f\n", a + b, a * b);
////字符类型输出
//    printf("%c %c\n", e, f);
//
//    printf("%lld %lld", g, h);
//    return 0;
//}

//在算法考试等之中，可以使用cout、cin的地方一定可以使用scanf、printf
//但是可以使用scanf、printf的地方不一定可以使用cout、cin
//这之间涉及的效率问题

/*
int : %d
float : %f
double : %lf
char : %c
long long : %lld
*/

/*
表达式
加减乘除四则运算
+ - * / %
*/
//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int main()
//{
//    cout << 5 % 2 << endl;
//    cout << -5 % 2 << endl;
//    cout << 5 / 2 << endl;
//    cout << 5.0 / 2.0 << endl;
//
//    return 0;
//}
/*
结果为：
1
-1
2
2.5
*/

//整数的自增、自减
//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int main()
//{
//    int a = 6;
//   // a++;
//    int c = a++;
//    cout << c << endl;
//
//    int b = 6;
//    //++b;
//    int d = ++b;
//    cout << d << endl;
//
//    return 0;
//}
//结果6 7

/*
+ - * / % 都一样
简写：
b = b + a;
b += a;
*/

/*
变量的强制转换

int ------> float、double
    <------
    下取整

int ------>char 
具体数值转换见于详见于Ascll码表
  
*/
#include<cstdio>
#include<iostream>

using namespace std;
//int main()
//{
//    /*int a = 5;
//    float b = (float)a;
//    printf("%f", b);*/
//    // 5.0000000000
//
//    /*float a = 5.23;
//    int b = (int)a;
//    printf("%d", b);*/
//    // 5
//
//   /* int t = 97;
//    char c = (char)t;
//    printf("%c", c);*/
//    // a
//
//    /*char c = 'A';
//
//    cout << (char)(c + 32) << endl;*/
//    //b
////隐性强制转换 --- 转换成精度较高的类型
//    int a = 6;
//    float b = 1.3;
//
//    cout << a * b << endl;
//    //7.8
//    return 0;
//}

/*
顺序语句
*/
//int main()
//{
//    int a;
//    cin >> a;
//
//    int b = a + 2;
//    int c = b * 3, d;
//    
//    d = c * 2;
//    cout << d << endl;
//    return 0;
//}

//例题
#include<iostream>

using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << "DIFFRENCA = " << A * B - C * D << endl;
    return 0;
}