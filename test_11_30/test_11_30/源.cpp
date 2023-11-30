#define _CRT_SECURE_NO_WARNINGS 1
#include<algorithm>
#include<iostream>

using namespace std;


// 暴力解法 枚举+哈希
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ret = 0; // 结果
        int n = s.size();

        // 枚举
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