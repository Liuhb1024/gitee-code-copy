#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int a[5];
//	int i;
//	int sum = 0;
//	float average;
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		sum += a[i];
//	}
//	average = sum / 5;
//	printf("%f", average);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[6] = { 10,7,15,20,3,1 };
//	int i, max, num;
//	max = a[0];
//	num = 0;
//	for (i = 0; i < 6; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//			num = i;
//		}
//	}
//	printf("max=%d\n", max);
//	printf("number is %d", num);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char str[20] = {0};
//	gets(str);
//	int i;
//	for (i = 0;  str[i]!='\0'; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] += 32;
//		}
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			str[i] -= 32;
//		}
//	}
//	puts(str);
//	return 0;
//}