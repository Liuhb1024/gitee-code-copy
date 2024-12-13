#define _CRT_SECURE_NO_WARNINGS 1
//leecode.1641.ͳ���ֵ���Ԫ���ַ�������Ŀ
int countVowelStrings(int n) {
    int dp[5];
    for (int i = 0; i < 5; i++) {
        dp[i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < 5; j++) {
            dp[j] += dp[j - 1];
        }
    }
    int ret = 0;
    for (int i = 0; i < 5; i++) {
        ret += dp[i];
    }
    return ret;
}