#define _CRT_SECURE_NO_WARNINGS 1

/*
Acwing�﷨������1
������������롢���ʽ��˳�����
*/

//hello world ����
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
cpp���������ܣ�

ͷ�ļ�
#include<iostream> 
#include<cstdio>  ---  cout <<" "<< endl

using namespace std;  �����ռ�

int main() -- �������
{
    return 0;
}
*/

/*
����

���ͣ�bool���洢true��false��
     char���ַ����ͣ� char 'a';
     int���������ͣ�-2147484648 ~ 2147483647
     float�������ͣ�

int main()
{
    bool true/false    1byte
        char'a','c',' ','\n'     1byte
        int - -2147484648 ~2147483647    4byte
        float 1.23, 2.5, 1.235e2, 6-7λ��Ч����    4byte
        double 15-16λ��Ч����     8byte

        longlong  -   -2^63 ~ 2^63-1     8byte
        long double 18-19λ��Ч����      12byte 
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
�������
*/

//�������
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int a, b;//������������
//
//    cin >> a >> b;// ����
//    cout << a + b << endl;// ���
//    //endl--�س�
//
//    return 0;
//}

//�ַ������������

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

//����������
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int a, b;//������������
//
//    cin >> a >> b;// ����
//    cout << a + b << ' ' << a * b << endl;// ���
//    //endl--�س�
//
//    return 0;
//}

//��scanf��printf
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//    int a, b;//������������
//    float c, d;
//    char e, f;
//    long long g, h;
////��������
//    scanf("%d %d\n", &a, &b);
////����������
//    scanf("%f %f\n", &c, &d);
////�ַ����͵�����
//    scanf("%c %c\n", &e, &f);
//
//    scanf("%lld%lld", &g, &h);
//
////%d %f��ȡ��������
//    printf("%d %d\n", a, b);
////�������
//    printf("a + b = %d\na * b = %d\n", a + b, a * b);
////���������
//    printf("a + b = %.2f\na * b = %.3f\n", a + b, a * b);
////�ַ��������
//    printf("%c %c\n", e, f);
//
//    printf("%lld %lld", g, h);
//    return 0;
//}

//���㷨���Ե�֮�У�����ʹ��cout��cin�ĵط�һ������ʹ��scanf��printf
//���ǿ���ʹ��scanf��printf�ĵط���һ������ʹ��cout��cin
//��֮���漰��Ч������

/*
int : %d
float : %f
double : %lf
char : %c
long long : %lld
*/

/*
���ʽ
�Ӽ��˳���������
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
���Ϊ��
1
-1
2
2.5
*/

//�������������Լ�
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
//���6 7

/*
+ - * / % ��һ��
��д��
b = b + a;
b += a;
*/

/*
������ǿ��ת��

int ------> float��double
    <------
    ��ȡ��

int ------>char 
������ֵת�����������Ascll���
  
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
////����ǿ��ת�� --- ת���ɾ��Ƚϸߵ�����
//    int a = 6;
//    float b = 1.3;
//
//    cout << a * b << endl;
//    //7.8
//    return 0;
//}

/*
˳�����
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

//����
#include<iostream>

using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << "DIFFRENCA = " << A * B - C * D << endl;
    return 0;
}