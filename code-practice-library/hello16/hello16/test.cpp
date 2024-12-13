#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第十一章 排序

#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

// 快速排序:一种基于分治策略的排序算法 
// 核心操作是 “哨兵划分” 目标是：选择某个数组中的元素作为 “基准数” 将所有小于基准数的元素移动到其左边，反之移动到右边
/*
   具体操作：
   1. 选取数组最左端元素作为基准数，初始化两个指针 i 和 j 分别指向数组两端
   2. 设置一个循环 在每轮中使用 i(j) 分别寻找第一个闭基准数大(小)的元素，然后交换这两个元素
   3. 循环执行步骤，直到 i j 相遇时就停止 最后将基准数交换至两个子数组的分界线
*/

// 元素交换
void swap(vector<int>& nums, int i, int j)
{
	int tmp = nums[i];
	nums[i] = nums[j];
	nums[j] = tmp;
}

// 哨兵划分
int partition(vector<int>& nums, int left, int right)
{
	// 以 nums[left] 为基准数
	int i = left, j = right;
	while (i < j)
	{
		while (i < j && nums[j] >= nums[left])
			j--; // 从右向左找首个小于基准数的元素
		while (i < j && nums[i] <= nums[left])
			i++; // 从左向右找首个大于基准数的元素
		// 交换这两个元素
		swap(nums, i, j);
	}
	swap(nums, i, left); // 将基准数交换至两数组的分界线
	return i; // 返回基准数的索引
}

// 算法流程
/*
   1. 首先，对原数组执行一次 “哨兵划分” ，得到未排序的左子数组和右子数组
   2. 然后，对左子数组和右子数组分别执行 “哨兵划分”
   3. 持续递归 直至子数组长度为 1 时终止，从而完成整个数组的排序
*/
// 快速排序
void quickSort(vector<int>& nums, int left, int right)
{
	// 子数组长度为 1 时终止递归
	if (left >= right)
		return;
	// 哨兵划分
	int pivot = partition(nums, left, right);
	// 递归 左 右子数组
	quickSort(nums, left, pivot - 1);
	quickSort(nums, pivot + 1, right);
}

// 基准数优化

// 选取三个元素的中位数
int medianThree(vector<int>& nums, int left, int mid, int right)
{
	// 此处使用异或运算来简化代码
	// 异或规则 0 ^ 0 = 1 ^ 1  = 0, 0 ^ 1 = 1 ^ 0 = 1
	if ((nums[left] < nums[mid]) ^ (nums[mid] < nums[right]))
		return left;
	else if ((nums[mid] < nums[left]) ^ (nums[mid] < nums[right]))
		return mid;
	else
		return right;
}

// 哨兵划分 (三数取中值)
int partition(vector<int>& nums, int left, int right)
{
	// 选取三个候选元素的中位数
	int med = medianThree(nums, left, (left + right) / 2, right);
	// 将中位数交换至最左端
	swap(nums, left, med);
	// 以 nums[left] 为基准数
	int i = left, j = right;
	while (i < j)
	{
		while (i < j && nums[j] >= nums[left])
			j--; // 从右向左找首个小于基准数的元素
		while (i < j && nums[i] <= nums[left])
			i++;          // 从左向右找首个大于基准数的元素
		swap(nums, i, j); // 交换这两个元素
	}
	swap(nums, i, left); // 将基准数交换至两子数组的分界线
	return i;            // 返回基准数的索引
}

// 快速排序（尾递归优化）
void quickSort(vector<int>& nums, int left, int right) {
	// 子数组长度为 1 时终止
	while (left < right) {
		// 哨兵划分操作
		int pivot = partition(nums, left, right);
		// 对两个子数组中较短的那个执行快速排序
		if (pivot - left < right - pivot) {
			quickSort(nums, left, pivot - 1); // 递归排序左子数组
			left = pivot + 1;                 // 剩余未排序区间为 [pivot + 1, right]
		}
		else {
			quickSort(nums, pivot + 1, right); // 递归排序右子数组
			right = pivot - 1;                 // 剩余未排序区间为 [left, pivot - 1]
		}
	}
}


// 归并排序
// 归并排序是一种基于分治策略的排序算法，有两个阶段：
// 1. 划分阶段
//    通过递归不断地将数组从中点处分开 将长数组地排序问题转化为短数组的排序问题
// 2. 合并阶段
//    当子数组长度为1的时候终止划分，开始合并，持续的将左右两个较短有序数组合并成一个较长的有序数组，直至结束

