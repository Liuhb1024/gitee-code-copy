#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ��ʮ�� ����
#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<vector>
#include<unordered_map>

using namespace std;

// ���ֲ��� ˫������
int binarySearch(vector<int>& nums, int target)
{
	// ��ʼ��˫������ [0, n - 1] ���� i��j �ֱ�ָ��������Ԫ�ء�βԪ��
	int i = 0, j = nums.size() - 1;
	// ѭ�� ����������Ϊ������ (�� i > j ʱΪ��)
	while (i <= j)
	{
		int m = i + (j - i) / 2; // �������� m������ָ�����
		if (nums[m] < target)
			i = m + 1;
		else if (nums[m] > target)
			j = m - 1;
		else
			return m;
	}
	return -1;
}

int main()
{
	return 0;
}