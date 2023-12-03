#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第三章 数据结构
// hello 算法 第四章 数组与链表

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

/*
数据类型
int number[5];
float decimals[5];
char characters[5];
bool bools[5];
*/

// 4.1 数组
// 数组常用操作
// 初始化数组
// 存储在栈上
//int arr[5];
//int nums[5] = { 1, 2, 3,4,5 };
// 存储在堆上，需要手动释放空间
//int* arr1 = new int[5];
//int* nums1 = new int[5]{ 1,2,3,4,5 };

// 随机访问数组
int randomAccess(int* nums, int size)
{
	// 在区间[0, size) 中随机抽取一个数字
	int randomIndex = rand() % size;
	int randomNum = nums[randomIndex];
	return randomNum;
}

// 插入元素
// 在数组的索引 index 处 插入元素 num
void insert(int* nums, int size, int num, int index)
{
	// 把索引 index 以及以后的所有元素向后移动一位
	for (int i = size - 1; i > index; i--)
		 nums[i] = nums[i - 1];
	// 将 nums 赋给 index 处的元素
	nums[index] = num;
}

// 删除元素
// 删除索引 index 处的元素
void remove(int* nums, int size, int index)
{
	// 把索引 index 之后的所有元素向前移动一位
	for (int i = index; i < size - 1; i++)
		nums[i] = nums[i + 1];
}

// 遍历数组
void travelse(int* nums, int size)
{
	int count = 0;
	// 通过索引遍历数组
	for (int i = 0; i < size; i++)
		count += nums[i];
}

// 查找元素
// 在数组中查找指定元素、
int find(int* nums, int size, int target)
{
	for (int i = 0; i < size; i++)
		if (nums[i] == target)
			return i;
	return -1;
}

// 扩容数组
// 扩容数组长度
int* extend(int* nums, int size, int enlarge)
{
	// 初始化一个拓展长度后的数组
	int* res = new int[size + enlarge];
	// 将原数组中的所有元素复制到新数组
	for (int i = 0; i < size; i++)
		res[i] = nums[i];
	// 释放内存
	// 删除原数组
	delete[] nums;
	// 返回拓展后的数组
	return res;
}

// 链表
// 内存地址无需连续
// 相同数据的基础上，链表比数组占用更多的内存空间
// 链表节点结构体
struct ListNode {
	int val;// 节点的值
	ListNode* next;// 指向下一个节点的指针
	ListNode(int x):val(x),next(nullptr){}//构造函数
	// int x 是构造函数的参数，用于接受一个整数值
};		

// 插入节点
void insert(ListNode* n0, ListNode* P)
{
	ListNode* n1 = n0->next;
	P->next = n1;
	n0->next = P;
}

// 删除节点
// 删除链表的节点 n0 之后的首个节点
void remove(ListNode* n0)
{
	if (n0->next == nullptr)
		return;
	// n0 -> P -> n1
	ListNode* P = n0->next;
	ListNode* n1 = P->next;
	n0->next = n1;
	// 释放内存
	delete P;
}

// 访问节点
// 访问链表中索引为 index 的节点
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
// 查找节点
// 在链表中查找值为 target 的首个节点
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

// 双向链表的结构体
struct ListNodeII {
	int val; // 节点值
	ListNode* next; // 指向后继节点的指针
	ListNode* prev; // 指向前驱节点的指针
	ListNodeII(int x) : val(x), next(nullptr), prev(nullptr){} // 构造函数
};

// 列表
// 初始化列表

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
		// 迭代器打印需要 用 *i 解引用 i，才能获取迭代器指向的元素值
		cout << *i << " ";
	cout << endl;
}

void List()
{
	vector<int> nums1;
	vector<int> nums = { 1,2,3,4,5 };

	// 访问元素
	int num = nums[1]; // 访问索引
	nums[1] = 0; // 将索引 1处的元素更新为 0

	// 清空列表
	nums.clear();

	// 在尾部添加元素
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(5);
	nums.push_back(4);

	// 在中间插入元素
	nums.insert(nums.begin() + 3, 6); // 在索引 3 处插入数字 6

	// 删除元素
	nums.erase(nums.begin() + 3); // 删除索引 3 处的元素

	printList(nums);
	printListII(nums);
	printListIII(nums);

	// 遍历列表
	// 1.通过索引遍历列表
	int count = 0;
	for (int i = 0; i < nums.size(); i++)
		count += nums[i];

	// 2.直接遍历列表元素
	count = 0;
	for (int num : nums)
		count += num;

	// 拼接列表
	vector<int> nums2 = { 6,7,8,9,10 };
	// 将列表 nums2 拼接到 nums 之后
	nums.insert(nums.end(), nums2.begin(), nums2.end());

	cout << "拼接后的 :" << endl;
	printList(nums);

	// 排序列表
	sort(nums.begin(), nums.end());
	cout << "排序后的 :" << endl;
	printListIII(nums);

}

