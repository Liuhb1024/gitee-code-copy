#pragma once

//ͷ�ļ��İ���
#include<string.h>
#include<stdio.h>


#define ROW 3 //�� 3
#define COL 3 //�� 3 

//����������
// 
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
