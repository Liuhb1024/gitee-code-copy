#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//
//using namespace std;
//
//// 函数声明
//void foo();
//
//
//void foo() // 函数定义
//{
//	cout << "hello world" << endl;
//}
//
//int main()
//{
//	foo();
//	return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//void output()
//{
//	static int cnt = 0;
//	// 这个静态变量等价于在这个函数内定义了一个全局变量
//
//	cnt++;
//	cout << "call:" << cnt << " times" << endl;
//}
//
//int main()
//{
//	output();
//	output();
//	output();
//	output();
//	output();
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//// 引用
//int max(int &x, int &y)
//{
//	x = 10, y = 20;
//
//	if (x > y) return x;
//	return y;
//}
//
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	cout << max(x, y) << endl;
//
//	return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//int output(int n, int a[])
//{
//	for (int i = 0; i < n; i++)
//		cout << a[i] << ' ';
//	cout << endl;
//}
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	
//	output(5, a);
//
//	return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//void output(int n, int m, int a[][3])
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//			cout << a[i][j] << ' ';
//		cout << endl;
//
//	}
//}
//
//int main()
//{
//	int a[3][3] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//
//	output(3, 3, a);
//
//	return 0;
//}

// 关于函数传数组后数组大小发生改变
#include<iostream>

using namespace std;

void foo(int b[])
{
	cout << sizeof b << endl;
}

int main()
{
	int a[10];
	cout << sizeof a << endl;
	cout << "-------------" << endl;
	foo(a);
	return 0;
}