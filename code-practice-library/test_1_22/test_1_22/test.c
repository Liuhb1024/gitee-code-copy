#define _CRT_SECURE_NO_WARNINGS 1
//#include<limits.h>
//INT_MAX
////����n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	//����
//	scanf("%d", &n);
//	//����n�Ľ׳�
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


// 2.����1��+2��+....+10!
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	//����
//	
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++) 
//	{
//		ret = 1;
//    //����n�Ľ׳�
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
//	//����
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
//��һ�����������в��Ҿ����ĳ������n�������ֲ�����⣩
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//           0 1 2 3 4 5 6 7 8 9   �±�
//	int k = 7;//k��Ҫ���ҵ�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��Ԫ�ظ���
//	int flag = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			flag = 1;
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//		if (flag == 0)
//			printf("�Ҳ���\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//           0 1 2 3 4 5 6 7 8 9   �±�
//	int k = 7;//k��Ҫ���ҵ�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��Ԫ�ظ���
//	//�۰���ң����ֲ��ң�ǰ�����ڡ��������顿
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			flag = 1;
//			break;
//		}
//		if (flag == 0)
//		{
//			printf("�Ҳ�����\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//           0 1 2 3 4 5 6 7 8 9   �±�
//	int k = 7;//k��Ҫ���ҵ�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��Ԫ�ظ���
//	//�۰���ң����ֲ��ң�ǰ�����ڡ��������顿
//	int left = 0;
//	int right = sz - 1;
//
//	int flag = 0;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;///��Ǳ�ڷ���
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			flag = 1;
//			break;
//		}
//		if (flag == 0)
//		{
//			printf("�Ҳ�����\n");
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

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
//��������Ϊ��123456��

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 }; 
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//	
//	//�ж�
//	if (strcmp(password, "123456") == 0)
//	   {
//		flag = 1;
//		printf("������ȷ\n");
//		break;
//	   }
//	else
//	{
//		printf("�������\n");
//	}
//	}
//	if (flag == 0)
//		printf("��������������˳�����\n");
//	return 0;
//}

//��������Ϸ
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
////rand�����᷵��һ��0-32767֮��������
//////RAND_MAX--rand�����ܷ�������������ֵ��
////ʱ���
//void game()
//{
//	//ʱ����Ļ��   time����
//	//�����������������
////	srand((unsigned int)time(NULL));
//
//
//	//1.�����������
//	//rand��������������ĺ���
//	int ret = rand()%100+1;//0~99+1---->1~100
////	printf("%d", ret);
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//rand�����᷵��һ��0-32767֮��������
////RAND_MAX--rand�����ܷ�������������ֵ��
//ʱ���
void game()
{
	//ʱ����Ļ��   time����
	//�����������������
	srand((unsigned int)time(NULL));


	//1.�����������
	//rand��������������ĺ���
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
	//�����������������
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
			printf("��ѡ��>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
			}
		} while (input);
		return 0;
	}