#define _CRT_SECURE_NO_WARNINGS 1

//string�ĳ�ʼ��
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
	s4 = s1 + " "; // ��ȷ����һ�� string ���� ��һ��������ֵ�����
	//s5 = "hello" + " ";// �������������Ҳ�����ˣ��������󶼲��� string
	s6 = s1 + " " + "world";
	//s7 = "hello" + " " + s2;// ���󣬲��ܰ�����ֱֵ����ӣ������Ǵ����ҽ��е�
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
	string s1;// Ĭ�ϵĿ��ַ���
	string s2 = s1; // s2 �� s1 ��һ������
	string s3 = "ikun"; // s3 �Ǹ��ַ���������ֵ��һ������
	string s4(10, 'c'); // s4 �������� cccccccccc
	return 0;
}