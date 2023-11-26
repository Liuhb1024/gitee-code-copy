#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        // 1. 排序
        sort(nums.begin(), nums.end());
        // 2. 利⽤双指针解决问题
        int n = nums.size();
        for (int i = 0; i < n; ) // 固定数 a
        {
            if (nums[i] > 0) break; // ⼩优化
            int left = i + 1, right = n - 1, target = -nums[i];
            while (left < right)
            {
                int sum = nums[left] + nums[right];
                if (sum > target) right--;
                else if (sum < target) left++;
                else
                {
                    ret.push_back({ nums[i], nums[left], nums[right] });
                    left++, right--;
                    // 去重操作 left 和 right
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
            }
            // 去重 i 
            i++;
            while (i < n && nums[i] == nums[i - 1]) i++;
        }
        return ret;

    }
};