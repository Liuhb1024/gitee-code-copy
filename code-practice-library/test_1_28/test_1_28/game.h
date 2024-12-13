#pragma once

//头文件的包含
#include<string.h>
#include<stdio.h>


#define ROW 3 //行 3
#define COL 3 //列 3 

//函数的声明
// 
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
