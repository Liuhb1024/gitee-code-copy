#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ��ʮһ�� ����

#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

// ��������:һ�ֻ��ڷ��β��Ե������㷨 
// ���Ĳ����� ���ڱ����֡� Ŀ���ǣ�ѡ��ĳ�������е�Ԫ����Ϊ ����׼���� ������С�ڻ�׼����Ԫ���ƶ�������ߣ���֮�ƶ����ұ�
/*
   ���������
   1. ѡȡ���������Ԫ����Ϊ��׼������ʼ������ָ�� i �� j �ֱ�ָ����������
   2. ����һ��ѭ�� ��ÿ����ʹ�� i(j) �ֱ�Ѱ�ҵ�һ���ջ�׼����(С)��Ԫ�أ�Ȼ�󽻻�������Ԫ��
   3. ѭ��ִ�в��裬ֱ�� i j ����ʱ��ֹͣ ��󽫻�׼������������������ķֽ���
*/

// Ԫ�ؽ���
void swap(vector<int>& nums, int i, int j)
{
	int tmp = nums[i];
	nums[i] = nums[j];
	nums[j] = tmp;
}

// �ڱ�����
int partition(vector<int>& nums, int left, int right)
{
	// �� nums[left] Ϊ��׼��
	int i = left, j = right;
	while (i < j)
	{
		while (i < j && nums[j] >= nums[left])
			j--; // �����������׸�С�ڻ�׼����Ԫ��
		while (i < j && nums[i] <= nums[left])
			i++; // �����������׸����ڻ�׼����Ԫ��
		// ����������Ԫ��
		swap(nums, i, j);
	}
	swap(nums, i, left); // ����׼��������������ķֽ���
	return i; // ���ػ�׼��������
}

// �㷨����
/*
   1. ���ȣ���ԭ����ִ��һ�� ���ڱ����֡� ���õ�δ����������������������
   2. Ȼ�󣬶������������������ֱ�ִ�� ���ڱ����֡�
   3. �����ݹ� ֱ�������鳤��Ϊ 1 ʱ��ֹ���Ӷ�����������������
*/
// ��������
void quickSort(vector<int>& nums, int left, int right)
{
	// �����鳤��Ϊ 1 ʱ��ֹ�ݹ�
	if (left >= right)
		return;
	// �ڱ�����
	int pivot = partition(nums, left, right);
	// �ݹ� �� ��������
	quickSort(nums, left, pivot - 1);
	quickSort(nums, pivot + 1, right);
}

// ��׼���Ż�

// ѡȡ����Ԫ�ص���λ��
int medianThree(vector<int>& nums, int left, int mid, int right)
{
	// �˴�ʹ������������򻯴���
	// ������ 0 ^ 0 = 1 ^ 1  = 0, 0 ^ 1 = 1 ^ 0 = 1
	if ((nums[left] < nums[mid]) ^ (nums[mid] < nums[right]))
		return left;
	else if ((nums[mid] < nums[left]) ^ (nums[mid] < nums[right]))
		return mid;
	else
		return right;
}

// �ڱ����� (����ȡ��ֵ)
int partition(vector<int>& nums, int left, int right)
{
	// ѡȡ������ѡԪ�ص���λ��
	int med = medianThree(nums, left, (left + right) / 2, right);
	// ����λ�������������
	swap(nums, left, med);
	// �� nums[left] Ϊ��׼��
	int i = left, j = right;
	while (i < j)
	{
		while (i < j && nums[j] >= nums[left])
			j--; // �����������׸�С�ڻ�׼����Ԫ��
		while (i < j && nums[i] <= nums[left])
			i++;          // �����������׸����ڻ�׼����Ԫ��
		swap(nums, i, j); // ����������Ԫ��
	}
	swap(nums, i, left); // ����׼����������������ķֽ���
	return i;            // ���ػ�׼��������
}

// ��������β�ݹ��Ż���
void quickSort(vector<int>& nums, int left, int right) {
	// �����鳤��Ϊ 1 ʱ��ֹ
	while (left < right) {
		// �ڱ����ֲ���
		int pivot = partition(nums, left, right);
		// �������������н϶̵��Ǹ�ִ�п�������
		if (pivot - left < right - pivot) {
			quickSort(nums, left, pivot - 1); // �ݹ�������������
			left = pivot + 1;                 // ʣ��δ��������Ϊ [pivot + 1, right]
		}
		else {
			quickSort(nums, pivot + 1, right); // �ݹ�������������
			right = pivot - 1;                 // ʣ��δ��������Ϊ [left, pivot - 1]
		}
	}
}


// �鲢����
// �鲢������һ�ֻ��ڷ��β��Ե������㷨���������׶Σ�
// 1. ���ֽ׶�
//    ͨ���ݹ鲻�ϵؽ�������е㴦�ֿ� �����������������ת��Ϊ���������������
// 2. �ϲ��׶�
//    �������鳤��Ϊ1��ʱ����ֹ���֣���ʼ�ϲ��������Ľ����������϶���������ϲ���һ���ϳ����������飬ֱ������

