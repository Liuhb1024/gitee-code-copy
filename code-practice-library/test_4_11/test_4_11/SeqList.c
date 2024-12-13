#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//void SLInit(SL* psl)
//{
//	psl->a = NULL;
//	psl->capacity = 0;
//	psl->size = 0;
//}

void SLInit(SL* psl)
{
	psl->a = (SLDatatype*)malloc(sizeof(SLDatatype) * 4);
	if (psl->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	psl->capacity = 4;
	psl->size = 0;
}

void SLDestroy(SL* psl)
{
	free(psl->a);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

void SLPrint(SL* psl)
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* psl)
{
	if (psl->size == psl->capacity)
	{
		SLDatatype* tmp = (SLDatatype*)realloc(psl->a, sizeof(SLDatatype) * psl->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}

		psl->a = tmp;
		psl->capacity *= 2;
	}
}

void SLPushBack(SL* psl, SLDatatype x)
{
	//psl->a[psl->size] = x;
	//psl->size++;

	SLCheckCapacity(psl);

	psl->a[psl->size++] = x;
}

void SLPushFront(SL* psl, SLDatatype x);
void SLPopBack(SL* psl);
void SLPopFront(SL* psl);