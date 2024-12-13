#define _CRT_SECURE_NO_WARNINGS 1
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int findLengthOfShortestSubarray(int* arr, int arrSize) {
    int n = arrSize, j = n - 1;
    while (j > 0 && arr[j - 1] <= arr[j]) {
        j--;
    }
    if (j == 0) {
        return 0;
    }
    int res = j;
    for (int i = 0; i < n; i++) {
        while (j < n && arr[j] < arr[i]) {
            j++;
        }
        res = MIN(res, j - i - 1);
        if (i + 1 < n && arr[i] > arr[i + 1]) {
            break;
        }
    }
    return res;
}

