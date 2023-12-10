#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第七章 树

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

// 二叉树 binary tree
// 二叉树节点结构体
struct TreeNode {
	int val; // 节点值
	TreeNode* left; // 左子节点指针
	TreeNode* right; // 右子节点指针
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

/*
   二叉树常见术语
「根节点 root node」：位于二叉树顶层的节点，没有父节点。
「叶节点 leaf node」：没有子节点的节点，其两个指针均指向。
「边 edge」：连接两个节点的线段，即节点引用（指针）。
 节点所在的「层 level」：从顶至底递增，根节点所在层为 1 。
 节点的「度 degree」：节点的子节点的数量。在二叉树中，度的取值范围是 0、1、2 。
 二叉树的「高度 height」：从根节点到最远叶节点所经过的边的数量。
 节点的「深度 depth」：从根节点到该节点所经过的边的数量。
 节点的「高度 height」：从距离该节点最远的叶节点到该节点所经过的边的数量。

 完美二叉树（满二叉树）
 完全二叉树
 完满二叉树
 平衡二叉树
*/

/*
 二叉树的退化 -> 链表

*/

// 二叉树的遍历
// 常见的遍历方式有：层序遍历、前序遍历、中序遍历、后序遍历

// 层序遍历 level-order traversal
// 从顶部到底部逐层遍历二叉树，并且在每一层按照从左到右的顺序访问节点
// 层序遍历本质上属于「广度优先遍历 breadth-first traversal, BFS」，它体现了一种“一圈一圈向外扩展”的逐层遍历方式。
// 广度优先搜索都是借助 队列 来实现的，队列遵循“先进先出”的规则，而广度优先遍历则遵循“逐层推进”的规则，两者背后的思想是一致的。

// 层序遍历 bfs
vector<int> levelOrder(TreeNode* root)
{
	// 初始化队列 加入根节点
	queue<TreeNode*>queue;
	queue.push(root);
	// 初始化一个列表，用于保存队列
	vector<int>vec;
	while (!queue.empty())
	{
		TreeNode* node = queue.front();
		queue.pop(); // 队列出队
		vec.push_back(node->val); // 保存节点值
		if (node->left != nullptr)
			queue.push(node->left); // 左子节点入队
		if (node->right != nullptr)
			queue.push(node->right); // 右子节点入队
	}
	return vec;
}

// 前、中、后序遍历 属于 深度优先遍历 depth-first traversal DFS 先走到尽头，再回溯继续”的遍历方式
// 前：根节点 -> 左子树 -> 右子树
// 中：左子树 -> 根节点 -> 右子树
// 后：左子树 -> 右子树 -> 根节点

vector<int>vec;

// 前序遍历
void preOrder(TreeNode* root)
{
	if (root == nullptr)
		return;
	// 访问优先级 根节点 -> 左子树 -> 右子树
	vec.push_back(root->val);
	preOrder(root->left);
	preOrder(root->right);
}

// 中序遍历
void inOrder(TreeNode* root)
{
	if (root == nullptr)
		return;
	// 访问优先级 左子树 -> 根节点 -> 右子树
	inOrder(root->left);
	vec.push_back(root->val);
	inOrder(root->right);
}

// 后序遍历
void postOrder(TreeNode* root)
{
	if (root == nullptr)
		return;
	// 访问优先级 左子树 -> 右子树 -> 根节点
	postOrder(root->left);
	postOrder(root->right);
	vec.push_back(root->val);
}





int main()
{
	// 二叉树的基本操作
	// 初始化二叉树
	TreeNode* n1 = new TreeNode(1);
	TreeNode* n2 = new TreeNode(2);
	TreeNode* n3 = new TreeNode(3);
	TreeNode* n4 = new TreeNode(4);
	TreeNode* n5 = new TreeNode(5);
	// 构建节点之间的引用(指针)
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	// 插入 与 删除 节点
	TreeNode* P = new TreeNode(0);
	// 在 n1 -> n2 中间插入节点 P
	n1->left = P;
	P->left = n2;
	// 删除节点 P
	n1->left = n2;
	// 需要注意的是，插入节点可能会改变二叉树的原有逻辑结构，
	// 而删除节点通常意味着删除该节点及其所有子树。因此，在二叉树中，插入与删除通常是由一套操作配合完成的，以实现有实际意义的操作。
	return 0;
}