/* 
  �㷨����
  1. ���������е� mid���ݹ黮���������飨���� [left, mid] �����������飨���� [mid + 1, right] ��
  2. �ݹ�ִ�в��� 1��ֱ�����������䳤��Ϊ 1 ʱΪֹ

  �鲢������������ı����ĵݹ�˳����һ�µ�
  1. ������� �ȵݹ����������ٵݹ����������������ڵ㡣
  2. �鲢���� �ȵݹ��������飬�ٵݹ��������飬�����ϲ�

*/

// �ϲ������������������
void merge(vector<int>& nums, int left, int mid, int right)
{
	// ������������ [left, mid], ������������ [mid + 1, right]
	// ��һ����ʱ���飬���ڴ�źϲ���Ľ��
	vector<int> tmp(right - left + 1);
	// ��ʼ����������������������ʼ����
	int i = left, j = mid + 1, k = 0;
	// �����������鶼����Ԫ�ص�ʱ�򣬱ȽϽ�С��Ԫ�ظ���ճ������ʱ������
	while (i <= mid && j <= right)
	{
		if (nums[i] <= nums[j])
			tmp[k++] = nums[i++];
		else
			tmp[k++] = nums[j++];
	}
	// ��������������������ʣ��Ԫ�ظ��Ƶ���ʱ������
	while (i <= mid)
	{
		tmp[k++] = nums[i++];
	}
	while (j <= right)
	{
		tmp[k++] = nums[j++];
	}
	// ����ʱ���� tmp �е�Ԫ�ظ��ƻ�ԭ���� nums ��Ӧ������
	for (k = 0; k < tmp.size(); k++)
		nums[left + k] = tmp[k];
} 

// �鲢����
void mergeSort(vector<int>& nums, int left, int right)
{
	// ��ֹ����
	if (left >= right)
		return; // �������鳤��Ϊ 1 ��ʱ����ֹ�ݹ�
	// ���ֽ׶�
	int mid = (left + right) / 2; // �����е�
	mergeSort(nums, left, mid); // �ݹ���������
	mergeSort(nums, mid + 1, right); // �ݹ���������
	// �ϲ��׶�
	merge(nums, left, mid, right);
}

// ������ ��һ�ֻ������ݽṹ�ĸ�Ч�����㷨
/*
   1. �������鲢����С���ѣ���ʱ��СԪ��λ�ڶѶ�
   2. ����ִ�г��Ѳ��������μ�¼����Ԫ�أ����ɵô�С��������������
   �е�ֲڣ��������ŵ�~~

   �㷨����
   1. �������鲢�����󶥶ѡ���ɺ����Ԫ��λ�ڶѶ���
   2. ���Ѷ�Ԫ�أ���һ��Ԫ�أ���ѵ�Ԫ�أ����һ��Ԫ�أ���������ɽ����󣬶ѵĳ��ȼ� ��������Ԫ�������� 
   3. �ӶѶ�Ԫ�ؿ�ʼ���Ӷ�����ִ�жѻ�������Sift Down������ɶѻ��󣬶ѵ����ʵõ��޸���
   4. ѭ��ִ�е� 2 ���͵� 3 ����ѭ�� n-1 �ֺ󣬼��������������
*/
/* �ѵĳ���Ϊ n ���ӽڵ� i ��ʼ���Ӷ����׶ѻ� */
void siftDown(vector<int>& nums, int n, int i) {
	while (true) {
		// �жϽڵ� i, l, r ��ֵ���Ľڵ㣬��Ϊ ma
		int l = 2 * i + 1;
		int r = 2 * i + 2;
		int ma = i;
		if (l < n && nums[l] > nums[ma])
			ma = l;
		if (r < n && nums[r] > nums[ma])
			ma = r;
		// ���ڵ� i �������� l, r Խ�磬����������ѻ�������
		if (ma == i) {
			break;
		}
		// �������ڵ�
		swap(nums[i], nums[ma]);
		// ѭ�����¶ѻ�
		i = ma;
	}
}

/* ������ */
void heapSort(vector<int>& nums) {
	// ���Ѳ������ѻ���Ҷ�ڵ�������������нڵ�
	for (int i = nums.size() / 2 - 1; i >= 0; --i) {
		siftDown(nums, nums.size(), i);
	}
	// �Ӷ�����ȡ���Ԫ�أ�ѭ�� n-1 ��
	for (int i = nums.size() - 1; i > 0; --i) {
		// �������ڵ�������Ҷ�ڵ㣨������Ԫ����βԪ�أ�
		swap(nums[0], nums[i]);
		// �Ը��ڵ�Ϊ��㣬�Ӷ����׽��жѻ�
		siftDown(nums, i, 0);
	}
}

