#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<string.h>

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;

	//法一：
	for (i = 0; i < col; i++)
	{
		int j = 0;
		for (j = 0; j < row; j++)
		{
			board[i][j] = ' ';
		}
	}

	//法二：
	//memset(&board[0][0],' ',row*col*sizeof(board[0][0]));//string.h
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}
//优化代码：
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)
//		{
//             printf("---|---|---\n");
//		}		
//	}
//}
//再优化：
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			      printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
				   printf("|");
			}
		}
		printf("\n");
	}
}