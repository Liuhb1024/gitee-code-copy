#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// Func4
// O(1)
void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < 100000000; ++k)
	{
		++count;
	}
	printf("%d\n", count + N);
}

int main()
{
	Func4(100000);
	Func4(1);

	return 0;
}