#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();

    if (n < 3) {
        return result;
    }

    // 数组排序
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        // 跳过重复的元素
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({ nums[i], nums[left], nums[right] });

                // 跳过重复的元素
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }

                // 跳过重复的元素
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                left++;
                right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return result;
}

// 打印二维向量
void printVector(const vector<vector<int>>& vec) {
    for (const auto& v : vec) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> nums = { -1, 0, 1, 2, -1, -4 };
    vector<vector<int>> result = threeSum(nums);

    cout << "Result:" << endl;
    printVector(result);

    return 0;
}