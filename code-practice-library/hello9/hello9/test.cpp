#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ������ ������

#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

// �����������ʾ
// ʹ�� int ���ֵ INT_MAX ��ǿ�λ
vector<int>tree1 = { 1,2,3,4,INT_MAX,6,7,8,9,INT_MAX,INT_MAX,12,INT_MAX,INT_MAX,15 };

// �����ʾ�µĶ�������
class ArrayBinaryTree {
	public:
		// ���췽��
		vector<int>tree;
		ArrayBinaryTree(vector<int> arr)
		{
			tree = arr;
		}

		// �ڵ�����
		int size()
		{
			return tree.size();
		}

		// ��ȡ����Ϊ i �ڵ��ֵ
		int val(int i)
		{
			// ������Խ�磬�򷵻� INT_MAX �������λ
			if (i < 0 || i >= size())
				return INT_MAX;
			return tree[i];
		}
		
		// ��ȡ����Ϊ i �ڵ�����ӽڵ������
		int left(int i)
		{
			return 2 * i + 1;
		}

		// ��ȡ����Ϊ i �ڵ�����ӽڵ������
		int right(int i)
		{
			return 2 * i + 2;
		}

		// ��ȡ����Ϊ i �ڵ�ĸ��ڵ������
		int parent(int i)
		{
			return (i - 1) / 2;
		}

		// �������
		vector<int> levelOrder()
		{
			vector<int> res;
			// ֱ�ӱ�������
			for (int i = 0; i < size(); i++)
				if (val(i) != INT_MAX)
					res.push_back(val(i));
			return res;
		}

		// ǰ�����
		vector<int>preOrder()
		{
			vector<int>res;
			dfs(0, "pre", res);
			return res;
		}
		// �������
		vector<int>inOrder()
		{
			vector<int>res;
			dfs(0, "in", res);
			return res;
		}
		// �������
		vector<int>postOrder()
		{
			vector<int>res;
			dfs(0, "post", res);
			return res;
		}

	private:
		vector<int>tree;

		// ������ȱ���
		void dfs(int i, string order, vector<int>& res)
		{
			// ��Ϊ��λ���򷵻�
			if (val(i) == INT_MAX)
				return;
			// ǰ�����
			if (order == "pre")
				res.push_back(val(i));
			dfs(left(i), order, res);
			// �������
			if (order == "in")
				res.push_back(val(i));
			dfs(right(i), order, res);
			// �������
			if (order == "post")
				res.push_back(val(i));
		}
};

// ����������
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
/*
   ������������
   1. ���ڸ��ڵ㣬���������нڵ�ֵ < ���ڵ��ֵ < �����������нڵ��ֵ
   2. ����ڵ����������Ҳ�Ƕ���������
*/

// �����������Ĳ���

// ���ҽ��
TreeNode* search(TreeNode* root, int num)
{
	TreeNode* cur = root;
	// ѭ�����ң�Խ��Ҷ�ڵ������
	while (cur != nullptr)
	{
		// Ŀ��ڵ������ cur ����������
		if (cur->val < num)
			cur = cur->right;
		else if (cur->val > num)
			cur = cur->left;
		else
			break;
	}
	// ����Ŀ��ڵ�
	return cur;
}

