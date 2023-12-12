#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第八章 堆

#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<vector>

using namespace std;

// 堆就像是山岳峰峦，层叠起伏、形态各异。座座山峰高低错落，而最高的山峰总是最先映入眼帘。
// 堆 [heap] 就是一种满足特定条件的二叉树
// 1. 大顶堆 max heap : 任意节点的值都大于其子节点的值
// 2. 小顶堆 min heap : 任意节点的值都小于其子节点的值

// 堆常用操作
/*
   push() 元素入堆
   pop()  堆顶元素出堆
   peek() 访问堆顶元素
   size() 数量
   isEmpty()
*/

// 堆的常用操作
void testHeap()
{
	// 初始化堆
	// 初始化小顶堆
	priority_queue<int, vector<int>, greater<int>>minHeap;
	// 初始化大顶堆
	priority_queue<int, vector<int>, greater<int>>maxHeap;

	// 元素入堆
	maxHeap.push(1);
	maxHeap.push(3);
	maxHeap.push(2);
	maxHeap.push(5);
	maxHeap.push(4);

	// 获取堆顶元素
	int peek = maxHeap.top();
	cout << peek << endl;

	// 堆顶元素出堆
	// 出堆元素会形成一个从大到小的序列
	maxHeap.pop();
	maxHeap.pop();
	maxHeap.pop();
	maxHeap.pop();
	maxHeap.pop();

	// 获取堆大小
	int size = maxHeap.size();
	cout << size << endl;

	// 判断堆是否为空
	bool isEmpty = maxHeap.empty();
	cout << isEmpty << endl;

	// 输入列表并建堆
	vector<int> input{ 1,3,2,5,4 };
	priority_queue<int, vector<int>, greater<int>>minHeap(input.begin(), input.end());

}


vector<int> maxHeap;
// 堆的实现(大顶堆)

// 堆的存储与表示

// 获取左子节点索引
int left(int i)
{
	return 2 * i + 1;
}

// 获取右子节点索引
int right(int i)
{
	return 2 * i + 2;
}

// 获取父节点索引
int parent(int i)
{
	return(i - 1) / 2; // 向下整除
}

// 访问堆顶元素
int peek()
{
	return maxHeap[0];
}

// 元素入堆
void push(int val)
{
	// 添加节点
	maxHeap.push_back(val);
	// 从底至顶堆化
	siftUp(maxHeap.size() - 1);
}
// 从节点 i 开始，从底至顶堆化
void siftUp(int i)
{
	while (true)
	{
		// 获取节点 i 的父节点
		int p = parent(i);
		// 当“越过根节点”或“节点无须修复”时，结束堆化
		if (p < 0 || maxHeap[i] <= maxHeap[p])
			break;
		// 交换
		swap(maxHeap[i], maxHeap[p]);
		// 循环向上堆化
		i = p;
	}
}

bool isEmpty() {
    return maxHeap.empty();
}

// 元素出堆
void pop()
{
	// 判空
	if (isEmpty())
		throw out_of_range("堆为空");
	// 交换根节点与最右叶节点 (交换首元素与尾元素)
	swap(maxHeap[0], maxHeap[maxHeap.size() - 1]);
	// 删除节点
	maxHeap.pop_back();
	// 从顶至底堆化
	siftDown(0);
}

// 从节点 i 开始，从顶至底堆化
void siftDown(int i)
{
	while (true)
	{
		// 判断节点 i, l, r 中值最大的节点，记为 ma
		int l = left(i), r = right(i), ma = i;
		if (l < maxHeap.size() && maxHeap[l]>maxHeap[ma])
			ma = l;
		if (r < maxHeap.size() && maxHeap[r]>maxHeap[ma])
			ma = r;
		// // 若节点 i 最大或索引 l, r 越界，则无须继续堆化，跳出
		if (ma == i)
			break;
		swap(maxHeap[i], maxHeap[ma]);
		// // 循环向下堆化
		i = ma;
	}
}

class MaxHeap {
private:
	std::vector<int> maxHeap;

	int parent(int i) {
		return (i - 1) / 2;
	}

	int leftChild(int i) {
		return 2 * i + 1;
	}

	int rightChild(int i) {
		return 2 * i + 2;
	}

	void siftUp(int i) {
		while (i > 0 && maxHeap[i] > maxHeap[parent(i)]) {
			std::swap(maxHeap[i], maxHeap[parent(i)]);
			i = parent(i);
		}
	}

	void siftDown(int i) {
		int maxIndex = i;
		int l = leftChild(i);
		int r = rightChild(i);

		if (l < maxHeap.size() && maxHeap[l] > maxHeap[maxIndex]) {
			maxIndex = l;
		}

		if (r < maxHeap.size() && maxHeap[r] > maxHeap[maxIndex]) {
			maxIndex = r;
		}

		if (maxIndex != i) {
			std::swap(maxHeap[i], maxHeap[maxIndex]);
			siftDown(maxIndex);
		}
	}

public:
	MaxHeap() {}

	MaxHeap(const std::vector<int>& nums) {
		maxHeap = nums;
		for (int i = parent(maxHeap.size() - 1); i >= 0; i--) {
			siftDown(i);
		}
	}

	void push(int val) {
		maxHeap.push_back(val);
		siftUp(maxHeap.size() - 1);
	}

	int top() {
		return maxHeap[0];
	}

	void pop() {
		if (maxHeap.empty()) {
			return;
		}
		std::swap(maxHeap[0], maxHeap[maxHeap.size() - 1]);
		maxHeap.pop_back();
		siftDown(0);
	}

	bool isEmpty() {
		return maxHeap.empty();
	}

	int size() {
		return maxHeap.size();
	}
};

//// 修改后的构造函数
//MaxHeap(vector<int> nums) {
//	maxHeap = nums;
//	for (int i = parent(maxHeap.size() - 1); i >= 0; i--) {
//		siftDown(i);
//	}
//}

// top-k
/* 基于堆查找数组中最大的 k 个元素 */
priority_queue<int, vector<int>, greater<int>> topKHeap(vector<int>& nums, int k) {
	// 初始化小顶堆
	priority_queue<int, vector<int>, greater<int>> heap;
	// 将数组的前 k 个元素入堆
	for (int i = 0; i < k; i++) {
		heap.push(nums[i]);
	}
	// 从第 k+1 个元素开始，保持堆的长度为 k
	for (int i = k; i < nums.size(); i++) {
		// 若当前元素大于堆顶元素，则将堆顶元素出堆、当前元素入堆
		if (nums[i] > heap.top()) {
			heap.pop();
			heap.push(nums[i]);
		}
	}
	return heap;
}
int main()
{
	void testHeap();
	return 0;
}