#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("***********  1.  play    *********\n");
	printf("***********  0.  exit    *********\n");
	printf("**********************************\n");
}

void game()
{
	//存放数据需要一个3 * 3的二维数组
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//显示棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家下棋
		PlayMove(board, ROW, COL);

		//打印棋盘
		DisplayBoard(board, ROW, COL);

		//判断输赢
		//iswin四种结果：
		//玩家赢-->'*'
		//电脑赢-->'#'
		//平局-->'Q'
		//继续-->'C'
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);

		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("玩家赢\n");
	}
	else if ('#' == ret)
	{
		printf("电脑赢\n");
	}
	else if ('Q' == ret)
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
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
			printf("选择错误，重新选择。\n");
			break;
		}
	} while (input);
	return 0;
}