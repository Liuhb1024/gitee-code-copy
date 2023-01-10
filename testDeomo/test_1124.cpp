#include<stdio.h>

int main()
{
	float a[4][5], sum1, sum2;
	int i, j;
	
	printf("输入三个学生的四门成绩:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}
		
	printf("每个学生的平均成绩如下（第五列）：\n");
	for(i = 0; i < 3; i++)
	{
		sum1 = 0;
		for(j = 0; j < 4; j++)
		{
			sum1 += a[i][j];
		}
		a[i][4] = sum1 / 4;
	}

	printf("每门课程的平均成绩如下（第四行）:\n");
	for(j = 0; j < 5; j++)
	{
		sum2 = 0;
		for(i = 0; i < 3; i++)
		{
			sum2 += a[i][j];
		}
		a[3][j] = sum2 / 3;
	}
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%-10.1f", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

