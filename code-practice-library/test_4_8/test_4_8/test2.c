#define _CRT_SECURE_NO_WARNINGS 1

//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.
void Find(const int* arr, size_t num)
{
	for (int i = 0; i < num; i++)
	{
		int flag = 1;

		for (int j = 0; j < num; j++)
		{
			if (j == i)
			{
				continue;
			} // 跳过元素自己与自己比较

			if (arr[j] == arr[i])
			{
				flag = 0;
				break;
			}
		}

		if (1 == flag)
		{
			printf("%d ", arr[i]);
		}
	}
}