// 实现列表类
class MyList {
	private:
		int* arr; // 数组（存储列表元素）
		int arrCapacity; // 列表容量
		int arrSize = 0; // 列表长度（当前元素数量）
		int extendRatio = 2; // 每次扩容的倍数

	public:
		// 构造方法
		MyList(){
			arr = new int[arrCapacity];
		}
		// 析构方法
		~MyList() {
			delete[] arr;
		}
		// 获取列表长度（当前元素数量）
		int size() {
			return arrSize;
		}
		// 获取列表容量
		int capacity() {
			return arrCapacity;
		}
		// 访问元素
		int get(int index) {
			// 如果索引越界则抛出异常
			if (index < 0 || index >= size())
				throw out_of_range("索引越界");
			return arr[index];
		}
		// 更新元素
		void set(int index, int num)
		{
			if (index < 0 || index >= size())
				throw out_of_range("索引越界");
			arr[index] = num;
		}

		// 扩容
		void extendCapacity()
		{
			// 新建一个长度为原数组 extendRatio 倍的新数组
			int newCapacity = capacity() * extendRatio;
			int* tmp = arr;
			arr = new int[newCapacity];
			// 将原数组中的所有元素复制到新数组
			for (int i = 0; i < size(); i++)
				arr[i] = tmp[i];
			// 释放内存
			delete[]tmp;
			arrCapacity = newCapacity;
		}

		// 在尾部添加元素
		void add(int num)
		{
			// 元素数量超出容量的时候，扩容
			if (size() == capacity())
				extendCapacity();
			arr[size()] = num;
			// 更新元素数量
			arrSize++;
		}

		// 在中间插入元素
		void insert(int index, int num)
		{
			if (index < 0 || index >= size())
				throw out_of_range("索引越界");
			// 元素数量超出容量的时候，扩容
			if (size() == capacity())
				extendCapacity();
			// 将索引 index 以及以后的元素都向后移动一位
			for (int i = size() - 1; i >= index; i--)
				arr[i + 1] = arr[i];
			arr[index] = num;
			// 更新元素数量
			arrSize++;
		}

		// 删除元素
		int remove(int index)
		{
			if (index < 0 || index >= size())
				throw out_of_range("索引越界");
			int num = arr[index];
			// 索引 i 之后的元素都向前移动一位
			for (int i = index; i < size() - 1; i++)
				arr[i] = arr[i + 1];
			// 更新元素数量
			arrSize--;
			// 返回删除的元素
			return num;
		}

		// 将列表转化为 vector 用于打印
		vector<int> toVector()
		{
			// 仅转化为有效长度范围内的列表元素
			vector<int> vec(size());
			for (int i = 0; i < size(); i++)
				vec[i] = arr[i];

			return vec;
		}

};

int main()
{
	// 初始化各个节点
	ListNode* n0 = new ListNode(1);
	ListNode* n1 = new ListNode(3);
	ListNode* n2 = new ListNode(2);
	ListNode* n3 = new ListNode(5);
	ListNode* n4 = new ListNode(4);
	// 构建各个节点之间的引用
	n0->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	List();
	cout << endl;
	cout << endl;

	cout << "下面是实现MyList类：" << endl;
	// MyList类
	MyList myList;

	// 添加元素
	myList.add(1);
	myList.add(2);
	myList.add(3);
	myList.add(4);
	myList.add(5);

	// 访问元素
	cout << "访问元素" << endl;
	std::cout << "Element at index 2: " << myList.get(2) << std::endl;


	// 更新元素
	cout << "更新元素" << endl;
	myList.set(3, 10);
	std::cout << "Updated element at index 3: " << myList.get(3) << std::endl;

	// 插入元素
	cout << "插入元素" << endl;
	myList.insert(1, 20);
	std::cout << "List after inserting 20 at index 1: ";
	for (int i = 0; i < myList.size(); i++) {
		std::cout << myList.get(i) << " ";
	}
	std::cout << std::endl;

	// 删除元素
	cout << "删除元素" << endl;
	int removedElement = myList.remove(4);
	std::cout << "Removed element at index 4: " << removedElement << std::endl;
	std::cout << "List after removing element at index 4: ";
	for (int i = 0; i < myList.size(); i++) {
		std::cout << myList.get(i) << " ";
	}
	std::cout << std::endl;

	// 将列表转化为 vector 并打印
	cout << "将列表转化为 vector 并打印" << endl;
	std::vector<int> myVector = myList.toVector();
	std::cout << "List as vector: ";
	for (const auto& num : myVector) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
	
	return 0;
}