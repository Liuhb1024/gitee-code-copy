#define _CRT_SECURE_NO_WARNINGS 1

#include<vector>


/*
leetcode ��д0
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int cur = 0, dest = -1, n = arr.size();

        // 1. �ҵ���д0��λ��
        while (cur < n)
        {
            if (arr[cur] != 0) dest++;
            else dest += 2;
            if (dest >= n - 1) break;
            cur++;
        }

        // 2. ����߽����
        if (dest == n)
        {
            arr[n - 1] = 0;
            cur--;
            dest -= 2;
        }

        // 3. ��ʼ��д����
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