#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
#include<algorithm>
#include<map>
#include<queue>

using namespace std;

// hello �㷨 ������ 7.5 AVL��
/*
   AVL �����Ƕ���������Ҳ��ƽ���������ͬʱ�������������������������
   ���Ҳ����Ϊ��ƽ����������� balanced binary search tree��
*/

// AVL����������

// 1. �ڵ�߶�
struct TreeNode {
	int val{}; // �ڵ�ֵ
	int height = 0; // �ڵ�߶�
	TreeNode* left{}; // ���ӽڵ�
	TreeNode* right{}; // ���ӽڵ�
	TreeNode() = default;
	explicit TreeNode(int x):val(x){}
};
/*
   ���ڵ�߶ȡ� ��ָ�Ӹýڵ㵽����ԶҶ�ڵ�ľ��룬���������ġ��ߡ�����������Ҫ�ر�ע����ǣ�Ҷ�ڵ�ĸ߶�Ϊ
 �����սڵ�ĸ߶�Ϊ 0 ���ǽ������������ߺ������ֱ����ڻ�ȡ�͸��½ڵ�ĸ߶ȣ�
*/

// ��ȡ�ڵ�߶�
int height(TreeNode* node)
{
	// �սڵ�߶�Ϊ -1 Ҷ�ڵ�߶�Ϊ 0
	return node == nullptr ? -1 : node->height;
}

// ���½ڵ�߶�
void updateHeight(TreeNode* node)
{
	// �ڵ�߶ȵ�����������߶� + 1
	node->height = max(height(node->left), height(node->right)) + 1;
}

/*
    �ڵ�ƽ������
	�ڵ�ġ�ƽ������ balance factor������Ϊ�ڵ��������ĸ߶ȼ�ȥ�������ĸ߶�
	ͬʱ�涨�սڵ��ƽ������Ϊ 0 
	����ͬ������ȡ�ڵ�ƽ�����ӵĹ��ܷ�װ�ɺ������������ʹ��
*/

// ��ȡƽ������
int balanceFactor(TreeNode* node)
{
	// �սڵ�ƽ������Ϊ 0
	if (node == nullptr)
		return 0;
	// �ڵ�ƽ������ = �������߶� - �������߶�
	return height(node->left) - height(node->right);
}

// AVL ����ת
// AVL �����ص������ ��ת �������ܹ��ڲ�Ӱ�������������������е�ǰ���£�ʹʧ��ڵ����»ָ�ƽ�⡣
// ���仰˵����ת�������ܱ��֡������������������ʣ�Ҳ��ʹ�����±�Ϊ��ƽ�����������

// ����
TreeNode* rightRotate(TreeNode* node)
{
	TreeNode* child = node->left;
	TreeNode* grandChild = child->right;
	// �� child Ϊԭ�㣬 �� node ������ת
	child->right = node;
	node->left = grandChild;
	// ���½ڵ�߶�
	updateHeight(node);
	updateHeight(child);
	// ������ת��������ĸ��ڵ�
	return child;
}

// ����
TreeNode* leftRotate(TreeNode* node)
{
	TreeNode* child = node->right;
	TreeNode* grandChild = child->left;
	// �� child Ϊԭ�㣬 �� node ������ת
	child->left = node;
	node->right = grandChild;
	// ���½ڵ�߶�
	updateHeight(node);
	updateHeight(child);
	// ������ת�������ĸ��ڵ�
	return child;
}

// ������������
// ������������
// ����ת������װ��һ������������������������Ǿ��ܶԸ���ʧ�����������ת��ʹʧ��ڵ����»ָ�ƽ�⡣
// ִ����ת���� ʹ�ø������ָ�ƽ��
TreeNode* rotate(TreeNode* node)
{
	// ��ȡ�ڵ� node ��ƽ������
	int _balanceFactor = balanceFactor(node);
	// ��ƫ��
	if (_balanceFactor > 1)
	{
		if (balanceFactor(node->left) >= 0)
			// ����
			return rightRotate(node);
		else
		{
			// ������������
			node->left = leftRotate(node->left);
			return rightRotate(node);
		}
	}
	// ��ƫ��
	if (_balanceFactor < -1)
	{
		if (balanceFactor(node->right) <= 0)
			// ����
			return leftRotate(node);
		else
		{
			// ������������
			node->right = rightRotate(node->right);
			return leftRotate(node);
		}
	}
	// ƽ���� ������ת ֱ�ӷ���
	return node;
}

// ����ڵ�
void insert(TreeNode*root, int val)
{
	root = insertHelper(root, val);
}

// �ݹ����ڵ�
TreeNode* insertHelper(TreeNode* node, int val)
{
	if (node == nullptr)
		return new TreeNode(val);
	// 1. ���Ҳ���λ�ã�����ڵ�
	if (val < node->val)
		node->left = insertHelper(node->left, val);
	else if (val > node->val)
		node->right = insertHelper(node->right, val);
	else
		return node; // �ظ��ڵ㲻���� ֱ�ӷ���
	updateHeight(node); // ���½ڵ�߶�
	// 2. ִ����ת������ʹ��ָ�ƽ��
	node = rotate(node);
	// ���������ĸ��ڵ�
	return node;
}

// ɾ���ڵ�
void remove(TreeNode* root, int val)
{
	root = removeHelper(root, val);
}

TreeNode* removeHelper(TreeNode* node, int val)
{
	if (node == nullptr)
		return nullptr;
	// 1. ���ҽڵ� ɾ��
	if (val < node->val)
		node->left = removeHelper(node->left, val);
	else if (val > node->val)
		node->right = removeHelper(node->right, val);
	else
	{
		if (node->left == nullptr || node->right == nullptr)
		{
			TreeNode* child = node->left != nullptr ? node->left : node->right;
			// �ӽڵ����� = 0��ֱ��ɾ�� node ������
			if (child == nullptr)
			{
				delete node;
				return nullptr;
			}
			// �ӽڵ����� = 1 ֱ��ɾ�� node
			else
			{
				delete node;
				node = child;
			}
		}
		else
		{
			// �ӽڵ����� = 2��������������¸��ڵ�ɾ���������øýڵ��滻��ǰ�ڵ�
			TreeNode* temp = node->right;
			while (temp->left != nullptr)
				temp = temp->left;
			int tempVal = temp->val;
			node->right = removeHelper(node->right, temp->val);
			node->val = tempVal;
		}
	}
	updateHeight(node); // ���½ڵ�߶�
	// 2. ִ����ת�������ָ�ƽ��
	node = rotate(node);
	// ���������ĸ��ڵ�
	return node;
}
int main()
{
	return 0;
}
