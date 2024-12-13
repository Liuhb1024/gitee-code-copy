#define _CRT_SECURE_NO_WARNINGS 1

//leetcode
//1637.����֮�䲻�����κε�����ֱ����
#define MAX(a,b) ((a) > (b) ? (a) : (b))

static int cmp(const void* pa, const void* pb) {
    return (*(int**)pa)[0] - (*(int**)pb)[0];
}

int maxWidthOfVerticalArea(int** points, int pointsSize, int* pointsColSize) {
    qsort(points, pointsSize, sizeof(int*), cmp);
    int mx = 0;
    for (int i = 1; i < pointsSize; i++) {
        mx = MAX(points[i][0] - points[i - 1][0], mx);
    }
    return mx;
}

