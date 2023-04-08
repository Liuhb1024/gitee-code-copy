#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//模拟实现strlen

int my_strlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

//模拟实现strcpy

//1.参数顺序
//2.函数的功能，停止条件
//3.assert
//4.const修饰指针
//5.函数返回值
//6.题目出自《高质量C/C++编程》书籍最后的试题部分
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}


//模拟实现strcmp
int my_strcmp(const char* src, const char* dst)
{
	int ret = 0;
	assert(src != NULL);
	assert(dest != NULL);
	while (!(ret = *(unsigned char*)src - *(unsigned char*)dst) && *dst)
		++src, ++dst;
	​
		if (ret < 0)
			ret = -1;
		else if (ret > 0)
			ret = 1;
	​
		return(ret);
}

//模拟实现strcat
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

//模拟实现strstr
char* strstr(const char* str1, const char* str2)
{
	char* cp = (char*)str1;
	char* s1, * s2;
	if (!*str2)
		return((char*)str1);
	while (*cp)
	{
		s1 = cp;
		s2 = (char*)str2;
		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;
		if (!*s2)
			return(cp);
		cp++;
	}
	return(NULL);
}

//模拟实现strncpy
char* mystrncpy(char* dst, const char* src, size_t n)
{
	int i;
	for (i = 0; src[i] && i < n; i++)
	{
		dst[i] = src[i];
	}

	if (i < n)
	{
		dst[i] = 0;
	}
	return dst;
}

//模拟实现srtncat
char* mystrncat(char* dst, const char* src, size_t n)
{
	char* tmp = dst;
	while (*dst)
	{
		dst++;
	}
	int i;
	for (i = 0; src[i] && i < n; i++)
	{
		dst[i] = src[i];
	}
	dst[i] = 0;
	return tmp;
}


//模拟实现atoi
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//VALID 表示结果合法
//INVALID 表示结果非法
enum State
{
	VALID,//0
	INVALID//1
};
//默认结果可能非法，当正确转换后再改为合法
enum State state = INVALID;
​
int my_atoi(char* str)
{
	int flag = 1;
	long long ret = 0;
	assert(str);
	state = INVALID;
	//跳过空白字符
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '\0')
	{
		return 0;
	}
	//跳过正负号
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	//开始转换数字字符直到非数字字符
	while (isdigit(*str))
	{
		ret = ret * 10 + flag * (*str - '0');
		if ((ret > INT_MAX) || (ret < INT_MIN))
		{
			return 0;
		}
		str++;
	}
	//正常停止
	if (*str == '\0')
	{
		state = VALID;
		return (int)ret;
	}
	else
	{
		//遇到非数字字符
		return (int)ret;
	}
}​
int main()
{
	char* p = "-1212212121212";
	printf("%d\n", my_atoi(p));
	return 0;
}