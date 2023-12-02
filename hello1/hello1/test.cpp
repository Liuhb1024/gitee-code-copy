#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include <string>
#include<sstream>
#include<stack>
#include <random>
#include<chrono>
#include <unordered_map>

using namespace std;

// hello 算法 第二章
// 迭代

// for 循环
// 求和1+2+3+4+...+n
int forLoop(int n)
{
	int res = 0;
	for (int i = 1; i <= n; ++i)
	{
		res += i;
	}

	return res;
}

// while 循环
int whileLoop(int n)
{
	int res = 0;
	int i = 1;
	while (i <= n)
	{
		res += i;
		i++;
	}
	return res;
}

int whileLoopII(int n)
{
	int res = 0;
	int i = 1;
	// 循环求和 1， 4， 10，...
	while (i <= n)
	{
		res += i;
		i++;
		i *= 2;
	}
	return res;
}

// 嵌套循环
string nestedForLoop(int n)
{
	ostringstream res;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			res << "(" << i << ", " << j << "),";
		}
	}
	return res.str();
}

// 递归
// 计算1+2+3+....+n
int recur(int n)
{
	// 终止条件
	if (n == 1)
		return 1;
	// 递：递归调用
	int res = recur(n - 1);
	// 归： 返回结果
	return n + res;
}

// 尾递归
int tailRecur(int n, int res)
{
	// 终止条件
	if (n == 0)
		return res;
	// 尾递归调用
	return tailRecur(n - 1, res + n);
}

// 尾递归解决斐波那契数列
unsigned int fibonacci(unsigned int n, unsigned int a = 0, unsigned int b = 1)
{
	if (n == 0)
		return a;
	else
		return fibonacci(n - 1, b, a + b);
}

// 递归树 - 斐波那契数列
int fib(int n)
{
	// 终止条件f(1) = 0 f(2) = 1
	if (n == 1 || n == 2)
		return n - 1;
	// 递归调用 f(n) = f(n - 1) + f(n - 2)
	int res = fib(n - 1) + fib(n - 2);
	// 返回结果
	return res;
}

// 显式的栈来模拟调用栈的行为
int forLoopRecur(int n)
{
	// 显式的栈来模拟调用栈的行为
	stack<int> stack;
	int res = 0;
	// 递：递归调用
	for (int i = n; i > 0; i--)
	{
		// 入栈操作模拟 “递”
		stack.push(i);
	}
	// 归：返回结果
	while (!stack.empty())
	{
		// 出栈操作模拟 “归”
		res += stack.top();
		stack.pop();
	}
	// res = 1+2+...+n
	return res;
}

// 常见类型

// 常数阶 O(1)
int constant(int n)
{
	int count = 0;
	int size = 100000;
	for (int i = 0; i < size; i++)
		count++;
	return count;
}

// 线性阶 O(n)
int linear(int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		count++;
	return count;
}

// 线性阶 (遍历数组)
int arrayTraversal(vector<int>& nums)
{
	int count = 0;
	// 循环次数和数组长度成正比
	for (int num : nums)
		count++;
	return count;
}

// 平方阶
int quadratic(int n)
{
	int count = 0;
	// 循环次数和数组长度成正比
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n ;j++)
			count++;
	}
	return count;
}

// 平方阶(冒泡排序)
int bubbleSort(vector<int>& nums)
{
	int count = 0; // 计数器
	// 外循环： 未排序区间为：[0, i]
	for (int i = nums.size() - 1; i > 0; i--)
	{
		// 内循环：将未排序的区间 [0, i] 中的最大元素交换至该区间的最右端
		for (int j = 0; j < i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				// 交换 nums[j] nums[j+1]
				int tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
				count += 3;// 元素交换包含 3 个单元操作
			}
		}
	}
	return count;
}

// 指数阶 O(2^n)
// 细胞分裂
int exponential(int n)
{
	int count = 0, base = 1;
	// 细胞每轮分裂 一分为二 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < base; j++)
			count++;
		base *= 2;
	}
	return count;
}

