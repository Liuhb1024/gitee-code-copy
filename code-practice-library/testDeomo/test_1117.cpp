//go to语句 

//#include <stdio.h> 
//int main ()
//死循环 
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	
//	goto flag; 
//	return 0;
// } 


//关机程序
//只要运行起来，电脑在1分钟内关机，如果输入我是猪，就取消关机 
//关机 shutdown -s -t60
//	取消关机 shutdown -a
//	c语言提供一个函数：system（）- 执行系统命令
//	strcmp - string.h
//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	char input[20] = { 0 };     //存放输入的信息 
//	system("shutdown -s -t 60"); //system - stdlib.h
//again:
//	printf("请注意，电脑在1分钟内关机，如果输入我是猪，就取消关机\n");
//	scanf("%s",input); 
//	
//	if (strcmp (input, "我是猪") == 0)   //两个字符串比较不能使用==，应该使用strcmp() string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
////goto函数只能在一个函数范围内跳转，不能跨函数 
//
//
//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	char intput[20] = { 0 };     
//	system("shutdown -s -t 60"); 
//again:
//	while(1)
//	{
//		printf("请注意，电脑在1分钟内关机，如果输入我是猪，就取消关机\n");
//	scanf("%s",intput); 
//	
//	if (strcmp (input, "我是猪") == 0)   
//	{        
//		system("shutdown -a");
//		break;
//	}
//	}
//	return 0;
//}
































