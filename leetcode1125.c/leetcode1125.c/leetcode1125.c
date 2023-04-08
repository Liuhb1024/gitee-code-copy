#define _CRT_SECURE_NO_WARNINGS 1
typedef struct {
    char* key;
    int val;
    UT_hash_handle hh;
} HashItem;

HashItem* hashFindItem(HashItem** obj, char* key) {
    HashItem* pEntry = NULL;
    HASH_FIND_STR(*obj, key, pEntry);
    return pEntry;
}

bool hashAddItem(HashItem** obj, char* key, int val) {
    if (hashFindItem(obj, key)) {
        return false;
    }
    HashItem* pEntry = (HashItem*)malloc(sizeof(HashItem));
    pEntry->key = key;
    pEntry->val = val;
    HASH_ADD_STR(*obj, key, pEntry);
    return true;
}

bool hashSetItem(HashItem** obj, char* key, int val) {
    HashItem* pEntry = hashFindItem(obj, key);
    if (!pEntry) {
        hashAddItem(obj, key, val);
    }
    else {
        pEntry->val = val;
    }
    return true;
}

int hashGetItem(HashItem** obj, char* key, int defaultVal) {
    HashItem* pEntry = hashFindItem(obj, key);
    if (!pEntry) {
        return defaultVal;
    }
    return pEntry->val;
}

void hashFree(HashItem** obj) {
    HashItem* curr = NULL, * tmp = NULL;
    HASH_ITER(hh, *obj, curr, tmp) {
        HASH_DEL(*obj, curr);
        free(curr);
    }
}

int* smallestSufficientTeam(char** req_skills, int req_skillsSize, char*** people, int peopleSize, int* peopleColSize, int* returnSize) {
    int n = req_skillsSize, m = peopleSize;
    HashItem* skill_index = NULL;
    for (int i = 0; i < n; ++i) {
        hashAddItem(&skill_index, req_skills[i], i);
    }

    int* dp[1 << n], dpColSize[1 << n];
    memset(dpColSize, 0, sizeof(dpColSize));
    for (int i = 0; i < (1 << n); i++) {
        dp[i] = NULL;
    }
    dp[0] = (int*)calloc(m, sizeof(int));
    for (int i = 0; i < m; ++i) {
        int cur_skill = 0;
        for (int j = 0; j < peopleColSize[i]; j++) {
            cur_skill |= 1 << hashGetItem(&skill_index, people[i][j], 0);
        }
        for (int prev = 0; prev < (1 << n); ++prev) {
            if (dp[prev] == NULL) {
                continue;
            }
            int comb = prev | cur_skill;
            if (dp[comb] == NULL || dpColSize[prev] + 1 < dpColSize[comb]) {
                dp[comb] = (int*)calloc(m, sizeof(int));
                memcpy(dp[comb], dp[prev], sizeof(int) * dpColSize[prev]);
                dpColSize[comb] = dpColSize[prev];
                dp[comb][dpColSize[comb]++] = i;
            }
        }
    }
    for (int i = 0; i < (1 << n) - 1; i++) {
        if (dp[i]) {
            free(dp[i]);
        }
    }
    *returnSize = dpColSize[(1 << n) - 1];
    return dp[(1 << n) - 1];
}
