#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 2);
	SLPushFront(&plist, 3);
	SLPushFront(&plist, 4);

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

void TestSList2()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);
	SLTPrint(plist);
}

int main()
{
	TestSList2();

	return 0;
}

// �βεĸı䲻Ӱ��ʵ��
void func1(int* p)
{
	*p = 10;
}

void func2(int** pp)
{
	*pp = (int*)malloc(sizeof(int) * 10);
}

void func3(SLTNode* pnode)
{
	pnode->next = NULL;
}

void func4(SLTNode** ppnode)
{
	*ppnode = NULL;
}

//int main()
//{
//	//TestSList2();
//	// Ҫ�ı�int����int�ĵ�ַ
//	int a = 0;
//	func1(&a);
//
//	// Ҫ�ı�int*����int*�ĵ�ַ
//	int* ptr = NULL;
//	func2(&ptr);
//
//	// Ҫ�ı�ṹ�壬���ṹ��ĵ�ַ
//	SLTNode node;
//	func3(&node);
//
//	// Ҫ�ı�ṹ��ָ�룬���ṹ���ָ��ĵ�ַ
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