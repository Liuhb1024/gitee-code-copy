#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ������ ��

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

// ������ binary tree
// �������ڵ�ṹ��
struct TreeNode {
	int val; // �ڵ�ֵ
	TreeNode* left; // ���ӽڵ�ָ��
	TreeNode* right; // ���ӽڵ�ָ��
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

/*
   ��������������
�����ڵ� root node����λ�ڶ���������Ľڵ㣬û�и��ڵ㡣
��Ҷ�ڵ� leaf node����û���ӽڵ�Ľڵ㣬������ָ���ָ��
���� edge�������������ڵ���߶Σ����ڵ����ã�ָ�룩��
 �ڵ����ڵġ��� level�����Ӷ����׵��������ڵ����ڲ�Ϊ 1 ��
 �ڵ�ġ��� degree�����ڵ���ӽڵ���������ڶ������У��ȵ�ȡֵ��Χ�� 0��1��2 ��
 �������ġ��߶� height�����Ӹ��ڵ㵽��ԶҶ�ڵ��������ıߵ�������
 �ڵ�ġ���� depth�����Ӹ��ڵ㵽�ýڵ��������ıߵ�������
 �ڵ�ġ��߶� height�����Ӿ���ýڵ���Զ��Ҷ�ڵ㵽�ýڵ��������ıߵ�������

 ����������������������
 ��ȫ������
 ����������
 ƽ�������
*/

/*
 ���������˻� -> ����

*/

// �������ı���
// �����ı�����ʽ�У����������ǰ�����������������������

// ������� level-order traversal
// �Ӷ������ײ���������������������ÿһ�㰴�մ����ҵ�˳����ʽڵ�
// ����������������ڡ�������ȱ��� breadth-first traversal, BFS������������һ�֡�һȦһȦ������չ������������ʽ��
// ��������������ǽ��� ���� ��ʵ�ֵģ�������ѭ���Ƚ��ȳ����Ĺ��򣬶�������ȱ�������ѭ������ƽ����Ĺ������߱����˼����һ�µġ�

// ������� bfs
vector<int> levelOrder(TreeNode* root)
{
	// ��ʼ������ ������ڵ�
	queue<TreeNode*>queue;
	queue.push(root);
	// ��ʼ��һ���б����ڱ������
	vector<int>vec;
	while (!queue.empty())
	{
		TreeNode* node = queue.front();
		queue.pop(); // ���г���
		vec.push_back(node->val); // ����ڵ�ֵ
		if (node->left != nullptr)
			queue.push(node->left); // ���ӽڵ����
		if (node->right != nullptr)
			queue.push(node->right); // ���ӽڵ����
	}
	return vec;
}

// ǰ���С�������� ���� ������ȱ��� depth-first traversal DFS ���ߵ���ͷ���ٻ��ݼ������ı�����ʽ
// ǰ�����ڵ� -> ������ -> ������
// �У������� -> ���ڵ� -> ������
// �������� -> ������ -> ���ڵ�

vector<int>vec;

// ǰ�����
void preOrder(TreeNode* root)
{
	if (root == nullptr)
		return;
	// �������ȼ� ���ڵ� -> ������ -> ������
	vec.push_back(root->val);
	preOrder(root->left);
	preOrder(root->right);
}

// �������
void inOrder(TreeNode* root)
{
	if (root == nullptr)
		return;
	// �������ȼ� ������ -> ���ڵ� -> ������
	inOrder(root->left);
	vec.push_back(root->val);
	inOrder(root->right);
}

// �������
void postOrder(TreeNode* root)
{
	if (root == nullptr)
		return;
	// �������ȼ� ������ -> ������ -> ���ڵ�
	postOrder(root->left);
	postOrder(root->right);
	vec.push_back(root->val);
}





int main()
{
	// �������Ļ�������
	// ��ʼ��������
	TreeNode* n1 = new TreeNode(1);
	TreeNode* n2 = new TreeNode(2);
	TreeNode* n3 = new TreeNode(3);
	TreeNode* n4 = new TreeNode(4);
	TreeNode* n5 = new TreeNode(5);
	// �����ڵ�֮�������(ָ��)
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	// ���� �� ɾ�� �ڵ�
	TreeNode* P = new TreeNode(0);
	// �� n1 -> n2 �м����ڵ� P
	n1->left = P;
	P->left = n2;
	// ɾ���ڵ� P
	n1->left = n2;
	// ��Ҫע����ǣ�����ڵ���ܻ�ı��������ԭ���߼��ṹ��
	// ��ɾ���ڵ�ͨ����ζ��ɾ���ýڵ㼰��������������ˣ��ڶ������У�������ɾ��ͨ������һ�ײ��������ɵģ���ʵ����ʵ������Ĳ�����
	return 0;
}
