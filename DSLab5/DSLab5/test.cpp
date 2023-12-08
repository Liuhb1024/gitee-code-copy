#define _CRT_SECURE_NO_WARNINGS 1

/*
#include<iostream>

using namespace std;

// 定义二叉树
struct TreeNode {
	char val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(char x):val(x), left(nullptr), right(nullptr){}
};

// 前序遍历
void preorderTraversal(TreeNode* root)
{
	if (root == nullptr)
		return;
	cout << root->val << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

// 中序遍历
void inorderTraversal(TreeNode* root)
{
	if (root == nullptr)
		return;
	inorderTraversal(root->left);
	cout << root->val << " ";
	inorderTraversal(root->right);
}

// 后序遍历
void postorderTraversal(TreeNode* root)
{
	if (root == nullptr)
		return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout << root->val << " ";
}

// 在二叉树中搜索节点
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
	// 构建二叉树
	TreeNode* root = new TreeNode('A');
	root->left = new TreeNode('B');
	root->right = new TreeNode('C');
	root->left->left = new TreeNode('D');
	root->left->right = new TreeNode('E');
	root->left->left->right = new TreeNode('F');
	root->left->right->left = new TreeNode('G');
	root->left->right->right = new TreeNode('H');

	// 前序遍历
	cout << "前序遍历:> ";
	preorderTraversal(root);
	cout << endl;

	// 中序遍历
	cout << "中序遍历:> ";
	inorderTraversal(root);
	cout << endl;

	// 后序遍历
	cout << "后序遍历:> ";
	postorderTraversal(root);
	cout << endl;

	// 搜索节点
	char target;
	while (true)
	{
		cout << "请输入你要输入的节点:> " << endl;
		cin >> target;
		if (target >= 'A' && target <= 'G')
		{
			bool found = searchNode(root, target);
			cout << "节点: " << target << " 在树中是否找到(true or false):" << (found ? "true" : "false") << endl;
		}
		else
		{
			cout << " 请重新输入 " << endl;
		}
	}
	// 释放内存
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


// 哈夫曼树
#include<iostream>
#include<queue>
#include<unordered_map>
#include<string>

using namespace std;

// 哈夫曼树节点定义
struct HuffmanNode {
	char character;
	int freq;
	HuffmanNode* left;
	HuffmanNode* right;

	HuffmanNode(char c, int freq):character(c),freq(freq),left(nullptr),right(nullptr){}
};

// 比较函数用于优先级队列排序
struct Compare {
	bool operator()(HuffmanNode* a, HuffmanNode* b) {
		return a->freq > b->freq;
	}
};

// 生成哈夫曼树
HuffmanNode* buildHuffmanTree(const unordered_map<char, int>& freqs)
{
	priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare> pq;

	// 将每个字符作为一个单独的节点插入优先级队列
	for (const auto& pair : freqs)
	{
		HuffmanNode* node = new HuffmanNode(pair.first, pair.second);
		pq.push(node);
	}

	// 构建哈夫曼树
	while (pq.size() > 1)
	{
		HuffmanNode* left = pq.top();
		pq.pop();
		HuffmanNode* right = pq.top();
		pq.pop();

		// 创建新节点作为左右节点的父节点
		HuffmanNode* parent = new HuffmanNode('\0', left->freq + right->freq);
		parent->left = left;
		parent->right = right;

		pq.push(parent);
	}

	// 返回哈夫曼树的根节点
	return pq.top();
}

// 生成哈夫曼编码
void generateHuffmanCode(const HuffmanNode* root, string code, unordered_map<char, string>& huffmancodes)
{
	if (root == nullptr)
		return;
	
	// 叶子节点，将编码存储到哈希表中
	if (root->left == nullptr && root->right == nullptr)
		huffmancodes[root->character] = code;

	// 递归生成左子树的编码 (添加0)
	generateHuffmanCode(root->left, code + "0", huffmancodes);

	// 递归生成右子树的编码 (添加0)
	generateHuffmanCode(root->right, code + "1", huffmancodes);

}
int main()
{
	string input;
	cout << "请输入待编码的字符串:> ";
	getline(cin, input);

	// 统计字符频率
	unordered_map<char, int> freqs;
	for (char c : input)
		freqs[c]++;

	// 构建哈夫曼树
	HuffmanNode* root = buildHuffmanTree(freqs);

	// 生成哈夫曼编码
	unordered_map<char, string>huffmancodes;
	generateHuffmanCode(root, "", huffmancodes);

	// 输出哈夫曼编码
	cout << "字符\t频率\t编码" << endl;
	for (const auto& pair : freqs)
	{
		char c = pair.first;
		int freq = pair.second;
		string code = huffmancodes[c];
		cout << c << "\t" << freq << "\t" << code << endl;
	}
	return 0;
}