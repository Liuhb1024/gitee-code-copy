#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第六章 6.3 哈希算法
// TODO

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

// 哈希算法的设计
/*
   加法哈希 对输入的每个字符的 ASCII 码进行相加，将得到的总和作为哈希值。
   乘法哈希 利用乘法的不相关性，每轮乘以一个常数，将各个字符的 ASCII 码累积到哈希值中。
   异或哈希 将输入数据的每个元素通过异或操作累积到一个哈希值中。
   旋转哈希 将每个字符的 ASCII 码累积到一个哈希值中，每次累积之前都会对哈希值进行旋转操作。
*/

// 加法哈希
int addHash(string key)
{
	long long hash = 0;
	const int MODULUS = 1000000007;
	for (unsigned char c : key)
		hash = (hash + (int)c) % MODULUS;
	return (int)hash;

}

// 乘法哈希
int mulHash(string key)
{
	long long hash = 0;
	const int MODULUS = 1000000007;
	for (unsigned char c : key)
		hash = (31 * hash + (int)c) % MODULUS;
	return (int)hash;
}

// 异或哈希
int xorHash(string key)
{
	int hash = 0;
	const int MODULUS = 1000000007;
	for (unsigned char c : key)
		hash ^= (int)c;
	return hash & MODULUS;
}

// 旋转哈希
int rotHash(string key)
{
	long long hash = 0;
	const int  MODULUS = 1000000007;
	for (unsigned char c : key)
		hash = ((hash << 4) ^ (hash >> 28) ^ (int)c) % MODULUS;

	return (int)hash;
}
int main()
{

	return 0;
}