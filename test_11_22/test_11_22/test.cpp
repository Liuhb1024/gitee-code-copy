#define _CRT_SECURE_NO_WARNINGS 1

// leetcode 有效的三角形个数
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ret = 0, n = nums.size();
        // 先排序
        sort(nums.begin(), nums.end());
        // 双指针算法
        for (int i = n - 1; i >= 2; i--)
        {
            int left = 0, right = i - 1;
            while (left < right)
            {
                if (nums[left] + nums[right] > nums[i])
                {
                    ret += right - left;
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return ret;
    }
};