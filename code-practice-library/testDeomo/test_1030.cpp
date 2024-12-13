//#include <stdio.h>
//int Max(int x, int y)
//{
//if (x > y)
//	return x;
//else
//	return y;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int m = Max(a, b);
//	printf("%d\n",m);
//	
//    return 0;
//}
//被5整除
#include <stdio.h>

//int main()
//{
//	//输入
//	int m = 0;
//	scanf("%d", &m);
//	
//	//判断&输出
//	if(m%5==0)
//	printf("Yes\n");
//	else
//	printf("No\n"); 
//	return 0;
// } 


//if语句
//多分支 
//int main()
//{
//	int age = 200;
//	
//if(age < 18)
//    printf("少年\n");
//else if(age >= 18 && age < 26)
//    printf("青年\n");
//else if(age >= 26 && age < 40)
//    printf("中年\n");
//else if(age >= 40 && age < 60)
//    printf("壮年\n");
//else if(age >= 60 && age < 100)
//    printf("老年\n");
//else
//    printf("老不死\n");
//	return 0;
 //} 
//代码风格
//<高质量的c> 

//老司机
//int main() 
//{
//    int num = 5;
//     
////if(num =5) 
//	if(5 == num)
//	   printf("hehe\n");
//	return 0;
//}


//

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}



//switch语句


//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//	    printf("星期1\n");
//	    break;
//	case 2:
//	    printf("星期2\n");
//	    break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	}
//	return 0;
// } 


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//	}
//	return 0;
//} 


//while循环
//int main()
//{
//	while(1)
//        printf("hehe\n");  	
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d",i);
//		i++;
//	}
//	
//	return 0;
//}
//在while循环中，break用于永久终止循环
//在while循环中，continue的作用是跳过本次循环continue后边的代码
//直接去判断部分，看是否进行下一次循环
 
 
 
 
//getchar
//EOF:-1  文件结束标志
 
//int main()
//{
//	int ch = getchar();
	//printf("%c\n",ch);
//	putchar(ch);   //输出一个字符 
//	return 0;
// } 

//int main()
//{
//	int ch = 0;
////ctrl+z - getchar 读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
// } 







 






