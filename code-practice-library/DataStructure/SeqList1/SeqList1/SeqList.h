#pragma once
#include<stdio.h>
#include<stdlib.h>

//��̬˳���
//ȱ�㣺��С�˲����ã��������˷�
//#define N 10
//typedef int SLDatatype;//��������
//struct  SeqList
//{
//	int a[N];
//	int size;
//};


//��̬˳���
//typedef double SLDatatype;
typedef int SLDatatype;
typedef struct SeqList;
typedef struct SeqList
{
	SLDatatype* a;
	int size;     //�洢����Ч���ݵĸ���
	int capacity; //����
} SL;

void SLInit(SL* psl);
void SLDestroy(SL* psl);

//STL�������
void SLPushBack(SL* psl, SLDatatype x);
void SLPushFront(SL* psl, SLDatatype x);
void SLPopBack(SL* psl);
void SLPopFront(SL* psl);

