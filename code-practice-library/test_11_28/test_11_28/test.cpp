#define _CRT_SECURE_NO_WARNINGS 1
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ret;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; ) {
        for (int j = i + 1; j < n; ) {
            int left = j + 1, right = n - 1;
            long long a = static_cast<long long>(target) - nums[i] - nums[j];
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum > a) {
                    right--;
                }
                else if (sum < a) {
                    left++;
                }
                else {
                    ret.push_back({ nums[i], nums[j], nums[left++], nums[right--] });
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
            j++;
            while (j < n && nums[j] == nums[j - 1]) {
                j++;
            }
        }
        i++;
        while (i < n && nums[i] == nums[i - 1]) {
            i++;
        }
    }
    return ret;
}