#define _CRT_SECURE_NO_WARNINGS 1
// hello �㷨 ������ ջ�Ͷ���
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

// ջ�ĳ��ò���
void Stack()
{
	// ��ʼ��ջ
	stack<int> stack;

	// Ԫ����ջ
	stack.push(1);
	stack.push(3);
	stack.push(2);
	stack.push(5);
	stack.push(6);
	stack.push(4);

	// ����ջ��Ԫ��
	int top = stack.top();

	// Ԫ�س�ջ
	stack.pop(); // �޷���ֵ

	// ��ȡջ�ĳ���
	int size = stack.size();

	// �ж��Ƿ�Ϊ��
	bool empty = stack.empty();

}

// ջ��ʵ��
// 1. ���������ʵ��
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
		ListNode* stackTop; // ��ͷ�ڵ���Ϊջ��
		int stackSize; // ջ�ĳ���


	public:
		LinkedListStack() {
			stackTop = nullptr;
			stackSize = 0;
		}


		~LinkedListStack() {
			// ��������ɾ���ڵ㣬�ͷ��ڴ�
			freeMemoryLinkedList(stackTop);
		}

		void freeMemoryLinkedList(ListNode* node) {
			if (node == nullptr) {
				return;
			}

			freeMemoryLinkedList(node->next);
			delete node;
		}

		// ��ȡջ�ĳ���
		int size()
		{
			return stackSize;
		}

		// �ж�ջ�Ƿ�Ϊ��
		bool isEmpty()
		{
			return size() == 0;
		}

		// ��ջ
		void push(int num)
		{
			ListNode* node = new ListNode(num);
			node->next = stackTop;
			stackTop = node;
			stackSize++;
		}

		// ��ջ
		void pop()
		{
			int num = top();
			ListNode* tmp = stackTop;
			stackTop = stackTop->next;
			// �ͷ��ڴ�
			delete tmp;
			stackSize--;

		}

		// ����ջ��Ԫ��
		int top()
		{
			if (isEmpty())
				throw out_of_range("ջΪ��");
			return stackTop->value;
		}

		// �� List ת��Ϊ Array ������
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

// 2. ��������ʵ��ջ
class ArrayStack {
	private:
		vector<int> stack;
		
	public:
		// ��ȡջ�ĳ���
		int size()
		{
			return stack.size();
		}

		// �ж��Ƿ�Ϊ��
		bool isEmpty()
		{
			return stack.size() == 0;
		}

		// ��ջ
		void push(int num)
		{
			stack.push_back(num);
		}

		// ��ջ
		void pop()
		{
			int oldTop = top();
			stack.pop_back();
		}

		// ����ջ��Ԫ��
		int top()
		{
			if (isEmpty())
				throw out_of_range("ջΪ��");
			return stack.back();
		}

		// ���� Vector
		vector<int> toVector()
		{
			return stack;
		}
};

int main()
{

	return 0;
}