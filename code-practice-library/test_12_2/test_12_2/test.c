#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

// 合并两个顺序表
typedef struct {
    int* data;
    int size;
    int maxSize;
} SqList;

int Merge(SqList A, SqList B, SqList* C)
{
    if (A.size + B.size > C->maxSize)
        return 0;

    int i = 0, j = 0, k = 0;
    while (i < A.size && j < B.size)
    {
        if (A.data[i] <= B.data[j])
            C->data[k++] = A.data[i++];
        else
            C->data[k++] = B.data[j++];
    }
    while (i < A.size)
        C->data[k++] = A.data[i++];
    while (j < B.size)
        C->data[k++] = B.data[j++];
     
    C->size = k;
    return 1;
}


int main()
{
    SqList A, B, C;
    A.size = 5;
    B.size = 5;
    A.maxSize = 10;
    B.maxSize = 10;
    C.maxSize = B.maxSize + A.maxSize;

    A.data = (int*)malloc(A.size * sizeof(int));
    B.data = (int*)malloc(B.size * sizeof(int));
    C.data = (int*)malloc(C.maxSize * sizeof(int));

    for (int i = 0; i < A.size; i++) {
        A.data[i] = 2 * i + 1;
    }
    for (int i = 0; i < B.size; i++) {
        B.data[i] = 2 * (i + 1);
    }

    if (Merge(A, B, &C)) {
        printf("Merged List: ");
        for (int i = 0; i < C.size; i++) {
            printf("%d ", C.data[i]);
        }
        printf("\n");
    }
    else {
        printf("Merge failed. Resulting list too large.\n");
    }

    free(A.data);
    free(B.data);
    free(C.data);

    return 0;
}