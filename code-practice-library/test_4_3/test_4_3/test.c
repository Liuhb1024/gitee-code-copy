#define _CRT_SECURE_NO_WARNINGS 1
//leetcode 1053.交换一次的先前排列
int* prevPermOpt1(int* arr, int arrSize, int* returnSize) {
    int n = arrSize;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1]) {
            int j = n - 1;
            while (arr[j] >= arr[i] || arr[j] == arr[j - 1]) {
                j--;
            }
            int val = arr[i];
            arr[i] = arr[j];
            arr[j] = val;
            break;
        }
    }
    *returnSize = arrSize;
    return arr;
}