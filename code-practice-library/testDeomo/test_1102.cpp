//practice3  ��һ�����������в�ѯ�����ĳ������n 
//���ֲ��� 
#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;   //Ҫ���ҵ�����
	//��arr�������������в���k(7)��ֵ
	int sz = sizeof(arr) / sizof(arr[0]);//����Ԫ�ظ��� 
	int left = 0;
	int right = sz-1;
	while (left<=right)
{
	int mid = (left + right) / 2; 
	if (arr[mid] < k)
	{
		left = mid + 1;
	}
	else if(arr[mid] > k)
	{
		right = mid - 1;
	}
	else
	{
		printf("�ҵ��ˣ�%d\n",mid);
		break;
	}
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 