// ����ڵ�
/*
   1. ���Ҳ���λ��
   2. �ڸ�λ�ò���ڵ�
*/
void insert(TreeNode* root, int num)
{
	if (root == nullptr)
	{
		root = new TreeNode(num);
		return;
	}
	TreeNode* cur = root, * pre = nullptr;
	// ѭ�����ң�Խ��Ҷ�ڵ������
	if (cur != nullptr)
	{
		// �ҵ��ظ��ڵ㣬ֱ�ӷ���
		if (cur->val == num)
			return;
		pre = cur;
		// ����λ���� cur ����������
		if (cur->val < num)
			cur = cur->right;
		// ����λ���� cur ����������
		else
			cur = cur->left;
	}
	// ����ڵ�
	TreeNode* node = new TreeNode(num);
	if (pre->val < num)
		pre->right = node;
	else
		pre->left = node;
}
// ɾ���ڵ�
void remove(TreeNode* root, int num)
{
	// ����Ϊ��
	if (root == nullptr)
		return;
	TreeNode* cur = root, * pre = nullptr;
	// ѭ������ Խ���ڵ���˳�
	while (cur != nullptr)
	{
		// �ҵ���ɾ���ڵ�֮������ѭ��
		if (cur->val == num)
			break;
		pre = cur;
		// ��ɾ���ڵ��� cur ����������
		if (cur->val < num)
			cur = cur->right;
		// ��ɾ���ڵ��� cur ����������
		else
			cur = cur->left;
		// ���޴�ɾ���ڵ㣬��ֱ�ӷ���
		if (cur == nullptr)
			return;
		// �ӽڵ����� = 0 or 1
		if (cur->left == nullptr || cur->right == nullptr)
		{
			// ���ӽڵ����� = 0 / 1 ʱ��child = nullptr / ���ӽڵ�
			TreeNode* child = cur->left != nullptr ? cur->left : cur->right;
			// ɾ���ڵ� cur
			if (cur != root)
			{
				if (pre->left == cur)
					pre->left = child;
				else
					pre->right = child;
			}
			else
			{
				// ��ɾ���ڵ�Ϊ���ڵ� �����¶�����ڵ�
				root = child;
			}
			// �ͷ��ڴ�
			delete cur;
		}
		// �ӽڵ�����Ϊ2
		else
		{
			// ��ȡ��������� cur ����һ���ڵ�
			TreeNode* tmp = cur->right;
			while (tmp->left != nullptr)
				tmp = tmp->left;
			int tmpVal = tmp->val;
			// �ݹ�ɾ���ڵ� tmp
			remove(root, tmp->val);
			// �� tmp ���� cur
			cur->val = tmpVal;
		}
	}
}

/*
   AVL��
   AVL���Ƕ���������Ҳ��ƽ�������
*/
struct AVLTreeNode {
	int val; // �ڵ�ֵ
	int height; // �ڵ�߶�
	AVLTreeNode* left{}; // ���ӽڵ�
	AVLTreeNode* right{};// ���ӽڵ�
	AVLTreeNode() = default;
	explicit AVLTreeNode(int x):val(x){} // explicit ���ε��������캯��
};

// ��ȡ�ڵ�߶�
int height(AVLTreeNode* node)
{
	// �սڵ�߶�Ϊ -1 Ҷ�ڵ�߶�Ϊ 0
	return node == nullptr ? -1 : node->height;
}

// ���½ڵ�߶�
void updateHeight(AVLTreeNode* node)
{
	// �ڵ�߶ȵ�����������߶� + 1
	node->height = max(height(node->left), height(node->right)) + 1;
}

// ��ȡƽ������
int balanceFactor(AVLTreeNode* node)
{
	// �սڵ�ƽ������Ϊ 0
	if (node == nullptr)
		return 0;
	// ƽ������ = �������߶� - �������߶�
	return height(node->left) - height(node->right);
}

// AVL����ת
// ��������
AVLTreeNode* rightRotate(AVLTreeNode* node)
{
	AVLTreeNode* child = node->left;
	AVLTreeNode* grandChild = child->right;
	// �� child Ϊԭ�㣬 �� node ������ת
	child->right = node;
	node->left = grandChild;
	// ���½ڵ�߶�
	updateHeight(node);
	updateHeight(child);
	// ������ת���������ڵ�
	return child;
}

// ����
AVLTreeNode* leftRotate(AVLTreeNode* node)
{
	AVLTreeNode* child = node->right;
	AVLTreeNode* grandChild = child->left;
	// �� child Ϊԭ�� �� node ������ת
	child->left = node;
	node->right = grandChild;
	// ���½ڵ�߶�
	updateHeight(node);
	updateHeight(child);
	// ������ת���������ڵ�
	return child;
}
int main()
{

	return 0;
}