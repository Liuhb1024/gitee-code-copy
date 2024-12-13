#define _CRT_SECURE_NO_WARNINGS 1
#define MIN(a, b) ((a) < (b) ? (a) : (b))

char* shortestCommonSupersequence(char* str1, char* str2) {
    int n = strlen(str1), m = strlen(str2);
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; ++i) {
        dp[i][m] = n - i;
    }
    for (int i = 0; i < m; ++i) {
        dp[n][i] = m - i;
    }
    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            if (str1[i] == str2[j]) {
                dp[i][j] = dp[i + 1][j + 1] + 1;
            }
            else {
                dp[i][j] = MIN(dp[i + 1][j], dp[i][j + 1]) + 1;
            }
        }
    }
    char* res = (char*)malloc(sizeof(char) * (m + n + 1));
    int t1 = 0, t2 = 0;
    int pos = 0;
    while (t1 < n && t2 < m) {
        if (str1[t1] == str2[t2]) {
            res[pos++] = str1[t1];
            ++t1;
            ++t2;
        }
        else if (dp[t1 + 1][t2] == dp[t1][t2] - 1) {
            res[pos++] = str1[t1];
            ++t1;
        }
        else if (dp[t1][t2 + 1] == dp[t1][t2] - 1) {
            res[pos++] = str2[t2];
            ++t2;
        }
    }
    if (t1 < n) {
        sprintf(res + pos, "%s", str1 + t1);
    }
    else if (t2 < m) {
        sprintf(res + pos, "%s", str2 + t2);
    }
    else {
        res[pos] = '\0';
    }
    return res;
}

