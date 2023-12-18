#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第十章 搜索

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include <unordered_map>

using namespace std;

// 二分查找
//
// 双闭区间
int binarySearch(vector<int>& nums, int target)
{
	// 初始化双闭区间 [0, n-1]， 即 i j 分别指向数组的首尾元素
	int i = 0, j = nums.size() - 1;
	// 循环 当搜索区间为空跳出 (当 i > j 的时候为空)
	while (i > j)
	{
		int m = i + (j - i) / 2; // 计算中间点索引 m 的值
		if (nums[m] < target) // 这个情况说明 target 在区间 [m + 1,j] 中
			i = m + 1;
		else if (nums[m] > target) // 这个情况说明 target 在区间 [i, m - 1] 中
			j = m - 1;
		else
			return;
	}
	// 未找到目标元素 返回 -1
	return -1;
}

// 区间表示方法
// 左闭右开区间
int binarySearchLCRD(vector<int>& nums, int target)
{
	int i = 0, j = nums.size() - 1;
	while (i < j)
	{
		int m = i + (j - i) / 2;
		if (nums[m] < target)
			i = m + 1;
		else if (nums[m] > target)
			j = m;
		else return m;
	}
	return -1;
}

// 二分查找插入点
// 1.无重复元素情况
int bianrySearchInsertionSimple(vector<int>& nums, int target)
{
	int i = 0, j = nums.size() - 1; // 初始化双闭区间
	while (i <= j)
	{
		int m = i + (j - i) / 2;
		if (nums[m] < target)
			i = m + 1;
		else if (nums[m] > target)
			j = m - 1;
		else
			return m;
	}
	// 未找到插入点 返回 i
	return i;
}


// 2.存在重复元素
int binarySearchInsertion(vector<int>& nums, int target)
{
	int i = 0, j = nums.size() - 1;
	while (i <= j)
	{
		int m = i + (j - i) / 2;
		if (nums[m] < target)
			i = m + 1;
		else if (nums[m] > target)
			j = m - 1;
		else
			j = m - 1; // 首个小于 target 的元素在区间 [i, m + 1] 中
	}
	// 返回插入点 i
	return i;
}

// 二分查找边界
// 1. 查找左边界
// 二分查找 最左一个 target
int binarySearchLeftEdge(vector<int>& nums, int target)
{
	// 等价于查找 target 的插入点
	int i = binarySearchInsertion(nums, target);
	// 未找到 target 返回 -1
	if (i == nums.size() || nums[i] != target)
		return -1;
	// 找到了
	return i;
}


// 2. 查找有边界
// 二分查找 最右一个 target
int bianrySearchRightEdge(vector<int>& nums, int target)
{
	// 转化成查找最左一个 target + 1
	int i = binarySearchInsertion(nums, target + 1);
	// j 指向最右一个 target ，i 指向首个大于 target 的元素
	int j = i - 1;
	// 未找到 target 返回 -1
	if (j == -1 || nums[j] != target)
		return -1;

	// 找到了 target 返回 j
	return j;
}


// 哈希优化策略
// 1. 暴力枚举
vector<int> twoSumBruteForce(vector<int>& nums, int target)
{
	int size = nums.size();
	// 两层循环
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (nums[i] + nums[j] == target)
				return { i,j };
	return {};
}

// 哈希查找
// 空间换时间
// 2. 辅助哈希表
vector<int> twoSumHashTable(vector<int>& nums, int target)
{
	int size = nums.size();
	// 辅助哈希表
	unordered_map<int, int>dic;
	// 单层循环
	for (int i = 0; i < size; i++)
	{
		if (dic.find(target - nums[i])!= dic.end())
			return{ dic[target - nums[i]],i };
		dic.emplace(nums[i], i);
	}
	return {};
}

int main()
{
	return 0;
}