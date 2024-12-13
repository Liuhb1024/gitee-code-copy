#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#define eleType int

using namespace std;

struct SequentialList {
	eleType* elements;
	int size;
	int capacity;
};

// 初始化代码
void initializeList(SequentialList* list, int capacity) {
	list->elements = new eleType[capacity];
	list->size = 0;
	list->capacity = capacity;
}

// 销毁
void destroyList(SequentialList* list) {
	delete[]list->elements;
}

// 大小
int size(SequentialList* list) {
	return list->size;
}

// 判空
bool isEmpty(SequentialList* list) {
	return list->size == 0;
}

// 插入
void insert(SequentialList* list, int index, eleType element) {
	if (index < 0 || index > list->size) {
		throw std::invalid_argument("Invalid_index");
	}
	if (list->size == list->capacity) {
		// 扩容
		int newCapacity = list->capacity * 2;
		eleType* newElements = new eleType[newCapacity];
		for (int i = 0; i < list->size; ++i) {
			newElements[i] = list->elements[i];
		}
		delete[]list->elements;
		list->elements = newElements;
		list->capacity = newCapacity;
	}
	for (int i = list->size; i > index; --i) {
		list->elements[i] = list->elements[i - 1];
	}
	list->elements[index] = element;
	list->size++;
}

// 元素删除
void deleteElement(SequentialList* list, int index) {
	if (index < 0 || index >= list->size)
		throw std::invalid_argument("Invalid_index");
	for (int i = index; i < list->size; ++i)
		list->elements[i] = list->elements[i + 1];
	list->size--;
}

// 查找
int findElement(SequentialList* list, eleType element) {
	for (int i = 0; i < list->size; ++i) {
		if (list->elements[i] == element)
			return i;
	}
	return -1;
}

// 元素索引
eleType getElement(SequentialList* list, int index) {
	if (index < 0 || index >= list->size)
		// 这里解释一下 因为下表是从 0-index-1,所以当 index=size 的时候该元素是不存在的 
		throw std::invalid_argument("Incalid_index");
	return list->elements[index];
}

// 修改元素
void updateElement(SequentialList* list, int index, eleType value) {
	if (index < 0 || index >= list->size)
		// 这里解释一下 因为下表是从 0-index-1,所以当 index=size 的时候该元素是不存在的 
		throw std::invalid_argument("Incalid_index");
	list->elements[index] = value;
}

// 测试
int main()
{
	SequentialList myList;
	initializeList(&myList, 10);
	for (int i = 0; i < 10; ++i)
		insert(&myList, i, i * 10);
	cout << "Size: " << size(&myList) << endl;
	cout << "Is empty: " << isEmpty(&myList) << endl;
	for (int i = 0; i < size(&myList); i++)
		cout << getElement(&myList, i) << " ";
	cout << endl;

	deleteElement(&myList, 5);
	updateElement(&myList, 1, 1314);
	for (int i = 0; i < size(&myList); i++)
		cout << getElement(&myList, i) << " ";
	cout << endl;

	int idx = findElement(&myList, 20);
	updateElement(&myList, idx, 520);
	for (int i = 0; i < size(&myList); i++)
		cout << getElement(&myList, i) << " ";
	cout << endl;

	destroyList(&myList);
	return 0;
}
