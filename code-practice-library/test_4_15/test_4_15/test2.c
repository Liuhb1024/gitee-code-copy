#define _CRT_SECURE_NO_WARNINGS 1
//// 计算斐波那契递归Fib的时间复杂度？
//long long Fib(size_t N)
//{
//    if (N < 3)
//        return 1;
//
//    return Fib(N - 1) + Fib(N - 2);
//}
//
//void Func1()
//{
//    int a = 0;
//    printf("%p\n", &a);
//}
//
//void Func2()
//{
//    int b = 0;
//    printf("%p\n", &b);
//}
//
//int main()
//{
//    //printf("%d\n", Fib(10));
//    int a = 0;
//    printf("%p\n", &a);
//
//    Func1();
//    Func2();
//
//    return 0;
//}

#include "SeqList.h"

void TestSeqList1()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPushBack(&s, 6);
	SLPushBack(&s, 6);
	SLPushBack(&s, 6);
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList2()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushFront(&s, 5);
	SLPushFront(&s, 6);
	SLPushFront(&s, 6);
	SLPushFront(&s, 7);
	SLPushFront(&s, 6);
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList3()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushFront(&s, 5);
	SLPushFront(&s, 6);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	//SLPopBack(&s);
	SLPrint(&s);

	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList4()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPrint(&s);

	SLPopFront(&s);
	SLPopFront(&s);
	SLPrint(&s);

	SLPopFront(&s);
	SLPopFront(&s);
	SLPrint(&s);

	//SLPopFront(&s);
	//SLPopFront(&s);
	//SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList5()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPrint(&s);

	SLInsert(&s, 2, 30);
	SLPrint(&s);

	//SLInsert(&s, 20, 30);
	//SLPrint(&s);

	//SLInsert(&s, -20, 30);
	//SLPrint(&s);

	SLErase(&s, 3);
	SLPrint(&s);

	SLPopFront(&s);
	SLPrint(&s);

	SLPopBack(&s);
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList6()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPrint(&s);

	int pos = SLFind(&s, 6);
	if (pos != -1)
	{
		SLErase(&s, pos);
	}
	SLPrint(&s);

	SLDestroy(&s);
}

void TestSeqList7()
{
	//SL* s = NULL;
	//SLPushBack(s, 1);
	//SLPushBack(s, 2);
	//SLPushBack(s, 3);
	//SLPrint(s);

	//SLDestroy(s);
}

void menu()
{
	printf("***************************************\n");
	printf("1、尾插数据  2、尾删数据\n");
	printf("3、头插数据  4、头删数据\n");
	printf("5、打印数据  -1、退出\n");
	printf("***************************************\n");
}

int main()
{
	int option = 0;
	SL s;
	SLInit(&s);
	while (option != -1)
	{
		menu();
		printf("请输入你的操作:>");
		scanf("%d", &option);
		if (option == 1)
		{
			/*printf("请输入要尾插的数据，以-1结束:");
			int x = 0;
			scanf("%d", &x);
			while (x != -1)
			{
				SLPushBack(&s, x);
				scanf("%d", &x);
			}*/

			int n = 0;
			printf("请输入要尾插的数据个数，再依次输入要插入的数据:");
			scanf("%d", &n);

			int x = 0;
			while (n > 0)
			{
				scanf("%d", &x);
				SLPushBack(&s, x);
				n--;
			}
		}
		else if (option == 5)
		{
			SLPrint(&s);
		}
		else if (option == -1)
		{
			break;
		}
		else
		{
			printf("无此选项,请重新输入\n");
		}
	}

	SLDestroy(&s);

	return 0;
}