#define _CRT_SECURE_NO_WARNINGS 1
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int commonFactors(int a, int b) {
    int ans = 0;
    int c = MIN(a, b);
    for (int x = 1; x <= c; ++x) {
        if (a % x == 0 && b % x == 0) {
            ++ans;
        }
    }
    return ans;
}

����