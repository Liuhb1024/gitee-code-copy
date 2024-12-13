#define _CRT_SECURE_NO_WARNINGS 1
//leetcode1017.��������ת��
char* baseNeg2(int n) {
    if (n == 0) {
        return "0";
    }
    int bits[32];
    memset(bits, 0, sizeof(bits));
    for (int i = 0; i < 32 && n != 0; i++) {
        if (n & 1) {
            bits[i]++;
            if (i & 1) {
                bits[i + 1]++;
            }
        }
        n >>= 1;
    }
    int carry = 0;
    for (int i = 0; i < 32; i++) {
        int val = carry + bits[i];
        bits[i] = val & 1;
        carry = (val - bits[i]) / (-2);
    }
    int pos = 31;
    char* res = (char*)calloc(sizeof(char), 32);
    while (pos >= 0 && bits[pos] == 0) {
        pos--;
    }
    int i = 0;
    while (pos >= 0) {
        res[i] = bits[pos] + '0';
        pos--;
        i++;
    }
    return res;
}

