#define _CRT_SECURE_NO_WARNINGS 1

int missingNumber(int* nums, int numsSize) {
    int x = 0;
    for (int i = 0; i < numsSize; i++)
    {
        x ^= *(nums + i);
    }
    for (int i = 0; i < numsSize + 1; i++)
    {
        x ^= i;
    }
    return x;
}