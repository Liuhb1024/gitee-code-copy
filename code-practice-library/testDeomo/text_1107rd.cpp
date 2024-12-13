//编写代码，多个字符中间移动，向中间汇聚 
//welcome to bit!!
//################
//w##############!
//we############!!
//····
//welcome to bit!!

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//	    arr2[right] = arr1[right];
//	    printf("%s\n", arr2);
//	    Sleep(1000);   //休眠 
//	    system("cls"); //清空屏幕 
//	    left++;
//	    right--; 
//	 } 
//	 printf("%s\n", arr2);
//	return 0;
//}


//编写代码，模拟用户登录，且只能登陆三次。
//（只允许输入三次密码，Y则成功，F则退出）
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	//假设正确密码是“12346 ” 
//	char password[20] = {0};
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s",password);
//	//	if(password == "123456")//两个字符串比较，不能用==，应该用strcmp 
//	    
//	    if(strcmp(password,"123456") ==0) 
//	    {
//	    	printf("登录成功\n");
//	    	break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	
//	    if(i = 3)
//	   
//	   	 printf("三次密码均错误，退出程序！\n"); 
//	}   	 
//	return 0;
// } 




//写一个猜数字游戏
//1.自动产生一个1~100之间的随机数
//2.猜数字
//a.猜对了，恭喜你，游戏结束
//b.猜错了，会告诉你猜大了还是小了，继续猜，直到猜对
//3.游戏一直玩，除非退出游戏

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
void menu()
{
	printf("*******************\n");
	printf("*******************\n");
	printf("****  1. play  ****\n");
	printf("****  0. exit  ****\n");
	printf("*******************\n");
	printf("*******************\n");
}

void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数返回了一个0~32767的数字，不够随机
	//时间-时间戳  随机！！！
	 
//	srand((unsigned int)time(NULL));
	//速度快随机性仍不够，将其放在main函数里面 
	 
	int ret = rand()%100+1;//%100的余数是0~99，然后+1，范围就是1~100 
//	printf("%d\n",ret);
	
	//2.猜数字 
	int guess = 0;
	while (1) 
	{
		printf("请猜数字:>");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你！猜对了！\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//随机性问题解决！ 
	
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d",&input); 
		switch (input)
		{
			case 1:
			//	printf("猜数字\n");
			    game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;		
		}
		
	}
	while (input);
	return 0;
 } 































































