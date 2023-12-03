#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ������ ���ݽṹ
// hello �㷨 ������ ����������

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

/*
��������
int number[5];
float decimals[5];
char characters[5];
bool bools[5];
*/

// 4.1 ����
// ���鳣�ò���
// ��ʼ������
// �洢��ջ��
//int arr[5];
//int nums[5] = { 1, 2, 3,4,5 };
// �洢�ڶ��ϣ���Ҫ�ֶ��ͷſռ�
//int* arr1 = new int[5];
//int* nums1 = new int[5]{ 1,2,3,4,5 };

// �����������
int randomAccess(int* nums, int size)
{
	// ������[0, size) �������ȡһ������
	int randomIndex = rand() % size;
	int randomNum = nums[randomIndex];
	return randomNum;
}

// ����Ԫ��
// ����������� index �� ����Ԫ�� num
void insert(int* nums, int size, int num, int index)
{
	// ������ index �Լ��Ժ������Ԫ������ƶ�һλ
	for (int i = size - 1; i > index; i--)
		 nums[i] = nums[i - 1];
	// �� nums ���� index ����Ԫ��
	nums[index] = num;
}

// ɾ��Ԫ��
// ɾ������ index ����Ԫ��
void remove(int* nums, int size, int index)
{
	// ������ index ֮�������Ԫ����ǰ�ƶ�һλ
	for (int i = index; i < size - 1; i++)
		nums[i] = nums[i + 1];
}

// ��������
void travelse(int* nums, int size)
{
	int count = 0;
	// ͨ��������������
	for (int i = 0; i < size; i++)
		count += nums[i];
}

// ����Ԫ��
// �������в���ָ��Ԫ�ء�
int find(int* nums, int size, int target)
{
	for (int i = 0; i < size; i++)
		if (nums[i] == target)
			return i;
	return -1;
}

// ��������
// �������鳤��
int* extend(int* nums, int size, int enlarge)
{
	// ��ʼ��һ����չ���Ⱥ������
	int* res = new int[size + enlarge];
	// ��ԭ�����е�����Ԫ�ظ��Ƶ�������
	for (int i = 0; i < size; i++)
		res[i] = nums[i];
	// �ͷ��ڴ�
	// ɾ��ԭ����
	delete[] nums;
	// ������չ�������
	return res;
}

// ����
// �ڴ��ַ��������
// ��ͬ���ݵĻ����ϣ����������ռ�ø�����ڴ�ռ�
// ����ڵ�ṹ��
struct ListNode {
	int val;// �ڵ��ֵ
	ListNode* next;// ָ����һ���ڵ��ָ��
	ListNode(int x):val(x),next(nullptr){}//���캯��
	// int x �ǹ��캯���Ĳ��������ڽ���һ������ֵ
};		

// ����ڵ�
void insert(ListNode* n0, ListNode* P)
{
	ListNode* n1 = n0->next;
	P->next = n1;
	n0->next = P;
}

// ɾ���ڵ�
// ɾ������Ľڵ� n0 ֮����׸��ڵ�
void remove(ListNode* n0)
{
	if (n0->next == nullptr)
		return;
	// n0 -> P -> n1
	ListNode* P = n0->next;
	ListNode* n1 = P->next;
	n0->next = n1;
	// �ͷ��ڴ�
	delete P;
}

// ���ʽڵ�
// ��������������Ϊ index �Ľڵ�
ListNode* access(ListNode* head, int index)
{
	for (int i = 0; i < index; i++)
	{
		if (head == nullptr)
			return nullptr;
		head = head->next;
	}
	return head;
}
// ���ҽڵ�
// �������в���ֵΪ target ���׸��ڵ�
int find(ListNode* head, int target)
{
	int index = 0;
	while (head != nullptr)
	{
		if (head->val == target)
			return index;
		head = head->next;
		index++;
	}
	return -1;
}

// ˫������Ľṹ��
struct ListNodeII {
	int val; // �ڵ�ֵ
	ListNode* next; // ָ���̽ڵ��ָ��
	ListNode* prev; // ָ��ǰ���ڵ��ָ��
	ListNodeII(int x) : val(x), next(nullptr), prev(nullptr){} // ���캯��
};

// �б�
// ��ʼ���б�

void printList(const vector<int>& list)
{
	for (const auto& item : list)
		cout << item << " ";
	cout << endl;
}

void printListII(const vector<int>& list)
{
	for (size_t i = 0; i < list.size(); i++)
		cout << i << " ";
	cout << endl;
}

void printListIII(const vector<int>& list)
{
	for (auto i = list.begin(); i != list.end(); ++i)
		// ��������ӡ��Ҫ �� *i ������ i�����ܻ�ȡ������ָ���Ԫ��ֵ
		cout << *i << " ";
	cout << endl;
}

void List()
{
	vector<int> nums1;
	vector<int> nums = { 1,2,3,4,5 };

	// ����Ԫ��
	int num = nums[1]; // ��������
	nums[1] = 0; // ������ 1����Ԫ�ظ���Ϊ 0

	// ����б�
	nums.clear();

	// ��β�����Ԫ��
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(5);
	nums.push_back(4);

	// ���м����Ԫ��
	nums.insert(nums.begin() + 3, 6); // ������ 3 ���������� 6

	// ɾ��Ԫ��
	nums.erase(nums.begin() + 3); // ɾ������ 3 ����Ԫ��

	printList(nums);
	printListII(nums);
	printListIII(nums);

	// �����б�
	// 1.ͨ�����������б�
	int count = 0;
	for (int i = 0; i < nums.size(); i++)
		count += nums[i];

	// 2.ֱ�ӱ����б�Ԫ��
	count = 0;
	for (int num : nums)
		count += num;

	// ƴ���б�
	vector<int> nums2 = { 6,7,8,9,10 };
	// ���б� nums2 ƴ�ӵ� nums ֮��
	nums.insert(nums.end(), nums2.begin(), nums2.end());

	cout << "ƴ�Ӻ�� :" << endl;
	printList(nums);

	// �����б�
	sort(nums.begin(), nums.end());
	cout << "������ :" << endl;
	printListIII(nums);

}