// 递归
int excprecur(int n)
{
	if (n == 1)
		return 1;
	return excprecur(n - 1) + excprecur(n - 1) + 1;
}

// 对数阶
int logarithmic(float n)
{
	int count = 0;
	while (n > 1)
	{
		n = n / 2;
		count++;
	}
	return count;
}
// 递归实现
int logRecur(float n)
{
	if (n <= 1)
		return 0;
	return logRecur(n / 2) + 1;
}

// 线性对数阶
int linearLogRecur(float n)
{
	if (n <= 1)
		return 1;
	int count = linearLogRecur(n / 2) + linearLogRecur(n / 2);
	for (int i = 0; i < n; i++)
		count++;

	return count;
}

// 阶乘阶
int factorialRecur(int n)
{
	if (n == 0)
		return 1;
	int count = 0;
	// 从 1 个分裂出 n 个
	for (int i = 0; i < n; i++)
	{
		count += factorialRecur(n - 1);
	}
	return count;
}

// 最差、最佳、平均时间复杂度
/*生成一个数组，元素为{1，2，3，...，n} ，顺序被打乱*/
vector<int> randomnumbers(int n)
{
	vector<int> nums(n);
	// 生成数组 nums = {1，2，....,n}
	for (int i = 0; i < n ; i++)
		nums[i] = i + 1;

	// 使用系统时间生成随机种子
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	// 随机打乱数组元素
	shuffle(nums.begin(), nums.end(), default_random_engine(seed));
	return nums;
}

/* 查找数组 nums 中数字 1 所在索引 */
int findOne(vector<int>& nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		// 当元素 1 在数组头部的时候，达到最佳的时间复杂度 O(1)
		// 当元素 1 在数组尾部的时候，达到最差的时间复杂度 O(n)
		if (nums[i] == 1)
			return i;
	}
	return -1;
}

// 空间复杂度

// 线性阶
// 常见于元素数量与n成正比的数组、链表、栈、队列
class ListNode {
public:
	int val;
	ListNode* next;

	ListNode(int val) {
		val = val;
		next = NULL;
	}
};

void linearI(int n)
{
	// 长度为 n 的数组占用 O(n) 空间
	vector<int> nums(n);
	// 长度为 n 的列表占用 O(n) 空间
	vector<ListNode> nodes;
	for (int i = 0; i < n; i++)
		nodes.push_back(ListNode(i));
	// 长度为 n 的哈希表占用 O(n)空间
	unordered_map<int, string> map;
	for (int i = 0; i < n; i++)
		map[i] = to_string(i);

}

// 递归实现
void linearRecur(int n)
{
	cout << "递归 n = " << n << endl;
	if (n == 1)
		return;
	linearRecur(n - 1);
}

// 平方阶
void quadraticI(int n)
{
	// 二维列表占用 O(n^2) 空间
	vector<vector<int>> numMatrix;
	for (int i = 0; i < n; i++)
	{
		vector<int> tmp;
		for (int j = 0; j < n; j++)
			tmp.push_back(0);
		numMatrix.push_back(tmp);
	}
}

// 递归实现
int	quadraticRecurI(int n)
{
	if (n <= 0)
		return 0;
	vector<int> nums(n);
	cout << "递归 n = " << "中的 nums 长度 = " << nums.size() << endl;
	return quadraticRecurI(n - 1);
}

// 指数阶 O(2^n)
class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	// 构造函数
	TreeNode(int value)
	{
		val = value;
		left = nullptr;
		right = nullptr;
	}
};
TreeNode* bulidTree(int n)
{
	if (n == 0)
		return nullptr;
	TreeNode* root = new TreeNode(0);
	root->left = bulidTree(n - 1);
	root->right = bulidTree(n - 1);

	return root;
}

int main()
{
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;
	return 0;
}