#define _CRT_SECURE_NO_WARNINGS 1

/*
#include<iostream>

using namespace std;

// ���������
struct TreeNode {
	char val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(char x):val(x), left(nullptr), right(nullptr){}
};

// ǰ�����
void preorderTraversal(TreeNode* root)
{
	if (root == nullptr)
		return;
	cout << root->val << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

// �������
void inorderTraversal(TreeNode* root)
{
	if (root == nullptr)
		return;
	inorderTraversal(root->left);
	cout << root->val << " ";
	inorderTraversal(root->right);
}

// �������
void postorderTraversal(TreeNode* root)
{
	if (root == nullptr)
		return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout << root->val << " ";
}

// �ڶ������������ڵ�
bool searchNode(TreeNode* root, char target)
{
	if (root == nullptr)
		return false;
	if (root->val == target)
		return true;

	return searchNode(root->left, target) || searchNode(root->right, target);
}

int main()
{
	// ����������
	TreeNode* root = new TreeNode('A');
	root->left = new TreeNode('B');
	root->right = new TreeNode('C');
	root->left->left = new TreeNode('D');
	root->left->right = new TreeNode('E');
	root->left->left->right = new TreeNode('F');
	root->left->right->left = new TreeNode('G');
	root->left->right->right = new TreeNode('H');

	// ǰ�����
	cout << "ǰ�����:> ";
	preorderTraversal(root);
	cout << endl;

	// �������
	cout << "�������:> ";
	inorderTraversal(root);
	cout << endl;

	// �������
	cout << "�������:> ";
	postorderTraversal(root);
	cout << endl;

	// �����ڵ�
	char target;
	while (true)
	{
		cout << "��������Ҫ����Ľڵ�:> " << endl;
		cin >> target;
		if (target >= 'A' && target <= 'G')
		{
			bool found = searchNode(root, target);
			cout << "�ڵ�: " << target << " �������Ƿ��ҵ�(true or false):" << (found ? "true" : "false") << endl;
		}
		else
		{
			cout << " ���������� " << endl;
		}
	}
	// �ͷ��ڴ�
	delete root->left->left->right;
	delete root->left->right->left;
	delete root->left->right->right;
	delete root->left->left;
	delete root->left->right;
	delete root->left;
	delete root->right;
	delete root;

	return 0;
}
*/


// ��������
#include<iostream>
#include<queue>
#include<unordered_map>
#include<string>

using namespace std;

// ���������ڵ㶨��
struct HuffmanNode {
	char character;
	int freq;
	HuffmanNode* left;
	HuffmanNode* right;

	HuffmanNode(char c, int freq):character(c),freq(freq),left(nullptr),right(nullptr){}
};

// �ȽϺ����������ȼ���������
struct Compare {
	bool operator()(HuffmanNode* a, HuffmanNode* b) {
		return a->freq > b->freq;
	}
};

// ���ɹ�������
HuffmanNode* buildHuffmanTree(const unordered_map<char, int>& freqs)
{
	priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare> pq;

	// ��ÿ���ַ���Ϊһ�������Ľڵ�������ȼ�����
	for (const auto& pair : freqs)
	{
		HuffmanNode* node = new HuffmanNode(pair.first, pair.second);
		pq.push(node);
	}

	// ������������
	while (pq.size() > 1)
	{
		HuffmanNode* left = pq.top();
		pq.pop();
		HuffmanNode* right = pq.top();
		pq.pop();

		// �����½ڵ���Ϊ���ҽڵ�ĸ��ڵ�
		HuffmanNode* parent = new HuffmanNode('\0', left->freq + right->freq);
		parent->left = left;
		parent->right = right;

		pq.push(parent);
	}

	// ���ع��������ĸ��ڵ�
	return pq.top();
}

// ���ɹ���������
void generateHuffmanCode(const HuffmanNode* root, string code, unordered_map<char, string>& huffmancodes)
{
	if (root == nullptr)
		return;
	
	// Ҷ�ӽڵ㣬������洢����ϣ����
	if (root->left == nullptr && root->right == nullptr)
		huffmancodes[root->character] = code;

	// �ݹ������������ı��� (���0)
	generateHuffmanCode(root->left, code + "0", huffmancodes);

	// �ݹ������������ı��� (���0)
	generateHuffmanCode(root->right, code + "1", huffmancodes);

}
int main()
{
	string input;
	cout << "�������������ַ���:> ";
	getline(cin, input);

	// ͳ���ַ�Ƶ��
	unordered_map<char, int> freqs;
	for (char c : input)
		freqs[c]++;

	// ������������
	HuffmanNode* root = buildHuffmanTree(freqs);

	// ���ɹ���������
	unordered_map<char, string>huffmancodes;
	generateHuffmanCode(root, "", huffmancodes);

	// �������������
	cout << "�ַ�\tƵ��\t����" << endl;
	for (const auto& pair : freqs)
	{
		char c = pair.first;
		int freq = pair.second;
		string code = huffmancodes[c];
		cout << c << "\t" << freq << "\t" << code << endl;
	}
	return 0;
}