// ʵ���б���
class MyList {
	private:
		int* arr; // ���飨�洢�б�Ԫ�أ�
		int arrCapacity; // �б�����
		int arrSize = 0; // �б��ȣ���ǰԪ��������
		int extendRatio = 2; // ÿ�����ݵı���

	public:
		// ���췽��
		MyList(){
			arr = new int[arrCapacity];
		}
		// ��������
		~MyList() {
			delete[] arr;
		}
		// ��ȡ�б��ȣ���ǰԪ��������
		int size() {
			return arrSize;
		}
		// ��ȡ�б�����
		int capacity() {
			return arrCapacity;
		}
		// ����Ԫ��
		int get(int index) {
			// �������Խ�����׳��쳣
			if (index < 0 || index >= size())
				throw out_of_range("����Խ��");
			return arr[index];
		}
		// ����Ԫ��
		void set(int index, int num)
		{
			if (index < 0 || index >= size())
				throw out_of_range("����Խ��");
			arr[index] = num;
		}

		// ����
		void extendCapacity()
		{
			// �½�һ������Ϊԭ���� extendRatio ����������
			int newCapacity = capacity() * extendRatio;
			int* tmp = arr;
			arr = new int[newCapacity];
			// ��ԭ�����е�����Ԫ�ظ��Ƶ�������
			for (int i = 0; i < size(); i++)
				arr[i] = tmp[i];
			// �ͷ��ڴ�
			delete[]tmp;
			arrCapacity = newCapacity;
		}

		// ��β�����Ԫ��
		void add(int num)
		{
			// Ԫ����������������ʱ������
			if (size() == capacity())
				extendCapacity();
			arr[size()] = num;
			// ����Ԫ������
			arrSize++;
		}

		// ���м����Ԫ��
		void insert(int index, int num)
		{
			if (index < 0 || index >= size())
				throw out_of_range("����Խ��");
			// Ԫ����������������ʱ������
			if (size() == capacity())
				extendCapacity();
			// ������ index �Լ��Ժ��Ԫ�ض�����ƶ�һλ
			for (int i = size() - 1; i >= index; i--)
				arr[i + 1] = arr[i];
			arr[index] = num;
			// ����Ԫ������
			arrSize++;
		}

		// ɾ��Ԫ��
		int remove(int index)
		{
			if (index < 0 || index >= size())
				throw out_of_range("����Խ��");
			int num = arr[index];
			// ���� i ֮���Ԫ�ض���ǰ�ƶ�һλ
			for (int i = index; i < size() - 1; i++)
				arr[i] = arr[i + 1];
			// ����Ԫ������
			arrSize--;
			// ����ɾ����Ԫ��
			return num;
		}

		// ���б�ת��Ϊ vector ���ڴ�ӡ
		vector<int> toVector()
		{
			// ��ת��Ϊ��Ч���ȷ�Χ�ڵ��б�Ԫ��
			vector<int> vec(size());
			for (int i = 0; i < size(); i++)
				vec[i] = arr[i];

			return vec;
		}

};

int main()
{
	// ��ʼ�������ڵ�
	ListNode* n0 = new ListNode(1);
	ListNode* n1 = new ListNode(3);
	ListNode* n2 = new ListNode(2);
	ListNode* n3 = new ListNode(5);
	ListNode* n4 = new ListNode(4);
	// ���������ڵ�֮�������
	n0->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	List();
	cout << endl;
	cout << endl;

	cout << "������ʵ��MyList�ࣺ" << endl;
	// MyList��
	MyList myList;

	// ���Ԫ��
	myList.add(1);
	myList.add(2);
	myList.add(3);
	myList.add(4);
	myList.add(5);

	// ����Ԫ��
	cout << "����Ԫ��" << endl;
	std::cout << "Element at index 2: " << myList.get(2) << std::endl;


	// ����Ԫ��
	cout << "����Ԫ��" << endl;
	myList.set(3, 10);
	std::cout << "Updated element at index 3: " << myList.get(3) << std::endl;

	// ����Ԫ��
	cout << "����Ԫ��" << endl;
	myList.insert(1, 20);
	std::cout << "List after inserting 20 at index 1: ";
	for (int i = 0; i < myList.size(); i++) {
		std::cout << myList.get(i) << " ";
	}
	std::cout << std::endl;

	// ɾ��Ԫ��
	cout << "ɾ��Ԫ��" << endl;
	int removedElement = myList.remove(4);
	std::cout << "Removed element at index 4: " << removedElement << std::endl;
	std::cout << "List after removing element at index 4: ";
	for (int i = 0; i < myList.size(); i++) {
		std::cout << myList.get(i) << " ";
	}
	std::cout << std::endl;

	// ���б�ת��Ϊ vector ����ӡ
	cout << "���б�ת��Ϊ vector ����ӡ" << endl;
	std::vector<int> myVector = myList.toVector();
	std::cout << "List as vector: ";
	for (const auto& num : myVector) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
	
	return 0;
}