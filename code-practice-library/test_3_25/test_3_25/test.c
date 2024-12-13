#define _CRT_SECURE_NO_WARNINGS 1

//leecode 1032.�ַ���

#define MAX_QUEUE_SIZE 81920
#include<stdio.h>
typedef struct TrieNode {
    struct TrieNode* children[26];
    struct TrieNode* fail;
    bool isEnd;
}TrieNode;
typedef struct {
    TrieNode* root;
    TrieNode* temp;
} StreamChecker;

TrieNode* trieNodeCreat() {
    TrieNode* obj = (TrieNode*)malloc(sizeof(TrieNode));
    for (int i = 0; i < 26; i++) {
        obj->children[i] = NULL;
    }
    obj->isEnd = false;
    obj->fail = NULL;
    return obj;
}

void freeTrieNode(TrieNode* root) {
    for (int i = 0; i < 26; i++) {
        if (root->children[i]) {
            freeTrieNode(root->children[i]);
        }
    }
    free(root);
}

StreamChecker* streamCheckerCreate(char** words, int wordsSize) {
    StreamChecker* obj = (StreamChecker*)malloc(sizeof(StreamChecker));
    obj->root = trieNodeCreat();
    obj->temp = obj->root;
    for (int i = 0; i < wordsSize; i++) {
        TrieNode* cur = obj->root;
        for (int j = 0; words[i][j] != '\0'; j++) {
            int index = words[i][j] - 'a';
            if (cur->children[index] == NULL) {
                cur->children[index] = trieNodeCreat();
            }
            cur = cur->children[index];
        }
        cur->isEnd = true;
    }
    obj->root->fail = obj->root;
    TrieNode* queue[MAX_QUEUE_SIZE];
    int head = 0;
    int tail = 0;
    for (int i = 0; i < 26; i++) {
        if (obj->root->children[i] != NULL) {
            obj->root->children[i]->fail = obj->root;
            queue[tail++] = obj->root->children[i];
        }
        else {
            obj->root->children[i] = obj->root;
        }
    }
    while (head != tail) {
        TrieNode* node = queue[head++];
        node->isEnd = node->isEnd || node->fail->isEnd;
        for (int i = 0; i < 26; i++) {
            if (node->children[i] != NULL) {
                node->children[i]->fail = node->fail->children[i];
                queue[tail++] = node->children[i];
            }
            else {
                node->children[i] = node->fail->children[i];
            }
        }
    }
    return obj;
}

bool streamCheckerQuery(StreamChecker* obj, char letter) {
    obj->temp = obj->temp->children[letter - 'a'];
    return obj->temp->isEnd;
}

void streamCheckerFree(StreamChecker* obj) {
    free(obj);
}