/* 
  算法流程
  1. 计算数组中点 mid，递归划分左子数组（区间 [left, mid] ）和右子数组（区间 [mid + 1, right] ）
  2. 递归执行步骤 1，直至子数组区间长度为 1 时为止

  归并排序与二叉树的遍历的递归顺序是一致的
  1. 后序遍历 先递归左子树，再递归右子树，最后处理根节点。
  2. 归并排序 先递归左子数组，再递归右子数组，最后处理合并

*/

// 合并左子数组和右子数组
void merge(vector<int>& nums, int left, int mid, int right)
{
	// 左子数组区间 [left, mid], 右子数组区间 [mid + 1, right]
	// 创一个临时数组，用于存放合并后的结果
	vector<int> tmp(right - left + 1);
	// 初始化左子数组和右子数组的起始索引
	int i = left, j = mid + 1, k = 0;
	// 当左右子数组都还有元素的时候，比较较小的元素复制粘贴到临时数组中
	while (i <= mid && j <= right)
	{
		if (nums[i] <= nums[j])
			tmp[k++] = nums[i++];
		else
			tmp[k++] = nums[j++];
	}
	// 将左子数组和右子数组的剩余元素复制到临时数组中
	while (i <= mid)
	{
		tmp[k++] = nums[i++];
	}
	while (j <= right)
	{
		tmp[k++] = nums[j++];
	}
	// 将临时数组 tmp 中的元素复制回原数组 nums 对应的区间
	for (k = 0; k < tmp.size(); k++)
		nums[left + k] = tmp[k];
} 

// 归并排序
void mergeSort(vector<int>& nums, int left, int right)
{
	// 终止条件
	if (left >= right)
		return; // 当子数组长度为 1 的时候终止递归
	// 划分阶段
	int mid = (left + right) / 2; // 计算中点
	mergeSort(nums, left, mid); // 递归左子数组
	mergeSort(nums, mid + 1, right); // 递归右子数组
	// 合并阶段
	merge(nums, left, mid, right);
}

// 堆排序 是一种基于数据结构的高效排序算法
/*
   1. 输入数组并建立小顶堆，此时最小元素位于堆顶
   2. 不断执行出堆操作，依次记录出堆元素，即可得从小到大的排序的序列
   有点粗糙，换点优雅的~~

   算法流程
   1. 输入数组并建立大顶堆。完成后，最大元素位于堆顶。
   2. 将堆顶元素（第一个元素）与堆底元素（最后一个元素）交换。完成交换后，堆的长度减 ，已排序元素数量加 
   3. 从堆顶元素开始，从顶到底执行堆化操作（Sift Down）。完成堆化后，堆的性质得到修复。
   4. 循环执行第 2 步和第 3 步。循环 n-1 轮后，即可完成数组排序。
*/
/* 堆的长度为 n ，从节点 i 开始，从顶至底堆化 */
void siftDown(vector<int>& nums, int n, int i) {
	while (true) {
		// 判断节点 i, l, r 中值最大的节点，记为 ma
		int l = 2 * i + 1;
		int r = 2 * i + 2;
		int ma = i;
		if (l < n && nums[l] > nums[ma])
			ma = l;
		if (r < n && nums[r] > nums[ma])
			ma = r;
		// 若节点 i 最大或索引 l, r 越界，则无须继续堆化，跳出
		if (ma == i) {
			break;
		}
		// 交换两节点
		swap(nums[i], nums[ma]);
		// 循环向下堆化
		i = ma;
	}
}

/* 堆排序 */
void heapSort(vector<int>& nums) {
	// 建堆操作：堆化除叶节点以外的其他所有节点
	for (int i = nums.size() / 2 - 1; i >= 0; --i) {
		siftDown(nums, nums.size(), i);
	}
	// 从堆中提取最大元素，循环 n-1 轮
	for (int i = nums.size() - 1; i > 0; --i) {
		// 交换根节点与最右叶节点（交换首元素与尾元素）
		swap(nums[0], nums[i]);
		// 以根节点为起点，从顶至底进行堆化
		siftDown(nums, i, 0);
	}
}

