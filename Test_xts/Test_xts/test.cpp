#define _CRT_SECURE_NO_WARNINGS 1


int findMissingNum(int nums[], int n) {
    int missing_num = n;  // 初始值为n，可以肯定地知道n不在数组中
    for (int i = 0; i < n; ++i) {
        missing_num ^= i ^ nums[i];
    }
    return missing_num;
}

// 示例用法
int main() {
    int nums[4] = { 1, 3, 0, 4 };
    int missing_num = findMissingNum(nums, 4);
    cout << missing_num << endl;  // 输出2
    return 0;
}
