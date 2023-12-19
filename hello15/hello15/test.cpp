#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ��ʮһ�� ����

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<unordered_map>

using namespace std;

// ѡ������
// ����ԭ������һ��ѭ����ÿ�ִ�δ��������ѡ����СԪ�أ�����ŵ������������ĩβ
void selectionSort(vector<int> &nums)
{
	int n = nums.size();
	// ��ѭ�� δ��������Ϊ [i, n - 1]
	for (int i = 0; i < n - 1; i++)
	{
		// ��ѭ�����ҵ�δ�����������СԪ��
		int k = i;
		for (int j = i + 1; j < n; j++)
		{
			if (nums[j] < nums[k])
				k = i;// ��¼��СԪ������
		}
		// ������СԪ����δ����������׸�Ԫ�ؽ���
		swap(nums[i], nums[k]);

	}
}

// ð������
void bubbleSort(vector<int>& nums)
{
	// ��ѭ����δ��������Ϊ [0, i]
	for (int i = nums.size() - 1; i > 0; i--)
	{
		// ��ѭ������δ�������� [0,i] �е����Ԫ�ؽ���������������Ҷ�
		for (int j = 0; j < i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				// ���� nums[j] �� nums[j+1]
				// ����ʹ���� std::swap()����
				swap(nums[j], nums[j + 1]);
			}
		}
	}
}

// ð�����򣨱�־�Ż���
void bubbleSortWithFlag(vector<int>& nums)
{
	// ��ѭ����δ��������Ϊ [0,i]
	for (int i = nums.size() - 1; i > 0; i--)
	{
		bool flag = false; // ��ʼ����־λ
		// ��ѭ��:��δ�������� [0,i] �е����Ԫ�ؽ���������������Ҷ�
		for (int j = 0; j < i; j++)
		{
			if (nums[j] > nums[j + 1])
			{	// ���� nums[j] �� nums[j + 1]
				// ����ʹ���� std::swap() ����
				swap(nums[j], nums[j + 1]);
				flag = true; // ��¼����Ԫ��
			}
		}
		if (!flag)
			break; // ����ð��δ�����κ�Ԫ�أ�ֱ������

	}
}

// ��������
void insertionSort(vector<int>& nums)
{
	// ��ѭ����������Ԫ������Ϊ 1��2��3.....
	for (int i = 1; i < nums.size(); i++)
	{
		int base = nums[i], j = i - 1;
		// ��ѭ������ base ���뵽�����򲿷ֵ���ȷλ��
		while (j >= 0 && nums[j] > base)
		{
			nums[j + 1] = nums[j]; // �� nums[j] �����ƶ�һλ
			j--;
		}
		nums[j + 1] = base; // �� base ��ֵ����ȷλ��
	}
}

int main()
{

	return 0;
}