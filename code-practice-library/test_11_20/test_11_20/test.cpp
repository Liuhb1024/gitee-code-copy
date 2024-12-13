#define _CRT_SECURE_NO_WARNINGS 1

#include<vector>


/*
leetcode 复写0
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int cur = 0, dest = -1, n = arr.size();

        // 1. 找到复写0的位置
        while (cur < n)
        {
            if (arr[cur] != 0) dest++;
            else dest += 2;
            if (dest >= n - 1) break;
            cur++;
        }

        // 2. 处理边界情况
        if (dest == n)
        {
            arr[n - 1] = 0;
            cur--;
            dest -= 2;
        }

        // 3. 开始复写操作
        while (cur >= 0)
        {
            if (arr[cur] != 0) arr[dest--] = arr[cur--];
            else
            {
                arr[dest--] = 0;
                arr[dest--] = 0;
                cur--;
            }
        }

    }
};
*/