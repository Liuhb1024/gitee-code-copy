#define _CRT_SECURE_NO_WARNINGS 1
// ˫�����

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stdexcept>

using namespace std;

// ˫����г��ò���
/*
   ʱ�临�ӶȾ�Ϊ O(1)
   pushFirst() ��Ԫ�����������
   pushLast()  ��Ԫ���������β
   popFirst()  ɾ������Ԫ��
   popLast()   ɾ����βԪ��
   peekFirst() ���ʶ���Ԫ��
   peekLast()  ���ʶ�βԪ��
*/

void testDeque()
{
	// ��ʼ��˫�����
	deque<int> deque;

	// Ԫ�����
	deque.push_back(2); // �������β
	deque.push_back(5);
	deque.push_back(4);
	deque.push_front(3); // ���������
	deque.push_front(1);

	// ����Ԫ��
	int front = deque.front(); // ����Ԫ��
	int back = deque.back(); // ��βԪ��

	// Ԫ�س���
	deque.pop_front(); // ����Ԫ�س���
	deque.pop_back(); // ��βԪ�س���

	// ��ȡ˫����еĳ���
	int size = deque.size();

	// �ж�˫������Ƿ�Ϊ��
	bool empty = deque.empty();
}

// ˫�����ʵ��
// 1. ����˫������ʵ��

// ˫������ڵ�
struct DoublyListNode {
	int val; // �ڵ�ֵ
	DoublyListNode* next; // ��̽ڵ�ָ��
	DoublyListNode* prev; // ǰ���ڵ�ָ��
	DoublyListNode(int val) :val(val), prev(nullptr), next(nullptr) {}
};

// ����˫������ʵ�ֵ�˫�����
class LinkedListDeque {
private:
	DoublyListNode* front, * rear; // ͷ�ڵ� front�� β�ڵ� rear
	int queueSize = 0;

public:
	// ���췽��
	LinkedListDeque() :front(nullptr), rear(nullptr) {}

	// ��������
	~LinkedListDeque()
	{
		// ��������ɾ���ڵ㣬�ͷ��ڴ�
		DoublyListNode* pre, * cur = front;
		while (cur != nullptr)
		{
			pre = cur;
			cur = cur->next;
			delete pre;
		}
	}

	// ��ȡ���еĳ���
	int size()
	{
		return queueSize;
	}

	// �ж�˫������Ƿ�Ϊ��
	bool isEmpty()
	{
		return size() == 0;
	}

	// ���
	void push(int num, bool isFront)
	{
		DoublyListNode* node = new DoublyListNode(num);
		// ������Ϊ�գ��� front �� rear ��ָ�� node
		if (isEmpty())
			front = rear = node;
		// ������Ӳ���
		else if (isFront)
		{
			// �� node ���������ͷ��
			front->prev = node;
			node->next = front;
			front = node;// ����ͷ�ڵ�
		}
		// ��β��Ӳ���
		else
		{
			// �� node ���������β��
			rear->next = node;
			node->prev = rear;
			rear = node;// ����β�ڵ�
		}
		queueSize++;
	}

	// �������
	void pushFirst(int num)
	{
		push(num, true);
	}

	// ��β���
	void pushLast(int num)
	{
		push(num, false);
	}

	// ���Ӳ���
	int pop(bool isFront)
	{
		if (isEmpty())
			throw out_of_range("����Ϊ��");
		int val;
		// ���׳��Ӳ���
		if (isFront)
		{
			val = front->val; // �ݴ�ͷ�ڵ�ֵ
			// ɾ��ͷ�ڵ�
			DoublyListNode* fNext = front->next;
			if (fNext != nullptr)
			{
				fNext->prev = nullptr;
				front->next = nullptr;
				delete front;
			}
			front = fNext;// ����ͷ�ڵ�
		}
		// ��β����
		else
		{
			val = rear->val; // �ݴ�β�ڵ�ֵ
			// ɾ��β�ڵ�
			DoublyListNode* rPrev = rear->prev;
			if (rPrev != nullptr)
			{
				rPrev->next = nullptr;
				rear->prev = nullptr;
				delete rear;
			}
			rear = rPrev;// ����β�ڵ�
		}
		queueSize--;
		return val;
	}

	// ���׳���
	int popFirst()
	{
		return pop(true);
	}

	// ��β����
	int popLast()
	{
		return pop(false);
	}

	// ���ʶ���Ԫ��
	int peekFirst()
	{
		if (isEmpty)
			throw out_of_range("˫�����Ϊ��");
		return front->val;
	}

	// ���ʶ�βԪ��
	int peekFirst()
	{
		if (isEmpty())
			throw std::out_of_range("˫�����Ϊ��");
		return rear->val;
	}

	// �����������ڴ�ӡ
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

// ���ڻ�������ʵ�ֵĶ���
class ArrayDeque {
private:
	vector<int> nums; // ���ڴ洢˫�����Ԫ�ص�����
	int front; // ����ָ�� ָ�����Ԫ��
	int queSize; // ˫����г���

public:
	// ���췽��
	ArrayDeque(int capacity)
	{
		nums.resize(capacity);
		front = queSize = 0;
	}

	// ��ȡ˫����е�����
	int capacity()
	{
		return nums.size();
	}

	// ��ȡ˫����еĳ���
	int size()
	{
		return queSize;
	}

	// �п�
	bool isEmpty()
	{
		return queSize == 0;
	}

	// ���㻷�����������
	int index(int i)
	{
		/*
		ͨ��ȡ�����ʵ��������β����
		�� i Խ������β��֮�󣬻ص�ͷ��
		�� i Խ������ͷ��֮�󣬻ص�β��
		*/
		return (i + capacity()) % capacity();
	}

	// �������
	void pushFirst(int num)
	{
		if (queSize == capacity())
		{
			cout << "˫���������" << endl;
			return;
		}
		// ����ָ�������ƶ�һλ
		// ͨ��ȡ�������ʵ�� front Խ������ͷ����ص�β��
		front = index(front - 1);
		// �� num ���������
		nums[front] = num;
		queSize++;
	}

	// ��β���
	void pushLast(int num)
	{
		if (queSize == capacity())
		{
			cout << "˫���������" << endl;
			return;
		}
		// ����βָ�룬ָ���β���� + 1
		int rear = index(front + queSize);
		// �� num �������β
		nums[rear] = num;
		queSize++;
	}

	// ���׳���
	int popFirst()
	{
		int num = peekFirst();
		// ����ָ������ƶ�һλ
		front = index(front + 1);
		queSize--;
		return num;
	}

	// ��β����
	int popLast()
	{
		int num = peekLast();
		queSize--;
		return num;
	}


	// ���ʶ���Ԫ��
	int peekFirst()
	{
		if (isEmpty())
			throw out_of_range("˫�����Ϊ��");
		return nums[front];
	}

	// ���ʶ�βԪ��
	int peekLast()
	{
		if (isEmpty)
			throw out_of_range("˫�����Ϊ��");
		// ����βԪ������
		int last = index(front + queSize - 1);
		return nums[last];
	}

	// �����������ڴ�ӡ
	std::vector<int> toVector()
	{
		// ��ת����Ч���ȷ�Χ�ڵ��б�Ԫ��
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