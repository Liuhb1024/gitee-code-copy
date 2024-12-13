#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ������ 6.3 ��ϣ�㷨
// TODO

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

// ��ϣ�㷨�����
/*
   �ӷ���ϣ �������ÿ���ַ��� ASCII �������ӣ����õ����ܺ���Ϊ��ϣֵ��
   �˷���ϣ ���ó˷��Ĳ�����ԣ�ÿ�ֳ���һ���������������ַ��� ASCII ���ۻ�����ϣֵ�С�
   ����ϣ ���������ݵ�ÿ��Ԫ��ͨ���������ۻ���һ����ϣֵ�С�
   ��ת��ϣ ��ÿ���ַ��� ASCII ���ۻ���һ����ϣֵ�У�ÿ���ۻ�֮ǰ����Թ�ϣֵ������ת������
*/

// �ӷ���ϣ
int addHash(string key)
{
	long long hash = 0;
	const int MODULUS = 1000000007;
	for (unsigned char c : key)
		hash = (hash + (int)c) % MODULUS;
	return (int)hash;

}

// �˷���ϣ
int mulHash(string key)
{
	long long hash = 0;
	const int MODULUS = 1000000007;
	for (unsigned char c : key)
		hash = (31 * hash + (int)c) % MODULUS;
	return (int)hash;
}

// ����ϣ
int xorHash(string key)
{
	int hash = 0;
	const int MODULUS = 1000000007;
	for (unsigned char c : key)
		hash ^= (int)c;
	return hash & MODULUS;
}

// ��ת��ϣ
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