/* 桶排序 */
void bucketSort(vector<float>& nums) {
	// 初始化 k = n/2 个桶，预期向每个桶分配 2 个元素
	int k = nums.size() / 2;
	vector<vector<float>> buckets(k);
	// 1. 将数组元素分配到各个桶中
	for (float num : nums) {
		// 输入数据范围为 [0, 1)，使用 num * k 映射到索引范围 [0, k-1]
		int i = num * k;
		// 将 num 添加进桶 bucket_idx
		buckets[i].push_back(num);
	}
	// 2. 对各个桶执行排序
	for (vector<float>& bucket : buckets) {
		// 使用内置排序函数，也可以替换成其他排序算法
		sort(bucket.begin(), bucket.end());
	}
	// 3. 遍历桶合并结果
	int i = 0;
	for (vector<float>& bucket : buckets) {
		for (float num : bucket) {
			nums[i++] = num;
		}
	}
}

/* 计数排序 */
// 简单实现，无法用于排序对象
void countingSortNaive(vector<int>& nums) {
	// 1. 统计数组最大元素 m
	int m = 0;
	for (int num : nums) {
		m = max(m, num);
	}
	// 2. 统计各数字的出现次数
	// counter[num] 代表 num 的出现次数
	vector<int> counter(m + 1, 0);
	for (int num : nums) {
		counter[num]++;
	}
	// 3. 遍历 counter ，将各元素填入原数组 nums
	int i = 0;
	for (int num = 0; num < m + 1; num++) {
		for (int j = 0; j < counter[num]; j++, i++) {
			nums[i] = num;
		}
	}
}

/* 计数排序 */
// 完整实现，可排序对象，并且是稳定排序
void countingSort(vector<int>& nums) {
	// 1. 统计数组最大元素 m
	int m = 0;
	for (int num : nums) {
		m = max(m, num);
	}
	// 2. 统计各数字的出现次数
	// counter[num] 代表 num 的出现次数
	vector<int> counter(m + 1, 0);
	for (int num : nums) {
		counter[num]++;
	}
	// 3. 求 counter 的前缀和，将“出现次数”转换为“尾索引”
	// 即 counter[num]-1 是 num 在 res 中最后一次出现的索引
	for (int i = 0; i < m; i++) {
		counter[i + 1] += counter[i];
	}
	// 4. 倒序遍历 nums ，将各元素填入结果数组 res
	// 初始化数组 res 用于记录结果
	int n = nums.size();
	vector<int> res(n);
	for (int i = n - 1; i >= 0; i--) {
		int num = nums[i];
		res[counter[num] - 1] = num; // 将 num 放置到对应索引处
		counter[num]--;              // 令前缀和自减 1 ，得到下次放置 num 的索引
	}
	// 使用结果数组 res 覆盖原数组 nums
	nums = res;
}

/* 获取元素 num 的第 k 位，其中 exp = 10^(k-1) */
int digit(int num, int exp) {
	// 传入 exp 而非 k 可以避免在此重复执行昂贵的次方计算
	return (num / exp) % 10;
}

/* 计数排序（根据 nums 第 k 位排序） */
void countingSortDigit(vector<int>& nums, int exp) {
	// 十进制的位范围为 0~9 ，因此需要长度为 10 的桶数组
	vector<int> counter(10, 0);
	int n = nums.size();
	// 统计 0~9 各数字的出现次数
	for (int i = 0; i < n; i++) {
		int d = digit(nums[i], exp); // 获取 nums[i] 第 k 位，记为 d
		counter[d]++;                // 统计数字 d 的出现次数
	}
	// 求前缀和，将“出现个数”转换为“数组索引”
	for (int i = 1; i < 10; i++) {
		counter[i] += counter[i - 1];
	}
	// 倒序遍历，根据桶内统计结果，将各元素填入 res
	vector<int> res(n, 0);
	for (int i = n - 1; i >= 0; i--) {
		int d = digit(nums[i], exp);
		int j = counter[d] - 1; // 获取 d 在数组中的索引 j
		res[j] = nums[i];       // 将当前元素填入索引 j
		counter[d]--;           // 将 d 的数量减 1
	}
	// 使用结果覆盖原数组 nums
	for (int i = 0; i < n; i++)
		nums[i] = res[i];
}

/* 基数排序 */
void radixSort(vector<int>& nums) {
	// 获取数组的最大元素，用于判断最大位数
	int m = *max_element(nums.begin(), nums.end());
	// 按照从低位到高位的顺序遍历
	for (int exp = 1; exp <= m; exp *= 10)
		// 对数组元素的第 k 位执行计数排序
		// k = 1 -> exp = 1
		// k = 2 -> exp = 10
		// 即 exp = 10^(k-1)
		countingSortDigit(nums, exp);
}
int main()
{
	return 0;
}