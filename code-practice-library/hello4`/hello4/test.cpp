#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ������ 5.2 ����

/*
 ���У������ȳ�
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <queue>

using namespace std;

// ���г�������
/*
   ��ӣ�push
   ���ӣ�pop
   ����Ԫ�أ�peek
*/

void testQueue()
{
	// ��ʶ������
	queue<int> queue;

	// Ԫ�����
	queue.push(1);
	queue.push(3);
	queue.push(2);
	queue.push(5);
	queue.push(4);

	// ���ʶ���Ԫ��
	int front = queue.front();

	// ����
	queue.pop();

	// ��ȡ����
	int size = queue.size();

	// �п�
	bool empty = queue.empty();
}

// ����ʵ��
// 1. ��������ʵ��
// �� ͷ�ڵ� β�ڵ� �ֱ���Ϊ ���� ��β ��ͬʱ�涨 ��β ֻ�� ��ӽڵ㣬 ���� ֻ��ɾ���ڵ�

class ListNode {
	public:
		int val;
		ListNode* next;

		ListNode(int value):val(value),next(nullptr){}
};

class LinkedListQueue {
	private:
		ListNode* front, * rear;// ͷ�ڵ� front��β�ڵ� rear
		int queueSize;

	public:
		LinkedListQueue() {
			front = nullptr;
			rear = nullptr;
			queueSize = 0;
		}

		void freeMemoryLinkedList(ListNode* node)
		{
			if (node == nullptr)
				return;
			freeMemoryLinkedList(node->next);
			delete node;
		}

		~LinkedListQueue() {
			// ��������ɾ���ڵ㣬�ͷ��ڴ�
			freeMemoryLinkedList(front);
		}

		// ��ȡ���г���
		int size()
		{
			return queueSize;
		}

		// �п�
		bool isEmpty()
		{
			return queueSize == 0;
		}

		// ���
		void push(int num)
		{
			// β�ͽڵ���� num
			ListNode* node = new ListNode(num);
			// �������Ϊ�գ����� ͷ��β�ڵ㶼ָ��ýڵ�
			if (front == nullptr)
			{
				front = node;
				rear = node;
			}
			// ������в�ȫΪ�գ���ô�ͽ��ýڵ���ӵ� β�ڵ�
			else
			{
				rear->next = node;
				rear = node;
			}
			queueSize++;
		}

		// ���ʶ���Ԫ��
		int peek()
		{
			if (size() == 0)
				throw out_of_range("����Ϊ��");
			return front->val;
		}

		// ����
		void pop()
		{
			int num = peek();
			// ɾ��ͷ�ڵ�
			ListNode* tmp = front;
			front = front->next;
			// �ͷ��ڴ�
			delete tmp;
			queueSize--;
		}

		// ������Ԫ��ת��Ϊ Vector ������
		vector<int> toVector()
		{
			ListNode* node = front;
			vector<int> res(size());
			for (int i = 0; i < res.size(); i++)
			{
				res[i] = node->val;
				node = node->next;
			}
			return res;
		}
};

// 2. ��������ʵ��
/*
   ������Ҫע����ǣ�������ɾ��Ԫ�ص�ʱ�临�Ӷ��� O(n)�������ӵĻ�������Ч�ʺܵ�
   ���������µİ취��
   ʹ��һ������ front ָ�����Ԫ�ص�����������ά��һ������ size ���ڼ�¼���г��ȡ�
   ���� rear = front + size,�����ʽ������� rear ָ���βԪ��֮�����һ��λ��
   �����ӵ���ƣ��������ЧԪ��������ڣ�[front, rear - 1]
   ��ӣ�����Ԫ�ظ�ֵ�� rear ��������size++
   ���ӣ�ֻ�� front ++  size--
   �������������֮�󣺳��� ��ӵ�ʱ�临�Ӷȶ��� O(1)

   ����������һ���������⣺�����ǲ��Ͻ��� ��� ���� �Ĺ����У� front rear ���������ƶ��������ǵ�������β�����޷��ƶ���
   ��ˣ�Ϊ�˽��������⣺
   ���ǿ��Խ�������Ϊ ��β��ӵ� ���������顱

   ���� �������飺
   ������Ҫ�� front rear ��Խ������β����ʱ��ֱ�ӻص�����ͷ���������������������Թ��ɿ���ͨ�� ��ȡ������� ʵ��
*/

// ���ڻ�������ʵ�ֵĶ���
class ArrayQueue {
	private:
		int* nums; // �洢����Ԫ�ص�����
		int front; // ����ָ�룬ָ�����Ԫ��
		int queueSize; // ���г���
		int queueCapacity; // ��������

	public:
		ArrayQueue(int capacity)
		{
			// ��ʼ������
			nums = new int[capacity];
			queueCapacity = capacity;
			front = queueSize = 0;
		}

		~ArrayQueue()
		{
			delete[] nums;
		}

		// ��ȡ��������
		int capacity()
		{
			return queueCapacity;
		}

		// ��ȡ���еĳ���
		int size()
		{
			return queueSize;
		}

		// �п�
		bool isEmpty()
		{
			return size() == 0;
		}

		// ���
		void push(int num)
		{
			if (queueSize == queueCapacity)
			{
				cout << "��������" << endl;
				return;
			}
			// �����βָ�룬ָ���β���� + 1
			// ȡ�������ʵ�� rear Խ������β���ص�ͷ��
			int rear = (front + queueSize) % queueCapacity;
			// �� num �������β
			nums[rear] = num;
			queueSize++;
		}

		// ���ʶ���Ԫ��
		int peek()
		{
			if (isEmpty())
				throw out_of_range("����Ϊ��");
			return nums[front];
		}

		// ����
		void pop()
		{
			int num = peek();
			// ����ָ������ƶ�һλ����Խ��β���򷵻ص�����ͷ��
			front = (front + 1) % queueCapacity;
			queueSize--;
		}

		// ������ת��Ϊ Vector ������
		vector<int> toVector()
		{
			// ֻת����Ч�����ڵ��б�Ԫ��
			vector<int> arr(queueSize);
			for (int i = 0, j = front; i < queueSize; i++, j++)
				arr[i] = nums[j % queueCapacity];

			return arr;
		}



};


int main()
{

	return 0;
}