#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    char arr[101] = { 0 };
    //scanf("%s", arr);
    gets(arr);
    printf("%s\n", arr);
    return 0;
}

//https://www.nowcoder.com/practice/22948c2cad484e0291350abad86136c3?tpId=37&&tqId=21331&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking

#include <stdio.h>

int main()
{
    //����
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    //����С������
    //1
    /*
    int m = a>b?a:b;
    while(m%a != 0 || m%b!=0)
    {
        m++;
    }*/
    //2
    int i = 1;
    while (i * a % b != 0)
    {
        i++;
    }
    //��ӡ
    //printf("%d\n", m);
    printf("%d\n", i * a);
    return 0;
}



//https://www.nowcoder.com/practice/ee5de2e7c45a46a090c1ced2fdc62355?tpId=85&&tqId=29867&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking

#include <stdio.h>
#include <assert.h>

void reverse(char* left, char* right)
{
    assert(left && right);
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}


int main()
{
    char arr[101] = { 0 };//abcdef
    //����
    gets(arr);
    //����
    int len = strlen(arr);
    //1. ���������ַ���
    reverse(arr, arr + len - 1);
    //abc def\0
    //2. ����ÿ������
    char* cur = arr;
    while (*cur)
    {
        //��һ������
        char* start = cur;
        while (*cur != ' ' && *cur != '\0')
        {
            cur++;
        }
        reverse(start, cur - 1);
        if (*cur == ' ')
            cur++;
    }
    //��ӡ
    printf("%s\n", arr);
    return 0;
}