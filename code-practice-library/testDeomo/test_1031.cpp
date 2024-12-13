//while循环2
//#include <stdio.h>
//int main()
//{
//	//
//	char password[20] = { 0 };//数组名代表数组首元素的地址 
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//	printf("请确认密码(Y/N):>");
//	
//	//清理缓冲区
//	getchar ();   //处理'\n'
//	
//清理缓冲区中的多个字符 
//	int tmp = 0;
//	while ((tmp = getchar ()) !='\n')
//	{
//		;
//	}
//	 
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
// } 
//getchar scanf输入函数
//输入缓冲区 

//空杯心态！！！！！！！！！
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if(ch<'0' || ch>'9')
//		continue;
//		
//		putchar(ch);
//	}
//	return 0;
// } 


//for 循环
//#include <stdio.h>
//int main()
//{
//	int i = 1; //初始化
//	
//	while (i <= 10)  //判断部分
//	{
//		printf("%d",i);
//		
//		i++; //调整部分 
//	 } 
//	return 0;
// }     有点弊端 来个for循环


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for(i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for(i = 1; i <= 10; i++)
//	{
//	if (i == 5)
//		break;
//		
//		printf("%d", i);
//	}
//	 
//	return 0;
//}
 
//前闭后开 
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	 } 
//	return 0;
//}


//for 变化
#include <stdio.h> 
//int main()
//{
//	//判断部分的省略 - 判断部分恒为真 
//	for(;;)
//	{
//		printf("hehe\n"); 
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( ; i < 3; i++)
//	{
//		for(j = 0; j < 3; j++)
//		{
//			printf("hehe\n"); 
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(i = 0, k = 0; k = 0; i++,k++)
//	    k++;
//	return 0;
//}  循环0次

 




















































