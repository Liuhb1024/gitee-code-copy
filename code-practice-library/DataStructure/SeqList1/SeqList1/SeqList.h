#pragma once
#include<stdio.h>
#include<stdlib.h>

//静态顺序表
//缺点：给小了不够用，给多了浪费
//#define N 10
//typedef int SLDatatype;//数据类型
//struct  SeqList
//{
//	int a[N];
//	int size;
//};


//动态顺序表
//typedef double SLDatatype;
typedef int SLDatatype;
typedef struct SeqList;
typedef struct SeqList
{
	SLDatatype* a;
	int size;     //存储的有效数据的个数
	int capacity; //容量
} SL;

void SLInit(SL* psl);
void SLDestroy(SL* psl);

//STL命名风格
void SLPushBack(SL* psl, SLDatatype x);
void SLPushFront(SL* psl, SLDatatype x);
void SLPopBack(SL* psl);
void SLPopFront(SL* psl);

