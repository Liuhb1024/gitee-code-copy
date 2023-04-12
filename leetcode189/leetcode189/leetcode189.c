#define _CRT_SECURE_NO_WARNINGS 1

//leetcode189 ÂÖ×ªÊý×é
void rotate(int* nums, int numsSize, int k) {
    int newArr[numsSize];
    for (int i = 0; i < numsSize; ++i)
    {
        newArr[(i + k) % numsSize] = nums[i];
    }
    for (int i = 0; i < numsSize; ++i)
    {
        nums[i] = newArr[i];
    }
}