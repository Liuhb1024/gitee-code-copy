#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int cmp(const void* e1, const void* e2)
{
    if ((*(int*)e1) > (*(int*)e2))
        return 1;
    return 0;
}
bool findSubarrays(int* nums, int numsSize) {
    int arr[numsSize - 1];
    for (int i = 0; i < numsSize - 1; i++)
        arr[i] = nums[i] + nums[i + 1];
    qsort(arr, numsSize - 1, sizeof(int), cmp);
    for (int i = 0; i < numsSize - 2; i++)
    {
        if (arr[i] == arr[i + 1])
            return true;
    }
    return false;
}
