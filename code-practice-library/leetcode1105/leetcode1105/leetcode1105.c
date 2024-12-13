#define _CRT_SECURE_NO_WARNINGS 1

//leetcode1105.������
int minHeightShelves(int** books, int booksSize, int* booksColSize, int shelfWidth) {
    int n = booksSize;
    int* dp = (int*)malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; ++i) {
        dp[i] = 1000000;
    }
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
        int maxHeight = 0, curWidth = 0;
        for (int j = i; j >= 0; --j) {
            curWidth += books[j][0];
            if (curWidth > shelfWidth) {
                break;
            }
            maxHeight = fmax(maxHeight, books[j][1]);
            dp[i + 1] = fmin(dp[i + 1], dp[j] + maxHeight);
        }
    }
    return dp[n];
}
