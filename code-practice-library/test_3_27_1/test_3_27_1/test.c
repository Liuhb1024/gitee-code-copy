#define _CRT_SECURE_NO_WARNINGS 1

//1638.统计只差一个字符的子串数目
int countSubstrings(char* s, char* t) {
    int m = strlen(s), n = strlen(t);
    int ans = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int diff = 0;
            for (int k = 0; i + k < m && j + k < n; k++) {
                diff += s[i + k] == t[j + k] ? 0 : 1;
                if (diff > 1) {
                    break;
                }
                else if (diff == 1) {
                    ans++;
                }
            }
        }
    }
    return ans;
}