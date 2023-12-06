#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第五章 5.2 队列

/*
 队列：先入先出
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <queue>

using namespace std;

// 队列常见操作
/*
   入队：push
   出队：pop
   队首元素：peek
*/

void testQueue()
{
	// 初识化队列
	queue<int> queue;

	// 元素入队
	queue.push(1);
	queue.push(3);
	queue.push(2);
	queue.push(5);
	queue.push(4);

	// 访问队首元素
	int front = queue.front();

	// 出队
	queue.pop();

	// 获取长度
	int size = queue.size();

	// 判空
	bool empty = queue.empty();
}

// 队列实现
// 1. 基于链表实现
// 将 头节点 尾节点 分别视为 队首 队尾 ，同时规定 队尾 只能 添加节点， 队首 只能删除节点

class ListNode {
	public:
		int val;
		ListNode* next;

		ListNode(int value):val(value),next(nullptr){}
};

class LinkedListQueue {
	private:
		ListNode* front, * rear;// 头节点 front，尾节点 rear
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
			// 遍历链表删除节点，释放内存
			freeMemoryLinkedList(front);
		}

		// 获取队列长度
		int size()
		{
			return queueSize;
		}

		// 判空
		bool isEmpty()
		{
			return queueSize == 0;
		}

		// 入队
		void push(int num)
		{
			// 尾巴节点添加 num
			ListNode* node = new ListNode(num);
			// 如果队列为空，则让 头、尾节点都指向该节点
			if (front == nullptr)
			{
				front = node;
				rear = node;
			}
			// 如果队列不全为空，那么就将该节点添加到 尾节点
			else
			{
				rear->next = node;
				rear = node;
			}
			queueSize++;
		}

		// 访问队首元素
		int peek()
		{
			if (size() == 0)
				throw out_of_range("队列为空");
			return front->val;
		}

		// 出队
		void pop()
		{
			int num = peek();
			// 删除头节点
			ListNode* tmp = front;
			front = front->next;
			// 释放内存
			delete tmp;
			queueSize--;
		}

		// 将链表元素转化为 Vector 并返回
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

// 2. 基于数组实现
/*
   这里需要注意的是，数组中删除元素的时间复杂度是 O(n)，这样子的话，出队效率很低
   于是有以下的办法：
   使用一个变量 front 指向队首元素的索引，并且维护一个变量 size 用于记录队列长度。
   定义 rear = front + size,这个公式计算出的 rear 指向队尾元素之后的下一个位置
   这样子的设计：数组的有效元素区间就在：[front, rear - 1]
   入队：输入元素赋值给 rear 索引处，size++
   出队：只需 front ++  size--
   经过这样的设计之后：出队 入队的时间复杂度都是 O(1)

   但是这里有一个致命问题：当我们不断进行 入队 出队 的过程中， front rear 都在向右移动，当他们到达数组尾部就无法移动了
   因此，为了解决这个问题：
   我们可以将数组视为 首尾相接的 “环形数组”

   对于 环形数组：
   我们需要让 front rear 在越过数组尾部的时候，直接回到数组头部继续遍历，这种周期性规律可以通过 “取余操作” 实现
*/

// 基于环形数组实现的队列
class ArrayQueue {
	private:
		int* nums; // 存储队列元素的数组
		int front; // 队首指针，指向队首元素
		int queueSize; // 队列长度
		int queueCapacity; // 队列容量

	public:
		ArrayQueue(int capacity)
		{
			// 初始化数组
			nums = new int[capacity];
			queueCapacity = capacity;
			front = queueSize = 0;
		}

		~ArrayQueue()
		{
			delete[] nums;
		}

		// 获取队列容量
		int capacity()
		{
			return queueCapacity;
		}

		// 获取队列的长度
		int size()
		{
			return queueSize;
		}

		// 判空
		bool isEmpty()
		{
			return size() == 0;
		}

		// 入队
		void push(int num)
		{
			if (queueSize == queueCapacity)
			{
				cout << "队列已满" << endl;
				return;
			}
			// 计算队尾指针，指向队尾索引 + 1
			// 取余操作，实现 rear 越过数组尾部回到头部
			int rear = (front + queueSize) % queueCapacity;
			// 将 num 添加至队尾
			nums[rear] = num;
			queueSize++;
		}

		// 访问队首元素
		int peek()
		{
			if (isEmpty())
				throw out_of_range("队列为空");
			return nums[front];
		}

		// 出队
		void pop()
		{
			int num = peek();
			// 队首指针向后移动一位，若越过尾部则返回到数组头部
			front = (front + 1) % queueCapacity;
			queueSize--;
		}

		// 将数组转化为 Vector 并返回
		vector<int> toVector()
		{
			// 只转化有效长度内的列表元素
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