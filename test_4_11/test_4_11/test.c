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

int main()
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

	return 0;
}