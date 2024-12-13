#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 2);
	SLPushFront(&plist, 3);
	SLPushFront(&plist, 4);

	/*plist = SLPushFront(plist, 1);
	plist = SLPushFront(plist, 2);
	plist = SLPushFront(plist, 3);
	plist = SLPushFront(plist, 4);*/

	SLTPrint(plist);

	SLPushBack(&plist, 5);
	SLTPrint(plist);
}

void TestSList2()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);
	SLTPrint(plist);

	SLPopBack(&plist);
	SLTPrint(plist);
	SLPopBack(&plist);
	SLTPrint(plist);
	SLPopBack(&plist);
	SLTPrint(plist);
	SLPopBack(&plist);
	SLTPrint(plist);

	//SLPopBack(&plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);
	SLTPrint(plist);

	SLTNode* pos = STFind(plist, 3);
	if (pos)
		pos->data = 30;
	SLTPrint(plist);
}


void TestSList4()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);
	SLTPrint(plist);

	SLTNode* pos = STFind(plist, 3);
	if (pos)
	{
		SLInsert(&plist, pos, 30);
	}
	SLTPrint(plist);

	pos = STFind(plist, 2);
	if (pos)
	{
		SLInsertAfter(pos, 20);
	}
	SLTPrint(plist);

	pos = STFind(plist, 2);
	if (pos)
	{
		SLErase(&plist, pos);
	}
	SLTPrint(plist);
}

//int main()
//{
//	TestSList4();
//
//	return 0;
//}


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode
{
	int val;
	struct ListNode* next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
	struct ListNode* prev = NULL, * cur = head;
	while (cur)
	{
		if (cur->val == val)
		{
			prev->next = cur->next;
			free(cur);
			cur = prev->next;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}

	return head;
}

int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	assert(n1);
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	assert(n2);
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	assert(n3);
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	assert(n4);
	n1->val = 7;
	n2->val = 7;
	n3->val = 7;
	n4->val = 7;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	n1 = removeElements(n1, 7);

	return 0;
}

// 形参的改变不影响实参
//void func1(int* p)
//{
//	*p = 10;
//}
//
//void func2(int** pp)
//{
//	*pp = (int*)malloc(sizeof(int)*10);
//}
//
//void func3(SLTNode* pnode)
//{
//	pnode->next = NULL;
//}
//
//void func4(SLTNode** ppnode)
//{
//	*ppnode = NULL;
//}

//int main()
//{
//	//TestSList2();
//	// 要改变int，传int的地址
//	int a = 0;
//	func1(&a);
//
//	// 要改变int*，传int*的地址
//	int* ptr = NULL;
//	func2(&ptr);
//
//	// 要改变结构体，传结构体的地址
//	SLTNode node;
//	func3(&node);
//
//	// 要改变结构体指针，传结构体的指针的地址
//	SLTNode* pnode;
//	func3(&pnode);
//
//	return 0;
//}

//void Swapi(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//void Swappi(int** pp1, int** pp2)
//{
//	int* tmp = *pp1;
//	*pp1 = *pp2;
//	*pp2 = tmp;
//}
//
//int main()
//{
//	TestSList1();
//
//	int a = 0, b = 1;
//	Swapi(&a, &b);
//
//	int* px = &a, * py = &b;
//	Swappi(&px, &py);
//
//	return 0;
//}