//逻辑表达式
//#include <stdio.h>
//int main()
//{
//	int a = 5, b = 3;
//	printf("%d\n", 3 > 1 && 1< 2);
//	printf("%d\n", 3 + 1 || 2 == 0);
//	printf("%d\n", !(a + b));
//	printf("%d\n", !0 + 1 < 1 || !(3 + 4));
//	printf("%d\n",'a' - 'b' && 'c');
//	return 0;
//} 


//短路求值
//#include <stdio.h> 
//int main()
//{
//	int a = 3, b = 3;
	
//	(a = 0) && (b = 5);
//	printf("a = %d, b =%d\n", a, b);
	
//	(a = 1) || (b = 5);
//	printf("a = %d, b =%d\n", a, b);
//	return 0;
//}


//if语句
//第一种
//#include <stdio.h>
//int main()
//{
//	int i;
//	
//	printf("徐童舒多高啊？:");
//	scanf("%d", &i);
	
//	if (i >= 150)
//	{
//		printf("还是小学生啊！\n");
//	}
//	 
//	if (i <= 150)
//	{
//		printf("回家喝牛奶去！\n");
//		printf("小学生啊小学生！\n");
//	 } 
//	return 0;
// }

//第二种
#include <stdio.h>
int main()
{
	int i;
	
	printf("您老贵庚啊：");
	scanf("%d", &i);
	
	if (i >= 18)
	{
		printf("进门左拐！\n");
	
	 }
	 else{
	 	printf("慢走，不送！\n"); 
	 } 
	return 0;
 } 

























