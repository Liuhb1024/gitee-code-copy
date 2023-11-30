#define _CRT_SECURE_NO_WARNINGS 1
#include<algorithm>
#include<iostream>

using namespace std;


// �����ⷨ ö��+��ϣ
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ret = 0; // ���
        int n = s.size();

        // ö��
        for (int i = 0; i < n; i++)
        {
            int hash[128] = { 0 };
            for (int j = i; j < n; j++)
            {
                hash[s[j]]++;
                if (hash[s[j]] > 1) break;

                ret = max(ret, j + 1 - i);
            }
        }
        return ret;
    }
};