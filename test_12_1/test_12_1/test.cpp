#define _CRT_SECURE_NO_WARNINGS 1

#include<vector>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ret = 0; // ������� 1 �ĸ���
        int zero = 0; // 0������
        int i = 0; // ��߽�
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == 0)
                zero++;


            // ����ת�� 0 �ĸ������� k ��ʱ�� ������߽�
            while (zero > k)
            {
                if (nums[i] == 0)
                    zero--;
                i++;
            }

            ret = max(ret, j - i + 1);
        }
        return ret;
    }
};