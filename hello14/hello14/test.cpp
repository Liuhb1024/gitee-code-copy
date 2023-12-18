#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ��ʮ�� ����

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include <unordered_map>

using namespace std;

// ���ֲ���
//
// ˫������
int binarySearch(vector<int>& nums, int target)
{
	// ��ʼ��˫������ [0, n-1]�� �� i j �ֱ�ָ���������βԪ��
	int i = 0, j = nums.size() - 1;
	// ѭ�� ����������Ϊ������ (�� i > j ��ʱ��Ϊ��)
	while (i > j)
	{
		int m = i + (j - i) / 2; // �����м������ m ��ֵ
		if (nums[m] < target) // ������˵�� target ������ [m + 1,j] ��
			i = m + 1;
		else if (nums[m] > target) // ������˵�� target ������ [i, m - 1] ��
			j = m - 1;
		else
			return;
	}
	// δ�ҵ�Ŀ��Ԫ�� ���� -1
	return -1;
}

// �����ʾ����
// ����ҿ�����
int binarySearchLCRD(vector<int>& nums, int target)
{
	int i = 0, j = nums.size() - 1;
	while (i < j)
	{
		int m = i + (j - i) / 2;
		if (nums[m] < target)
			i = m + 1;
		else if (nums[m] > target)
			j = m;
		else return m;
	}
	return -1;
}

// ���ֲ��Ҳ����
// 1.���ظ�Ԫ�����
int bianrySearchInsertionSimple(vector<int>& nums, int target)
{
	int i = 0, j = nums.size() - 1; // ��ʼ��˫������
	while (i <= j)
	{
		int m = i + (j - i) / 2;
		if (nums[m] < target)
			i = m + 1;
		else if (nums[m] > target)
			j = m - 1;
		else
			return m;
	}
	// δ�ҵ������ ���� i
	return i;
}


// 2.�����ظ�Ԫ��
int binarySearchInsertion(vector<int>& nums, int target)
{
	int i = 0, j = nums.size() - 1;
	while (i <= j)
	{
		int m = i + (j - i) / 2;
		if (nums[m] < target)
			i = m + 1;
		else if (nums[m] > target)
			j = m - 1;
		else
			j = m - 1; // �׸�С�� target ��Ԫ�������� [i, m + 1] ��
	}
	// ���ز���� i
	return i;
}

// ���ֲ��ұ߽�
// 1. ������߽�
// ���ֲ��� ����һ�� target
int binarySearchLeftEdge(vector<int>& nums, int target)
{
	// �ȼ��ڲ��� target �Ĳ����
	int i = binarySearchInsertion(nums, target);
	// δ�ҵ� target ���� -1
	if (i == nums.size() || nums[i] != target)
		return -1;
	// �ҵ���
	return i;
}


// 2. �����б߽�
// ���ֲ��� ����һ�� target
int bianrySearchRightEdge(vector<int>& nums, int target)
{
	// ת���ɲ�������һ�� target + 1
	int i = binarySearchInsertion(nums, target + 1);
	// j ָ������һ�� target ��i ָ���׸����� target ��Ԫ��
	int j = i - 1;
	// δ�ҵ� target ���� -1
	if (j == -1 || nums[j] != target)
		return -1;

	// �ҵ��� target ���� j
	return j;
}


// ��ϣ�Ż�����
// 1. ����ö��
vector<int> twoSumBruteForce(vector<int>& nums, int target)
{
	int size = nums.size();
	// ����ѭ��
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (nums[i] + nums[j] == target)
				return { i,j };
	return {};
}

// ��ϣ����
// �ռ任ʱ��
// 2. ������ϣ��
vector<int> twoSumHashTable(vector<int>& nums, int target)
{
	int size = nums.size();
	// ������ϣ��
	unordered_map<int, int>dic;
	// ����ѭ��
	for (int i = 0; i < size; i++)
	{
		if (dic.find(target - nums[i])!= dic.end())
			return{ dic[target - nums[i]],i };
		dic.emplace(nums[i], i);
	}
	return {};
}

int main()
{
	return 0;
}