/* Ͱ���� */
void bucketSort(vector<float>& nums) {
	// ��ʼ�� k = n/2 ��Ͱ��Ԥ����ÿ��Ͱ���� 2 ��Ԫ��
	int k = nums.size() / 2;
	vector<vector<float>> buckets(k);
	// 1. ������Ԫ�ط��䵽����Ͱ��
	for (float num : nums) {
		// �������ݷ�ΧΪ [0, 1)��ʹ�� num * k ӳ�䵽������Χ [0, k-1]
		int i = num * k;
		// �� num ��ӽ�Ͱ bucket_idx
		buckets[i].push_back(num);
	}
	// 2. �Ը���Ͱִ������
	for (vector<float>& bucket : buckets) {
		// ʹ��������������Ҳ�����滻�����������㷨
		sort(bucket.begin(), bucket.end());
	}
	// 3. ����Ͱ�ϲ����
	int i = 0;
	for (vector<float>& bucket : buckets) {
		for (float num : bucket) {
			nums[i++] = num;
		}
	}
}

/* �������� */
// ��ʵ�֣��޷������������
void countingSortNaive(vector<int>& nums) {
	// 1. ͳ���������Ԫ�� m
	int m = 0;
	for (int num : nums) {
		m = max(m, num);
	}
	// 2. ͳ�Ƹ����ֵĳ��ִ���
	// counter[num] ���� num �ĳ��ִ���
	vector<int> counter(m + 1, 0);
	for (int num : nums) {
		counter[num]++;
	}
	// 3. ���� counter ������Ԫ������ԭ���� nums
	int i = 0;
	for (int num = 0; num < m + 1; num++) {
		for (int j = 0; j < counter[num]; j++, i++) {
			nums[i] = num;
		}
	}
}

/* �������� */
// ����ʵ�֣���������󣬲������ȶ�����
void countingSort(vector<int>& nums) {
	// 1. ͳ���������Ԫ�� m
	int m = 0;
	for (int num : nums) {
		m = max(m, num);
	}
	// 2. ͳ�Ƹ����ֵĳ��ִ���
	// counter[num] ���� num �ĳ��ִ���
	vector<int> counter(m + 1, 0);
	for (int num : nums) {
		counter[num]++;
	}
	// 3. �� counter ��ǰ׺�ͣ��������ִ�����ת��Ϊ��β������
	// �� counter[num]-1 �� num �� res �����һ�γ��ֵ�����
	for (int i = 0; i < m; i++) {
		counter[i + 1] += counter[i];
	}
	// 4. ������� nums ������Ԫ������������ res
	// ��ʼ������ res ���ڼ�¼���
	int n = nums.size();
	vector<int> res(n);
	for (int i = n - 1; i >= 0; i--) {
		int num = nums[i];
		res[counter[num] - 1] = num; // �� num ���õ���Ӧ������
		counter[num]--;              // ��ǰ׺���Լ� 1 ���õ��´η��� num ������
	}
	// ʹ�ý������ res ����ԭ���� nums
	nums = res;
}

/* ��ȡԪ�� num �ĵ� k λ������ exp = 10^(k-1) */
int digit(int num, int exp) {
	// ���� exp ���� k ���Ա����ڴ��ظ�ִ�а���Ĵη�����
	return (num / exp) % 10;
}

/* �������򣨸��� nums �� k λ���� */
void countingSortDigit(vector<int>& nums, int exp) {
	// ʮ���Ƶ�λ��ΧΪ 0~9 �������Ҫ����Ϊ 10 ��Ͱ����
	vector<int> counter(10, 0);
	int n = nums.size();
	// ͳ�� 0~9 �����ֵĳ��ִ���
	for (int i = 0; i < n; i++) {
		int d = digit(nums[i], exp); // ��ȡ nums[i] �� k λ����Ϊ d
		counter[d]++;                // ͳ������ d �ĳ��ִ���
	}
	// ��ǰ׺�ͣ��������ָ�����ת��Ϊ������������
	for (int i = 1; i < 10; i++) {
		counter[i] += counter[i - 1];
	}
	// �������������Ͱ��ͳ�ƽ��������Ԫ������ res
	vector<int> res(n, 0);
	for (int i = n - 1; i >= 0; i--) {
		int d = digit(nums[i], exp);
		int j = counter[d] - 1; // ��ȡ d �������е����� j
		res[j] = nums[i];       // ����ǰԪ���������� j
		counter[d]--;           // �� d �������� 1
	}
	// ʹ�ý������ԭ���� nums
	for (int i = 0; i < n; i++)
		nums[i] = res[i];
}

/* �������� */
void radixSort(vector<int>& nums) {
	// ��ȡ��������Ԫ�أ������ж����λ��
	int m = *max_element(nums.begin(), nums.end());
	// ���մӵ�λ����λ��˳�����
	for (int exp = 1; exp <= m; exp *= 10)
		// ������Ԫ�صĵ� k λִ�м�������
		// k = 1 -> exp = 1
		// k = 2 -> exp = 10
		// �� exp = 10^(k-1)
		countingSortDigit(nums, exp);
}
int main()
{
	return 0;
}