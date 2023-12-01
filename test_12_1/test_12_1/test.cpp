#define _CRT_SECURE_NO_WARNINGS 1

#include<vector>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ret = 0; // 最大连续 1 的个数
        int zero = 0; // 0计数器
        int i = 0; // 左边界
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == 0)
                zero++;


            // 当翻转的 0 的个数超过 k 的时候， 更新左边界
            while (zero > k)
            {
                if (nums[i] == 0)
                    zero--;
                i++;
            }

            ret = max(ret, j - i + 1);
        }
        return ret;
    }
};