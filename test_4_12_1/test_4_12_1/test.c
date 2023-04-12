#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int** fun(int n) {
    int** s = (int**)malloc(n * sizeof(int*));
    while (n--)
        s[n] = (int*)malloc(n * sizeof(int));
    return s;
}