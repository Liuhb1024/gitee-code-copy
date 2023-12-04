#define _CRT_SECURE_NO_WARNINGS 1
// hello 算法 第五章 栈和队列
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

// 栈的常用操作
void Stack()
{
	// 初始化栈
	stack<int> stack;

	// 元素入栈
	stack.push(1);
	stack.push(3);
	stack.push(2);
	stack.push(5);
	stack.push(6);
	stack.push(4);

	// 访问栈顶元素
	int top = stack.top();

	// 元素出栈
	stack.pop(); // 无返回值

	// 获取栈的长度
	int size = stack.size();

	// 判断是否为空
	bool empty = stack.empty();

}

// 栈的实现
// 1. 基于链表的实现
class ListNode {
	public:
		int value;
		ListNode* next;

		ListNode(int val) {
			value = val;
			next = nullptr;
		}
};

class LinkedListStack {
	private:
		ListNode* stackTop; // 将头节点作为栈顶
		int stackSize; // 栈的长度


	public:
		LinkedListStack() {
			stackTop = nullptr;
			stackSize = 0;
		}


		~LinkedListStack() {
			// 遍历链表删除节点，释放内存
			freeMemoryLinkedList(stackTop);
		}

		void freeMemoryLinkedList(ListNode* node) {
			if (node == nullptr) {
				return;
			}

			freeMemoryLinkedList(node->next);
			delete node;
		}

		// 获取栈的长度
		int size()
		{
			return stackSize;
		}

		// 判断栈是否为空
		bool isEmpty()
		{
			return size() == 0;
		}

		// 入栈
		void push(int num)
		{
			ListNode* node = new ListNode(num);
			node->next = stackTop;
			stackTop = node;
			stackSize++;
		}

		// 出栈
		void pop()
		{
			int num = top();
			ListNode* tmp = stackTop;
			stackTop = stackTop->next;
			// 释放内存
			delete tmp;
			stackSize--;

		}

		// 访问栈顶元素
		int top()
		{
			if (isEmpty())
				throw out_of_range("栈为空");
			return stackTop->value;
		}

		// 将 List 转化为 Array 并返回
		vector<int> toVector()
		{
			ListNode* node = stackTop;
			vector<int> res(size());
			for (int i = res.size() - 1; i >= 0; i--)
			{
				res[i] = node->value;
				node = node->next;
			}
			return res;
		}

};

// 2. 基于数组实现栈
class ArrayStack {
	private:
		vector<int> stack;
		
	public:
		// 获取栈的长度
		int size()
		{
			return stack.size();
		}

		// 判断是否为空
		bool isEmpty()
		{
			return stack.size() == 0;
		}

		// 入栈
		void push(int num)
		{
			stack.push_back(num);
		}

		// 出栈
		void pop()
		{
			int oldTop = top();
			stack.pop_back();
		}

		// 访问栈顶元素
		int top()
		{
			if (isEmpty())
				throw out_of_range("栈为空");
			return stack.back();
		}

		// 返回 Vector
		vector<int> toVector()
		{
			return stack;
		}
};

int main()
{

	return 0;
}