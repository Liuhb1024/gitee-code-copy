#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("*********   1. play    ********\n");
	printf("*********   0. exit    ********\n");
	printf("*******************************\n");
}

void game()
{
	//���������Ҫһ��3 * 3�Ķ�ά����
	char board[ROW][COL] = {0};
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ʾ����
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		//�������
		//��ӡ����
		//�ж���Ӯ
		//��������
		//��ӡ����
		//�ж���Ӯ
	}
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while(input);
	return 0;
}