#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	string s;
	//getline(cin, s);

	return 0;
}


int main1()
{
	string s = "Hello world";

	for (char &c : s)
	{
		c = 'a';
	}

	cout << s << endl;
	return 0;
}