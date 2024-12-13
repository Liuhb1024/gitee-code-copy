#define _CRT_SECURE_NO_WARNINGS 1
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

static int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* numMovesStonesII(int* stones, int stonesSize, int* returnSize) {
    qsort(stones, stonesSize, sizeof(int), cmp);
    int* ret = (int*)calloc(sizeof(int), 2);
    *returnSize = 2;
    if (stones[stonesSize - 1] - stones[0] + 1 == stonesSize) {
        return ret;
    }
    int ma = MAX(stones[stonesSize - 2] - stones[0] + 1, stones[stonesSize - 1] - stones[1] + 1) - (stonesSize - 1);
    int mi = stonesSize;
    for (int i = 0, j = 0; i < stonesSize && j + 1 < stonesSize; ++i) {
        while (j + 1 < stonesSize && stones[j + 1] - stones[i] + 1 <= stonesSize) {
            ++j;
        }
        if (j - i + 1 == stonesSize - 1 && stones[j] - stones[i] + 1 == stonesSize - 1) {
            mi = MIN(mi, 2);
        }
        else {
            mi = MIN(mi, stonesSize - (j - i + 1));
        }
    }
    ret[0] = mi;
    ret[1] = ma;
    return ret;
}
