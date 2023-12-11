#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第七章 二叉树

#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

// 二叉树数组表示
// 使用 int 最大值 INT_MAX 标记空位
vector<int>tree1 = { 1,2,3,4,INT_MAX,6,7,8,9,INT_MAX,INT_MAX,12,INT_MAX,INT_MAX,15 };

// 数组表示下的二叉树类
class ArrayBinaryTree {
	public:
		// 构造方法
		vector<int>tree;
		ArrayBinaryTree(vector<int> arr)
		{
			tree = arr;
		}

		// 节点数量
		int size()
		{
			return tree.size();
		}

		// 获取索引为 i 节点的值
		int val(int i)
		{
			// 若索引越界，则返回 INT_MAX ，代表空位
			if (i < 0 || i >= size())
				return INT_MAX;
			return tree[i];
		}
		
		// 获取索引为 i 节点的左子节点的索引
		int left(int i)
		{
			return 2 * i + 1;
		}

		// 获取索引为 i 节点的右子节点的索引
		int right(int i)
		{
			return 2 * i + 2;
		}

		// 获取索引为 i 节点的父节点的索引
		int parent(int i)
		{
			return (i - 1) / 2;
		}

		// 层序遍历
		vector<int> levelOrder()
		{
			vector<int> res;
			// 直接遍历数组
			for (int i = 0; i < size(); i++)
				if (val(i) != INT_MAX)
					res.push_back(val(i));
			return res;
		}

		// 前序遍历
		vector<int>preOrder()
		{
			vector<int>res;
			dfs(0, "pre", res);
			return res;
		}
		// 中序遍历
		vector<int>inOrder()
		{
			vector<int>res;
			dfs(0, "in", res);
			return res;
		}
		// 后序遍历
		vector<int>postOrder()
		{
			vector<int>res;
			dfs(0, "post", res);
			return res;
		}

	private:
		vector<int>tree;

		// 深度优先遍历
		void dfs(int i, string order, vector<int>& res)
		{
			// 若为空位，则返回
			if (val(i) == INT_MAX)
				return;
			// 前序遍历
			if (order == "pre")
				res.push_back(val(i));
			dfs(left(i), order, res);
			// 中序遍历
			if (order == "in")
				res.push_back(val(i));
			dfs(right(i), order, res);
			// 后序遍历
			if (order == "post")
				res.push_back(val(i));
		}
};

// 二叉搜索树
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
/*
   满足以下条件
   1. 对于根节点，左子树所有节点值 < 根节点的值 < 右子树中所有节点的值
   2. 任意节点的左、右子树也是二叉搜索树
*/

// 二叉搜索树的操作

// 查找结点
TreeNode* search(TreeNode* root, int num)
{
	TreeNode* cur = root;
	// 循环查找，越过叶节点后跳出
	while (cur != nullptr)
	{
		// 目标节点出现在 cur 的右子树中
		if (cur->val < num)
			cur = cur->right;
		else if (cur->val > num)
			cur = cur->left;
		else
			break;
	}
	// 返回目标节点
	return cur;
}

// 插入节点
/*
   1. 查找插入位置
   2. 在该位置插入节点
*/
void insert(TreeNode* root, int num)
{
	if (root == nullptr)
	{
		root = new TreeNode(num);
		return;
	}
	TreeNode* cur = root, * pre = nullptr;
	// 循环查找，越过叶节点后跳出
	if (cur != nullptr)
	{
		// 找到重复节点，直接返回
		if (cur->val == num)
			return;
		pre = cur;
		// 插入位置在 cur 的右子树中
		if (cur->val < num)
			cur = cur->right;
		// 插入位置在 cur 的左子树中
		else
			cur = cur->left;
	}
	// 插入节点
	TreeNode* node = new TreeNode(num);
	if (pre->val < num)
		pre->right = node;
	else
		pre->left = node;
}
// 删除节点
void remove(TreeNode* root, int num)
{
	// 若树为空
	if (root == nullptr)
		return;
	TreeNode* cur = root, * pre = nullptr;
	// 循环查找 越过节点后退出
	while (cur != nullptr)
	{
		// 找到待删除节点之后，跳出循环
		if (cur->val == num)
			break;
		pre = cur;
		// 待删除节点在 cur 的右子树中
		if (cur->val < num)
			cur = cur->right;
		// 待删除节点在 cur 的左子树中
		else
			cur = cur->left;
		// 若无待删除节点，则直接返回
		if (cur == nullptr)
			return;
		// 子节点数量 = 0 or 1
		if (cur->left == nullptr || cur->right == nullptr)
		{
			// 当子节点数量 = 0 / 1 时候，child = nullptr / 该子节点
			TreeNode* child = cur->left != nullptr ? cur->left : cur->right;
			// 删除节点 cur
			if (cur != root)
			{
				if (pre->left == cur)
					pre->left = child;
				else
					pre->right = child;
			}
			else
			{
				// 若删除节点为根节点 则重新定义根节点
				root = child;
			}
			// 释放内存
			delete cur;
		}
		// 子节点数量为2
		else
		{
			// 获取中序遍历中 cur 的下一个节点
			TreeNode* tmp = cur->right;
			while (tmp->left != nullptr)
				tmp = tmp->left;
			int tmpVal = tmp->val;
			// 递归删除节点 tmp
			remove(root, tmp->val);
			// 用 tmp 覆盖 cur
			cur->val = tmpVal;
		}
	}
}

/*
   AVL树
   AVL树是二叉搜索树也是平衡二叉树
*/
struct AVLTreeNode {
	int val; // 节点值
	int height; // 节点高度
	AVLTreeNode* left{}; // 左子节点
	AVLTreeNode* right{};// 右子节点
	AVLTreeNode() = default;
	explicit AVLTreeNode(int x):val(x){} // explicit 修饰单参数构造函数
};

// 获取节点高度
int height(AVLTreeNode* node)
{
	// 空节点高度为 -1 叶节点高度为 0
	return node == nullptr ? -1 : node->height;
}

// 更新节点高度
void updateHeight(AVLTreeNode* node)
{
	// 节点高度等于最高子树高度 + 1
	node->height = max(height(node->left), height(node->right)) + 1;
}

// 获取平衡因子
int balanceFactor(AVLTreeNode* node)
{
	// 空节点平衡因子为 0
	if (node == nullptr)
		return 0;
	// 平衡因子 = 左子树高度 - 右子树高度
	return height(node->left) - height(node->right);
}

// AVL树旋转
// 右旋操作
AVLTreeNode* rightRotate(AVLTreeNode* node)
{
	AVLTreeNode* child = node->left;
	AVLTreeNode* grandChild = child->right;
	// 以 child 为原点， 将 node 向右旋转
	child->right = node;
	node->left = grandChild;
	// 更新节点高度
	updateHeight(node);
	updateHeight(child);
	// 返回旋转后子树根节点
	return child;
}

// 左旋
AVLTreeNode* leftRotate(AVLTreeNode* node)
{
	AVLTreeNode* child = node->right;
	AVLTreeNode* grandChild = child->left;
	// 以 child 为原点 将 node 向左旋转
	child->left = node;
	node->right = grandChild;
	// 更新节点高度
	updateHeight(node);
	updateHeight(child);
	// 返回旋转后子树根节点
	return child;
}
int main()
{

	return 0;
}