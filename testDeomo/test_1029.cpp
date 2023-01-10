//16题 
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a=1, b=2, c=3, d=4, sum;
//	sum = 12*a*(a+b)/c % d;
//	printf("%d",sum);
//	return 0;
// } 

//19题
//{
//	char c1, c2, c3, c4, c5;
//	printf("请您输入5个字母：");
//	scanf("%c %c %c %c %c",&c1,&c2,&c3,&c4,&c5); 
//	c1 = c1+5;
 //   c2 = c2+5;
 //   c3 = c3+5;
 //   c4 = c4+5;
 //   c5 = c5+5;
  //  printf("加密后的字母序列为:%c %c %c %c %c",c1, c2, c3, c4, c5);
//	return 0;
// } 

//#include<stdio.h>
//int main()
//{
//	char isRain, isFree;
//	
//	printf("是否有空？(Y/N)");
//	scanf("%c", &isFree);
//	
//	getchar ();
//	
//	printf("是否下雨？(Y/N)");
//	scanf("%c", &isRain);
//	
//	if (isFree == 'Y' || isFree == 'Y')
//	{
//		if (isRain == 'Y' || isRain == 'Y')
//		{
//			printf("记得带伞噢^_^\n");
//		}
//	}
//	else
//	{
//		printf("女神没空！！！！！！！T_T\n");
//	}
//	return 0;
//}

//指针---
//*解引用操作 
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	return 0;
// } 

//指针就是地址
//int main()
//{
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(long*));
//	printf("%d\n",sizeof(long long*));
//	printf("%d\n",sizeof(float*));
//	printf("%d\n",sizeof(double*));
	
//	return 0;
//} 因为电脑是64位的！！！8字节

//初识结构体
//：有能力去描述复杂类型,创造新类型 

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//}; 

//int main()
//{
//	struct Stu s = {"张三", 20, 85.5};//结构体创建和初始化
//	printf("1: %s %d %lf\n", s.name, s.age, s.score); 
//	struct Stu * ps = &s;
//	//printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针-> 
	
//	return 0;
// } 

















 




































