#define _CRT_SECURE_NO_WARNINGS 1
//leetcode88 合并两个有序数组
int removeElement(int* nums, int numsSize, int val) {
    int left = 0;
    for (int right = 0; right < numsSize; right++)
    {
        if (nums[right] != val) {
            nums[left] = nums[right];
            left++;
        }
    }
    return left;
}