#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第十一章 排序

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<unordered_map>

using namespace std;

// 选择排序
// 工作原理：开启一个循环，每轮从未排序区间选择最小元素，将其放到已排序区间的末尾
void selectionSort(vector<int> &nums)
{
	int n = nums.size();
	// 外循环 未排序区间为 [i, n - 1]
	for (int i = 0; i < n - 1; i++)
	{
		// 内循环：找到未排序区间的最小元素
		int k = i;
		for (int j = i + 1; j < n; j++)
		{
			if (nums[j] < nums[k])
				k = i;// 记录最小元素索引
		}
		// 将该最小元素与未排序区间的首个元素交换
		swap(nums[i], nums[k]);

	}
}

// 冒泡排序
void bubbleSort(vector<int>& nums)
{
	// 外循环：未排序区间为 [0, i]
	for (int i = nums.size() - 1; i > 0; i--)
	{
		// 内循环：将未排序区间 [0,i] 中的最大元素交换至该区间的最右端
		for (int j = 0; j < i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				// 交换 nums[j] 与 nums[j+1]
				// 这里使用了 std::swap()函数
				swap(nums[j], nums[j + 1]);
			}
		}
	}
}

// 冒泡排序（标志优化）
void bubbleSortWithFlag(vector<int>& nums)
{
	// 外循环：未排序区间为 [0,i]
	for (int i = nums.size() - 1; i > 0; i--)
	{
		bool flag = false; // 初始化标志位
		// 内循环:将未排序区间 [0,i] 中的最大元素交换至该区间的最右端
		for (int j = 0; j < i; j++)
		{
			if (nums[j] > nums[j + 1])
			{	// 交换 nums[j] 与 nums[j + 1]
				// 这里使用了 std::swap() 函数
				swap(nums[j], nums[j + 1]);
				flag = true; // 记录交换元素
			}
		}
		if (!flag)
			break; // 此轮冒泡未交换任何元素，直接跳出

	}
}

// 插入排序
void insertionSort(vector<int>& nums)
{
	// 外循环：已排序元素数量为 1，2，3.....
	for (int i = 1; i < nums.size(); i++)
	{
		int base = nums[i], j = i - 1;
		// 内循环：将 base 插入到已排序部分的正确位置
		while (j >= 0 && nums[j] > base)
		{
			nums[j + 1] = nums[j]; // 将 nums[j] 向右移动一位
			j--;
		}
		nums[j + 1] = base; // 将 base 赋值到正确位置
	}
}

int main()
{

	return 0;
}