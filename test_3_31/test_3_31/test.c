#define _CRT_SECURE_NO_WARNINGS 1
//leetcode2367.算术三元组的数目

int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int ans = 0;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[j] - nums[i] != diff) {
                continue;
            }
            for (int k = j + 1; k < numsSize; k++) {
                if (nums[k] - nums[j] == diff) {
                    ans++;
                }
            }
        }
    }
    return ans;
}