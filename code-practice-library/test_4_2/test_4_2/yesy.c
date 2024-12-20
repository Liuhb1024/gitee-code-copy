#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct {
    int key;
    int val;
    UT_hash_handle hh;
} HashItem;

HashItem* hashFindItem(HashItem** obj, int key) {
    HashItem* pEntry = NULL;
    HASH_FIND_INT(*obj, &key, pEntry);
    return pEntry;
}

bool hashAddItem(HashItem** obj, int key, int val) {
    if (hashFindItem(obj, key)) {
        return false;
    }
    HashItem* pEntry = (HashItem*)malloc(sizeof(HashItem));
    pEntry->key = key;
    pEntry->val = val;
    HASH_ADD_INT(*obj, key, pEntry);
    return true;
}

int hashGetItem(HashItem** obj, int key, int defaultVal) {
    HashItem* pEntry = hashFindItem(obj, key);
    if (!pEntry) {
        return defaultVal;
    }
    return pEntry->val;
}

bool hashSetItem(HashItem** obj, int key, int val) {
    HashItem* pEntry = hashFindItem(obj, key);
    if (!pEntry) {
        hashAddItem(obj, key, val);
    }
    else {
        pEntry->val = val;
    }
    return true;
}

void hashFree(HashItem** obj) {
    HashItem* curr = NULL, * tmp = NULL;
    HASH_ITER(hh, *obj, curr, tmp) {
        HASH_DEL(*obj, curr);
        free(curr);
    }
}

inline int min(int a, int b) {
    return a < b ? a : b;
}

int dp(int i, int j, int* values, int valuesSize, HashItem** memo) {
    if (i + 2 > j) {
        return 0;
    }
    if (i + 2 == j) {
        return values[i] * values[i + 1] * values[j];
    }
    int key = i * valuesSize + j;
    if (!hashFindItem(memo, key)) {
        int minScore = INT_MAX;
        for (int k = i + 1; k < j; k++) {
            minScore = min(minScore, values[i] * values[k] * values[j] + \
                dp(i, k, values, valuesSize, memo) + \
                dp(k, j, values, valuesSize, memo));
        }
        hashAddItem(memo, key, minScore);
    }
    return hashGetItem(memo, key, 0);
}

int minScoreTriangulation(int* values, int valuesSize) {
    HashItem* memo = NULL;
    int ret = dp(0, valuesSize - 1, values, valuesSize, &memo);
    hashFree(&memo);
    return ret;
}