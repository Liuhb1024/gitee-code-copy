#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
#include<algorithm>
#include<map>
#include<queue>

using namespace std;

// hello 算法 第七章 7.5 AVL树
/*
   AVL 树既是二叉搜索树也是平衡二叉树，同时满足这两类二叉树的所有性质
   因此也被称为「平衡二叉搜索树 balanced binary search tree」
*/

// AVL树常见术语

// 1. 节点高度
struct TreeNode {
	int val{}; // 节点值
	int height = 0; // 节点高度
	TreeNode* left{}; // 左子节点
	TreeNode* right{}; // 右子节点
	TreeNode() = default;
	explicit TreeNode(int x):val(x){}
};
/*
   “节点高度” 是指从该节点到其最远叶节点的距离，即所经过的“边”的数量。需要特别注意的是，叶节点的高度为
 ，而空节点的高度为 0 我们将创建两个工具函数，分别用于获取和更新节点的高度：
*/

// 获取节点高度
int height(TreeNode* node)
{
	// 空节点高度为 -1 叶节点高度为 0
	return node == nullptr ? -1 : node->height;
}

// 更新节点高度
void updateHeight(TreeNode* node)
{
	// 节点高度等于最高子树高度 + 1
	node->height = max(height(node->left), height(node->right)) + 1;
}

/*
    节点平衡因子
	节点的「平衡因子 balance factor」定义为节点左子树的高度减去右子树的高度
	同时规定空节点的平衡因子为 0 
	我们同样将获取节点平衡因子的功能封装成函数，方便后续使用
*/

// 获取平衡因子
int balanceFactor(TreeNode* node)
{
	// 空节点平衡因子为 0
	if (node == nullptr)
		return 0;
	// 节点平衡因子 = 左子树高度 - 右子树高度
	return height(node->left) - height(node->right);
}

// AVL 树旋转
// AVL 树的特点就在于 旋转 操作它能够在不影响二叉树的中序遍历序列的前提下，使失衡节点重新恢复平衡。
// 换句话说，旋转操作既能保持“二叉搜索树”的性质，也能使树重新变为“平衡二叉树”。

// 右旋
TreeNode* rightRotate(TreeNode* node)
{
	TreeNode* child = node->left;
	TreeNode* grandChild = child->right;
	// 以 child 为原点， 将 node 向右旋转
	child->right = node;
	node->left = grandChild;
	// 更新节点高度
	updateHeight(node);
	updateHeight(child);
	// 返回旋转后的子树的根节点
	return child;
}

// 左旋
TreeNode* leftRotate(TreeNode* node)
{
	TreeNode* child = node->right;
	TreeNode* grandChild = child->left;
	// 以 child 为原点， 将 node 向左旋转
	child->left = node;
	node->right = grandChild;
	// 更新节点高度
	updateHeight(node);
	updateHeight(child);
	// 返回旋转后子树的根节点
	return child;
}

// 先左旋后右旋
// 先右旋后左旋
// 将旋转操作封装成一个函数。有了这个函数，我们就能对各种失衡情况进行旋转，使失衡节点重新恢复平衡。
// 执行旋转操作 使得该子树恢复平衡
TreeNode* rotate(TreeNode* node)
{
	// 获取节点 node 的平衡因子
	int _balanceFactor = balanceFactor(node);
	// 左偏树
	if (_balanceFactor > 1)
	{
		if (balanceFactor(node->left) >= 0)
			// 右旋
			return rightRotate(node);
		else
		{
			// 先左旋后右旋
			node->left = leftRotate(node->left);
			return rightRotate(node);
		}
	}
	// 右偏树
	if (_balanceFactor < -1)
	{
		if (balanceFactor(node->right) <= 0)
			// 左旋
			return leftRotate(node);
		else
		{
			// 先右旋后左旋
			node->right = rightRotate(node->right);
			return leftRotate(node);
		}
	}
	// 平衡树 无需旋转 直接返回
	return node;
}

// 插入节点
void insert(TreeNode*root, int val)
{
	root = insertHelper(root, val);
}

// 递归插入节点
TreeNode* insertHelper(TreeNode* node, int val)
{
	if (node == nullptr)
		return new TreeNode(val);
	// 1. 查找插入位置，插入节点
	if (val < node->val)
		node->left = insertHelper(node->left, val);
	else if (val > node->val)
		node->right = insertHelper(node->right, val);
	else
		return node; // 重复节点不插入 直接返回
	updateHeight(node); // 更新节点高度
	// 2. 执行旋转操作，使其恢复平衡
	node = rotate(node);
	// 返回子树的根节点
	return node;
}

// 删除节点
void remove(TreeNode* root, int val)
{
	root = removeHelper(root, val);
}

TreeNode* removeHelper(TreeNode* node, int val)
{
	if (node == nullptr)
		return nullptr;
	// 1. 查找节点 删除
	if (val < node->val)
		node->left = removeHelper(node->left, val);
	else if (val > node->val)
		node->right = removeHelper(node->right, val);
	else
	{
		if (node->left == nullptr || node->right == nullptr)
		{
			TreeNode* child = node->left != nullptr ? node->left : node->right;
			// 子节点数量 = 0，直接删除 node 并返回
			if (child == nullptr)
			{
				delete node;
				return nullptr;
			}
			// 子节点数量 = 1 直接删除 node
			else
			{
				delete node;
				node = child;
			}
		}
		else
		{
			// 子节点数量 = 2，则将中序遍历的下个节点删除，并且用该节点替换当前节点
			TreeNode* temp = node->right;
			while (temp->left != nullptr)
				temp = temp->left;
			int tempVal = temp->val;
			node->right = removeHelper(node->right, temp->val);
			node->val = tempVal;
		}
	}
	updateHeight(node); // 更新节点高度
	// 2. 执行旋转操作，恢复平衡
	node = rotate(node);
	// 返回子树的根节点
	return node;
}
int main()
{
	return 0;
}
