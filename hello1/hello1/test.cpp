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

// hello �㷨 �ڶ���
// ����

// for ѭ��
// ���1+2+3+4+...+n
int forLoop(int n)
{
	int res = 0;
	for (int i = 1; i <= n; ++i)
	{
		res += i;
	}

	return res;
}

// while ѭ��
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
	// ѭ����� 1�� 4�� 10��...
	while (i <= n)
	{
		res += i;
		i++;
		i *= 2;
	}
	return res;
}

// Ƕ��ѭ��
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

// �ݹ�
// ����1+2+3+....+n
int recur(int n)
{
	// ��ֹ����
	if (n == 1)
		return 1;
	// �ݣ��ݹ����
	int res = recur(n - 1);
	// �飺 ���ؽ��
	return n + res;
}

// β�ݹ�
int tailRecur(int n, int res)
{
	// ��ֹ����
	if (n == 0)
		return res;
	// β�ݹ����
	return tailRecur(n - 1, res + n);
}

// β�ݹ���쳲���������
unsigned int fibonacci(unsigned int n, unsigned int a = 0, unsigned int b = 1)
{
	if (n == 0)
		return a;
	else
		return fibonacci(n - 1, b, a + b);
}

// �ݹ��� - 쳲���������
int fib(int n)
{
	// ��ֹ����f(1) = 0 f(2) = 1
	if (n == 1 || n == 2)
		return n - 1;
	// �ݹ���� f(n) = f(n - 1) + f(n - 2)
	int res = fib(n - 1) + fib(n - 2);
	// ���ؽ��
	return res;
}

// ��ʽ��ջ��ģ�����ջ����Ϊ
int forLoopRecur(int n)
{
	// ��ʽ��ջ��ģ�����ջ����Ϊ
	stack<int> stack;
	int res = 0;
	// �ݣ��ݹ����
	for (int i = n; i > 0; i--)
	{
		// ��ջ����ģ�� ���ݡ�
		stack.push(i);
	}
	// �飺���ؽ��
	while (!stack.empty())
	{
		// ��ջ����ģ�� ���顱
		res += stack.top();
		stack.pop();
	}
	// res = 1+2+...+n
	return res;
}

// ��������

// ������ O(1)
int constant(int n)
{
	int count = 0;
	int size = 100000;
	for (int i = 0; i < size; i++)
		count++;
	return count;
}

// ���Խ� O(n)
int linear(int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		count++;
	return count;
}

// ���Խ� (��������)
int arrayTraversal(vector<int>& nums)
{
	int count = 0;
	// ѭ�����������鳤�ȳ�����
	for (int num : nums)
		count++;
	return count;
}

// ƽ����
int quadratic(int n)
{
	int count = 0;
	// ѭ�����������鳤�ȳ�����
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n ;j++)
			count++;
	}
	return count;
}

// ƽ����(ð������)
int bubbleSort(vector<int>& nums)
{
	int count = 0; // ������
	// ��ѭ���� δ��������Ϊ��[0, i]
	for (int i = nums.size() - 1; i > 0; i--)
	{
		// ��ѭ������δ��������� [0, i] �е����Ԫ�ؽ���������������Ҷ�
		for (int j = 0; j < i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				// ���� nums[j] nums[j+1]
				int tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
				count += 3;// Ԫ�ؽ������� 3 ����Ԫ����
			}
		}
	}
	return count;
}

// ָ���� O(2^n)
// ϸ������
int exponential(int n)
{
	int count = 0, base = 1;
	// ϸ��ÿ�ַ��� һ��Ϊ�� 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < base; j++)
			count++;
		base *= 2;
	}
	return count;
}

// �ݹ�
int excprecur(int n)
{
	if (n == 1)
		return 1;
	return excprecur(n - 1) + excprecur(n - 1) + 1;
}

// ������
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
// �ݹ�ʵ��
int logRecur(float n)
{
	if (n <= 1)
		return 0;
	return logRecur(n / 2) + 1;
}

// ���Զ�����
int linearLogRecur(float n)
{
	if (n <= 1)
		return 1;
	int count = linearLogRecur(n / 2) + linearLogRecur(n / 2);
	for (int i = 0; i < n; i++)
		count++;

	return count;
}

// �׳˽�
int factorialRecur(int n)
{
	if (n == 0)
		return 1;
	int count = 0;
	// �� 1 �����ѳ� n ��
	for (int i = 0; i < n; i++)
	{
		count += factorialRecur(n - 1);
	}
	return count;
}

// ����ѡ�ƽ��ʱ�临�Ӷ�
/*����һ�����飬Ԫ��Ϊ{1��2��3��...��n} ��˳�򱻴���*/
vector<int> randomnumbers(int n)
{
	vector<int> nums(n);
	// �������� nums = {1��2��....,n}
	for (int i = 0; i < n ; i++)
		nums[i] = i + 1;

	// ʹ��ϵͳʱ�������������
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	// �����������Ԫ��
	shuffle(nums.begin(), nums.end(), default_random_engine(seed));
	return nums;
}

/* �������� nums ������ 1 �������� */
int findOne(vector<int>& nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		// ��Ԫ�� 1 ������ͷ����ʱ�򣬴ﵽ��ѵ�ʱ�临�Ӷ� O(1)
		// ��Ԫ�� 1 ������β����ʱ�򣬴ﵽ����ʱ�临�Ӷ� O(n)
		if (nums[i] == 1)
			return i;
	}
	return -1;
}

// �ռ临�Ӷ�

// ���Խ�
// ������Ԫ��������n�����ȵ����顢����ջ������
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
	// ����Ϊ n ������ռ�� O(n) �ռ�
	vector<int> nums(n);
	// ����Ϊ n ���б�ռ�� O(n) �ռ�
	vector<ListNode> nodes;
	for (int i = 0; i < n; i++)
		nodes.push_back(ListNode(i));
	// ����Ϊ n �Ĺ�ϣ��ռ�� O(n)�ռ�
	unordered_map<int, string> map;
	for (int i = 0; i < n; i++)
		map[i] = to_string(i);

}

// �ݹ�ʵ��
void linearRecur(int n)
{
	cout << "�ݹ� n = " << n << endl;
	if (n == 1)
		return;
	linearRecur(n - 1);
}

// ƽ����
void quadraticI(int n)
{
	// ��ά�б�ռ�� O(n^2) �ռ�
	vector<vector<int>> numMatrix;
	for (int i = 0; i < n; i++)
	{
		vector<int> tmp;
		for (int j = 0; j < n; j++)
			tmp.push_back(0);
		numMatrix.push_back(tmp);
	}
}

// �ݹ�ʵ��
int	quadraticRecurI(int n)
{
	if (n <= 0)
		return 0;
	vector<int> nums(n);
	cout << "�ݹ� n = " << "�е� nums ���� = " << nums.size() << endl;
	return quadraticRecurI(n - 1);
}

// ָ���� O(2^n)
class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	// ���캯��
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