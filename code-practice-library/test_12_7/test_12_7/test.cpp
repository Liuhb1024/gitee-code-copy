#define _CRT_SECURE_NO_WARNINGS 1
// 双向队列

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stdexcept>

using namespace std;

// 双向队列常用操作
/*
   时间复杂度均为 O(1)
   pushFirst() 将元素添加至队首
   pushLast()  将元素添加至队尾
   popFirst()  删除队首元素
   popLast()   删除队尾元素
   peekFirst() 访问队首元素
   peekLast()  访问队尾元素
*/

void testDeque()
{
	// 初始化双向队列
	deque<int> deque;

	// 元素入队
	deque.push_back(2); // 添加至队尾
	deque.push_back(5);
	deque.push_back(4);
	deque.push_front(3); // 添加至队首
	deque.push_front(1);

	// 访问元素
	int front = deque.front(); // 队首元素
	int back = deque.back(); // 队尾元素

	// 元素出队
	deque.pop_front(); // 队首元素出队
	deque.pop_back(); // 队尾元素出队

	// 获取双向队列的长度
	int size = deque.size();

	// 判断双向队列是否为空
	bool empty = deque.empty();
}

// 双向队列实现
// 1. 基于双向链表实现

// 双向链表节点
struct DoublyListNode {
	int val; // 节点值
	DoublyListNode* next; // 后继节点指针
	DoublyListNode* prev; // 前驱节点指针
	DoublyListNode(int val) :val(val), prev(nullptr), next(nullptr) {}
};

// 基于双向链表实现的双向队列
class LinkedListDeque {
private:
	DoublyListNode* front, * rear; // 头节点 front， 尾节点 rear
	int queueSize = 0;

public:
	// 构造方法
	LinkedListDeque() :front(nullptr), rear(nullptr) {}

	// 析构方法
	~LinkedListDeque()
	{
		// 遍历链表删除节点，释放内存
		DoublyListNode* pre, * cur = front;
		while (cur != nullptr)
		{
			pre = cur;
			cur = cur->next;
			delete pre;
		}
	}

	// 获取队列的长度
	int size()
	{
		return queueSize;
	}

	// 判断双向队列是否为空
	bool isEmpty()
	{
		return size() == 0;
	}

	// 入队
	void push(int num, bool isFront)
	{
		DoublyListNode* node = new DoublyListNode(num);
		// 若链表为空，则 front 和 rear 都指向 node
		if (isEmpty())
			front = rear = node;
		// 队首入队操作
		else if (isFront)
		{
			// 将 node 添加至链表头部
			front->prev = node;
			node->next = front;
			front = node;// 更新头节点
		}
		// 队尾入队操作
		else
		{
			// 将 node 添加至链表尾部
			rear->next = node;
			node->prev = rear;
			rear = node;// 更新尾节点
		}
		queueSize++;
	}

	// 队首入队
	void pushFirst(int num)
	{
		push(num, true);
	}

	// 队尾入队
	void pushLast(int num)
	{
		push(num, false);
	}

	// 出队操作
	int pop(bool isFront)
	{
		if (isEmpty())
			throw out_of_range("队列为空");
		int val;
		// 队首出队操作
		if (isFront)
		{
			val = front->val; // 暂存头节点值
			// 删除头节点
			DoublyListNode* fNext = front->next;
			if (fNext != nullptr)
			{
				fNext->prev = nullptr;
				front->next = nullptr;
				delete front;
			}
			front = fNext;// 更新头节点
		}
		// 队尾出队
		else
		{
			val = rear->val; // 暂存尾节点值
			// 删除尾节点
			DoublyListNode* rPrev = rear->prev;
			if (rPrev != nullptr)
			{
				rPrev->next = nullptr;
				rear->prev = nullptr;
				delete rear;
			}
			rear = rPrev;// 更新尾节点
		}
		queueSize--;
		return val;
	}

	// 队首出队
	int popFirst()
	{
		return pop(true);
	}

	// 队尾出队
	int popLast()
	{
		return pop(false);
	}

	// 访问队首元素
	int peekFirst()
	{
		if (isEmpty)
			throw out_of_range("双向队列为空");
		return front->val;
	}

	// 访问队尾元素
	int peekFirst()
	{
		if (isEmpty())
			throw std::out_of_range("双向队列为空");
		return rear->val;
	}

	// 返回数组用于打印
	std::vector<int> toVector()
	{
		DoublyListNode* node = front;
		std::vector<int> res(size());
		for (int i = 0; i < res.size(); i++)
		{
			res[i] = node->val;
			node = node->next;
		}
		return res;
	}

};

// 基于环形数组实现的队列
class ArrayDeque {
private:
	vector<int> nums; // 用于存储双向队列元素的数组
	int front; // 队首指针 指向队首元素
	int queSize; // 双向队列长度

public:
	// 构造方法
	ArrayDeque(int capacity)
	{
		nums.resize(capacity);
		front = queSize = 0;
	}

	// 获取双向队列的容量
	int capacity()
	{
		return nums.size();
	}

	// 获取双向队列的长度
	int size()
	{
		return queSize;
	}

	// 判空
	bool isEmpty()
	{
		return queSize == 0;
	}

	// 计算环形数组的索引
	int index(int i)
	{
		/*
		通过取余操作实现数组首尾相连
		当 i 越过数组尾部之后，回到头部
		当 i 越过数组头部之后，回到尾部
		*/
		return (i + capacity()) % capacity();
	}

	// 队首入队
	void pushFirst(int num)
	{
		if (queSize == capacity())
		{
			cout << "双向队列已满" << endl;
			return;
		}
		// 队首指针向左移动一位
		// 通过取余操作，实现 front 越过数组头部后回到尾部
		front = index(front - 1);
		// 将 num 添加至队首
		nums[front] = num;
		queSize++;
	}

	// 队尾入队
	void pushLast(int num)
	{
		if (queSize == capacity())
		{
			cout << "双向队列已满" << endl;
			return;
		}
		// 计算尾指针，指向队尾索引 + 1
		int rear = index(front + queSize);
		// 将 num 添加至队尾
		nums[rear] = num;
		queSize++;
	}

	// 队首出队
	int popFirst()
	{
		int num = peekFirst();
		// 队首指针向后移动一位
		front = index(front + 1);
		queSize--;
		return num;
	}

	// 队尾出队
	int popLast()
	{
		int num = peekLast();
		queSize--;
		return num;
	}


	// 访问队首元素
	int peekFirst()
	{
		if (isEmpty())
			throw out_of_range("双向队列为空");
		return nums[front];
	}

	// 访问队尾元素
	int peekLast()
	{
		if (isEmpty)
			throw out_of_range("双向队列为空");
		// 计算尾元素索引
		int last = index(front + queSize - 1);
		return nums[last];
	}

	// 返回数组用于打印
	std::vector<int> toVector()
	{
		// 仅转换有效长度范围内的列表元素
		std::vector<int> res(queSize);
		for (int i = 0, j = front; i < queSize; i++, j++)
			res[i] = nums[index(j)];

		return res;
	}

};


int main()
{
	return 0;
}