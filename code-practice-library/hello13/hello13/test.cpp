#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第十章 搜索
#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<vector>
#include<unordered_map>

using namespace std;

// 二分查找 双闭区间
int binarySearch(vector<int>& nums, int target)
{
	// 初始化双闭区间 [0, n - 1] ，即 i，j 分别指向数组首元素、尾元素
	int i = 0, j = nums.size() - 1;
	// 循环 当搜索区间为空跳出 (当 i > j 时为空)
	while (i <= j)
	{
		int m = i + (j - i) / 2; // 计算索引 m，避免指数溢出
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