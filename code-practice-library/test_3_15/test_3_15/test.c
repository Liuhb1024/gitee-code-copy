#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
//void move_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//����������ż��
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//��������������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };//[1 3 5 7 9][    ]
//	//����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����
//	move_arr(arr, sz);
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//signed char -128~127
//unsigned char 0~255

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//
//	printf("%d %d", a + b, c);
//
//	return 0;
//}

//
//��32λ���ģʽ�������ϱ���b���ڣ� ��

//int main()
//{
//	unsigned int a = 0x1234; 
//	unsigned char b = *(unsigned char*)&a;
//
//	return 0;
//}
//

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����//(b==2)+(a==3)==1
//Bѡ��˵���ҵڶ���E���ģ�//(b==2)+(e==4)==1
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//

//����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������


//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer!='a') + (killer=='c') + (killer=='d') + (killer!='d') == 3)
//		{
//			printf("%c\n", killer);
//          break;
//		}
//	}
//
//	return 0;
//}
//

//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
//
//����

//1      
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
// ...............
//
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//

//int main()
//{
//	//char(*) arr[10];
//	//char* (*arr)[10];
//
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ���
#include <string.h>
//
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);//
//	k %= len;
//
//	for (i = 0; i < k; i++)
//	{
//		//����1���ַ�
//		//1
//		char tmp = arr[0];
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3
//		arr[len - 1] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[20] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
//

#include <assert.h>

//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr+k-1);//��
//	reverse(arr+k, arr+len-1);//��
//	reverse(arr, arr+len-1);//����
//}
//
//int main()
//{
//	char arr[20] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//
//����
//

//
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
//
//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//3 4 5

//�ҵ��˷���1���Ҳ�������0
//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c-1;
//
//	while (x<=r-1 && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int ret = find_num(arr, 3, 3, k);
//	if (ret == 1)
//		printf("�ҵ���\n");
//	else
//		printf("�Ҳ���\n");
//
//	return 0;
//}
//
//
//int find_num(int arr[3][3], int *px, int *py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	//�����Ͳ���
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("�ҵ���, �±���: %d %d\n", x, y);
//	}
//	else
//		printf("�Ҳ���\n");
//
//	return 0;
//}
//int find_num(int arr[3][3], int *px, int *py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	//�����Ͳ���
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("�ҵ���, �±���: %d %d\n", x, y);
//	}
//	else
//		printf("�Ҳ���\n");
//
//	return 0;
//}
//

//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		//����1���ַ�
//		//1
//		char tmp = arr1[0];
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		//3
//		arr1[len - 1] = tmp;
//		if (0 == strcmp(arr1, arr2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(arr1, arr1, len1);
//	if (strstr(arr1, arr2))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";//abcdefabcdef
//	char arr2[] = "cdef";
//	int ret = is_left_move(arr1, arr2);
//	if (1 == ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}
//