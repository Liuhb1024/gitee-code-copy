#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 �ڰ��� ��

#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<vector>

using namespace std;

// �Ѿ�����ɽ�����ͣ�����������̬���졣����ɽ��ߵʹ��䣬����ߵ�ɽ����������ӳ��������
// �� [heap] ����һ�������ض������Ķ�����
// 1. �󶥶� max heap : ����ڵ��ֵ���������ӽڵ��ֵ
// 2. С���� min heap : ����ڵ��ֵ��С�����ӽڵ��ֵ

// �ѳ��ò���
/*
   push() Ԫ�����
   pop()  �Ѷ�Ԫ�س���
   peek() ���ʶѶ�Ԫ��
   size() ����
   isEmpty()
*/

// �ѵĳ��ò���
void testHeap()
{
	// ��ʼ����
	// ��ʼ��С����
	priority_queue<int, vector<int>, greater<int>>minHeap;
	// ��ʼ���󶥶�
	priority_queue<int, vector<int>, greater<int>>maxHeap;

	// Ԫ�����
	maxHeap.push(1);
	maxHeap.push(3);
	maxHeap.push(2);
	maxHeap.push(5);
	maxHeap.push(4);

	// ��ȡ�Ѷ�Ԫ��
	int peek = maxHeap.top();
	cout << peek << endl;

	// �Ѷ�Ԫ�س���
	// ����Ԫ�ػ��γ�һ���Ӵ�С������
	maxHeap.pop();
	maxHeap.pop();
	maxHeap.pop();
	maxHeap.pop();
	maxHeap.pop();

	// ��ȡ�Ѵ�С
	int size = maxHeap.size();
	cout << size << endl;

	// �ж϶��Ƿ�Ϊ��
	bool isEmpty = maxHeap.empty();
	cout << isEmpty << endl;

	// �����б�����
	vector<int> input{ 1,3,2,5,4 };
	priority_queue<int, vector<int>, greater<int>>minHeap(input.begin(), input.end());

}


vector<int> maxHeap;
// �ѵ�ʵ��(�󶥶�)

// �ѵĴ洢���ʾ

// ��ȡ���ӽڵ�����
int left(int i)
{
	return 2 * i + 1;
}

// ��ȡ���ӽڵ�����
int right(int i)
{
	return 2 * i + 2;
}

// ��ȡ���ڵ�����
int parent(int i)
{
	return(i - 1) / 2; // ��������
}

// ���ʶѶ�Ԫ��
int peek()
{
	return maxHeap[0];
}

// Ԫ�����
void push(int val)
{
	// ��ӽڵ�
	maxHeap.push_back(val);
	// �ӵ������ѻ�
	siftUp(maxHeap.size() - 1);
}
// �ӽڵ� i ��ʼ���ӵ������ѻ�
void siftUp(int i)
{
	while (true)
	{
		// ��ȡ�ڵ� i �ĸ��ڵ�
		int p = parent(i);
		// ����Խ�����ڵ㡱�򡰽ڵ������޸���ʱ�������ѻ�
		if (p < 0 || maxHeap[i] <= maxHeap[p])
			break;
		// ����
		swap(maxHeap[i], maxHeap[p]);
		// ѭ�����϶ѻ�
		i = p;
	}
}

bool isEmpty() {
    return maxHeap.empty();
}

// Ԫ�س���
void pop()
{
	// �п�
	if (isEmpty())
		throw out_of_range("��Ϊ��");
	// �������ڵ�������Ҷ�ڵ� (������Ԫ����βԪ��)
	swap(maxHeap[0], maxHeap[maxHeap.size() - 1]);
	// ɾ���ڵ�
	maxHeap.pop_back();
	// �Ӷ����׶ѻ�
	siftDown(0);
}

// �ӽڵ� i ��ʼ���Ӷ����׶ѻ�
void siftDown(int i)
{
	while (true)
	{
		// �жϽڵ� i, l, r ��ֵ���Ľڵ㣬��Ϊ ma
		int l = left(i), r = right(i), ma = i;
		if (l < maxHeap.size() && maxHeap[l]>maxHeap[ma])
			ma = l;
		if (r < maxHeap.size() && maxHeap[r]>maxHeap[ma])
			ma = r;
		// // ���ڵ� i �������� l, r Խ�磬����������ѻ�������
		if (ma == i)
			break;
		swap(maxHeap[i], maxHeap[ma]);
		// // ѭ�����¶ѻ�
		i = ma;
	}
}

class MaxHeap {
private:
	std::vector<int> maxHeap;

	int parent(int i) {
		return (i - 1) / 2;
	}

	int leftChild(int i) {
		return 2 * i + 1;
	}

	int rightChild(int i) {
		return 2 * i + 2;
	}

	void siftUp(int i) {
		while (i > 0 && maxHeap[i] > maxHeap[parent(i)]) {
			std::swap(maxHeap[i], maxHeap[parent(i)]);
			i = parent(i);
		}
	}

	void siftDown(int i) {
		int maxIndex = i;
		int l = leftChild(i);
		int r = rightChild(i);

		if (l < maxHeap.size() && maxHeap[l] > maxHeap[maxIndex]) {
			maxIndex = l;
		}

		if (r < maxHeap.size() && maxHeap[r] > maxHeap[maxIndex]) {
			maxIndex = r;
		}

		if (maxIndex != i) {
			std::swap(maxHeap[i], maxHeap[maxIndex]);
			siftDown(maxIndex);
		}
	}

public:
	MaxHeap() {}

	MaxHeap(const std::vector<int>& nums) {
		maxHeap = nums;
		for (int i = parent(maxHeap.size() - 1); i >= 0; i--) {
			siftDown(i);
		}
	}

	void push(int val) {
		maxHeap.push_back(val);
		siftUp(maxHeap.size() - 1);
	}

	int top() {
		return maxHeap[0];
	}

	void pop() {
		if (maxHeap.empty()) {
			return;
		}
		std::swap(maxHeap[0], maxHeap[maxHeap.size() - 1]);
		maxHeap.pop_back();
		siftDown(0);
	}

	bool isEmpty() {
		return maxHeap.empty();
	}

	int size() {
		return maxHeap.size();
	}
};

//// �޸ĺ�Ĺ��캯��
//MaxHeap(vector<int> nums) {
//	maxHeap = nums;
//	for (int i = parent(maxHeap.size() - 1); i >= 0; i--) {
//		siftDown(i);
//	}
//}

// top-k
/* ���ڶѲ������������� k ��Ԫ�� */
priority_queue<int, vector<int>, greater<int>> topKHeap(vector<int>& nums, int k) {
	// ��ʼ��С����
	priority_queue<int, vector<int>, greater<int>> heap;
	// �������ǰ k ��Ԫ�����
	for (int i = 0; i < k; i++) {
		heap.push(nums[i]);
	}
	// �ӵ� k+1 ��Ԫ�ؿ�ʼ�����ֶѵĳ���Ϊ k
	for (int i = k; i < nums.size(); i++) {
		// ����ǰԪ�ش��ڶѶ�Ԫ�أ��򽫶Ѷ�Ԫ�س��ѡ���ǰԪ�����
		if (nums[i] > heap.top()) {
			heap.pop();
			heap.push(nums[i]);
		}
	}
	return heap;
}
int main()
{
	void testHeap();
	return 0;
}