#define _CRT_SECURE_NO_WARNINGS 1
static int inf = 0x3f3f3f3f;

int min(int a, int b) {
    return a < b ? a : b;
}

int get(int l, int r, int t, int*** d, int* sum, int k) {
    // 若 d[l][r][t] 不为 -1，表示已经在之前的递归被求解过，直接返回答案
    if (d[l][r][t] != -1) {
        return d[l][r][t];
    }
    // 当石头堆数小于 t 时，一定无解
    if (t > r - l + 1) {
        return inf;
    }
    if (t == 1) {
        int res = get(l, r, k, d, sum, k);
        if (res == inf) {
            return d[l][r][t] = inf;
        }
        return d[l][r][t] = res + (sum[r] - (l == 0 ? 0 : sum[l - 1]));
    }
    int val = inf;
    for (int p = l; p < r; p += (k - 1)) {
        val = min(val, get(l, p, 1, d, sum, k) + get(p + 1, r, t - 1, d, sum, k));
    }
    return d[l][r][t] = val;
}

int mergeStones(int* stones, int stonesSize, int k) {
    int n = stonesSize;
    if ((n - 1) % (k - 1) != 0) {
        return -1;
    }
    int sum[n];
    int*** d = (int***)malloc(sizeof(int**) * n);
    memset(sum, 0, sizeof(sum));
    for (int i = 0; i < n; i++) {
        d[i] = (int**)malloc(sizeof(int*) * n);
        for (int j = 0; j < n; j++) {
            d[i][j] = (int*)malloc(sizeof(int) * (k + 1));
            memset(d[i][j], 0xff, sizeof(int) * (k + 1));
        }
    }

    // 初始化
    for (int i = 0, s = 0; i < n; i++) {
        d[i][i][1] = 0;
        s += stones[i];
        sum[i] = s;
    }
    int res = get(0, n - 1, 1, d, sum, k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            free(d[i][j]);
        }
        free(d[i]);
    }
    return res;
}
