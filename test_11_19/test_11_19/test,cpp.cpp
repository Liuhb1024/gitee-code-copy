#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    string str;

    while (cin >> str, str != ".")
    {
        int len = str.size();

        for (int n = len; n; n--)
        {
            if (len % n == 0)
            {
                int m = len / n;
                string r = str.substr(0, m);
                string s;
                for (int i = 0; i < n; i++) s += r;

                if (s == str)
                {
                    cout << n << endl;
                    break;
                }
            }
        }
    }
    return 0;
}