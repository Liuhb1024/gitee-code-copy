#define _CRT_SECURE_NO_WARNINGS 1

//string的初始化
#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	string s = "Hello World";

	for (char c : s) cout << c << endl;
	return 0;
}
int main5()
{
	string s = "Hello World";

	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << endl;
	}
	return 0;
}


int main4()
{
	string s1, s2, s3, s4, s5, s6, s7;
	s1 = "hello", s2 = "world";
	s3 = s1 + " " + s2 + "!";
	cout << s3 << endl;
	cout << endl;
	s4 = s1 + " "; // 正确：把一个 string 对象 和一个有字面值的相加
	//s5 = "hello" + " ";// 错误，这里编译器也报错了，两个对象都不是 string
	s6 = s1 + " " + "world";
	//s7 = "hello" + " " + s2;// 错误，不能把字面值直接相加，运算是从左到右进行的
	return 0;
}

int main3()
{
	string s1, s2;

	if(s1 != s2)

	return 0;
}

int main2()
{
	string s1, s2 = "abc";

	cout << s1.empty() << endl;
	cout << s2.empty() << endl;

	cout << s2.size() << endl;
	return 0;
}

int main1()
{
	string s1;// 默认的空字符串
	string s2 = s1; // s2 是 s1 的一个副本
	string s3 = "ikun"; // s3 是该字符串的字面值的一个副本
	string s4(10, 'c'); // s4 的内容是 cccccccccc
	return 0;
}