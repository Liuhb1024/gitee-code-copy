#define _CRT_SECURE_NO_WARNINGS 1
//#include<limits.h>
//INT_MAX
////计算n的阶乘
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	//计算n的阶乘
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


// 2.计算1！+2！+....+10!
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	//输入
//	
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++) 
//	{
//		ret = 1;
//    //计算n的阶乘
//         for (i = 1; i <= n; i++)
//	     {
//		      ret *= i;
//	     }
//		 sum += ret;
//	}
//
//	printf("%d\n", sum);
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	//输入
//
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
// 
// 
//在一个有序数组中查找具体的某个数字n。（二分查找详解）
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//           0 1 2 3 4 5 6 7 8 9   下标
//	int k = 7;//k是要查找的数字
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求元素个数
//	int flag = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			flag = 1;
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//		if (flag == 0)
//			printf("找不到\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//           0 1 2 3 4 5 6 7 8 9   下标
//	int k = 7;//k是要查找的数字
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求元素个数
//	//折半查找（二分查找）前提是在【有序数组】
//	int left = 0;
//	int right = sz - 1;
//
//	int flag = 0;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			flag = 1;
//			break;
//		}
//		if (flag == 0)
//		{
//			printf("找不到。\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//           0 1 2 3 4 5 6 7 8 9   下标
//	int k = 7;//k是要查找的数字
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求元素个数
//	//折半查找（二分查找）前提是在【有序数组】
//	int left = 0;
//	int right = sz - 1;
//
//	int flag = 0;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;///有潜在风险
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			flag = 1;
//			break;
//		}
//		if (flag == 0)
//		{
//			printf("找不到。\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to my gitee!!";
//	char arr2[] = "*********************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to my gitee!!";
//	char arr2[] = "*********************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	for (left = 0, right = strlen(arr1) - 1;left <= right;left++,right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。
//假设密码为“123456”

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 }; 
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//	
//	//判断
//	if (strcmp(password, "123456") == 0)
//	   {
//		flag = 1;
//		printf("密码正确\n");
//		break;
//	   }
//	else
//	{
//		printf("密码错误\n");
//	}
//	}
//	if (flag == 0)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}

//猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*********************************\n");
//	printf("*********   1.  play    *********\n");
//	printf("*********   0.  exit    *********\n");
//	printf("*********************************\n");
//
//}
//
////rand函数会返回一个0-32767之间的随机数
//////RAND_MAX--rand函数能返回随机数的最大值。
////时间戳
//void game()
//{
//	//时间戳的获得   time函数
//	//设置随机数的生成器
////	srand((unsigned int)time(NULL));
//
//
//	//1.生成随机数字
//	//rand用来生成随机数的函数
//	int ret = rand()%100+1;//0~99+1---->1~100
////	printf("%d", ret);
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*********************************\n");
//	printf("*********   1.  play    *********\n");
//	printf("*********   0.  exit    *********\n");
//	printf("*********************************\n");
//
//}
/*
//rand函数会返回一个0-32767之间的随机数
////RAND_MAX--rand函数能返回随机数的最大值。
//时间戳
void game()
{
	//时间戳的获得   time函数
	//设置随机数的生成器
	srand((unsigned int)time(NULL));


	//1.生成随机数字
	//rand用来生成随机数的函数
	int ret = rand() % 100 + 1;//0~99+1---->1~100
	printf("%d", ret);
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*********************************\n");
	printf("*********   1.  play    *********\n");
	printf("*********   0.  exit    *********\n");
	printf("*********************************\n");

}

void game()

{
	//设置随机数的生成器
	srand((unsigned int)time(NULL));
	int ret = rand();
	printf("%d\n", ret);
}

	int main()
	{
		
		int input = 0;
		do
		{
			menu();
			printf("请选择：>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
			}
		} while (input);
		return 0;
	}