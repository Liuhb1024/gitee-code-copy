#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>
#include<easyx.h>



#define ROW 10 // ��
#define COL 10 // ��

#define SPACE 0 // �յ�
#define WALL 1  // ǽ
#define DEST 2  // Ŀ�ĵ�
#define BOX 3   // ����
#define PLAYER 4// ���
/*
 �����ӣ�
  1. Ԫ�أ��յ� ǽ Ŀ�ĵ� ���� ��ң�
  2. ��������
   2.1 �����ݴ洢 ��ά����
   2.2 �յ��� 0 ��ʾ ǽ 1 Ŀ�ĵ� 2  ���� 3  ��� 4
   2.3 ��ҡ����Ӷ�������Ŀ�ĵ���
  3. ͼ�ν���
*/

void showMap(int map[][COL]);
void pushBox(int map[][COL]);
bool isPass(int map[][COL]);
void loadResuorce();
void drawMap(int map[][COL]);

// ͼƬ����
IMAGE imgs[7];

// ����һ��ͼƬ����

int main()
{
	// ��������
	initgraph(640, 640, EX_SHOWCONSOLE);
	loadResuorce();
	// ������ͼ
	int map[3][ROW][COL] =
	{
		{
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,1,1,1,0,0,0,0},
			{0,0,0,1,2,1,0,0,0,0},
			{0,0,0,1,3,1,1,1,1,0},
			{0,1,1,1,0,3,0,2,1,0},
			{0,1,2,3,4,0,1,1,1,0},
			{0,1,1,1,1,3,1,0,0,0},
			{0,0,0,0,1,2,1,0,0,0},
			{0,0,0,0,1,1,1,0,0,0},
			{0,0,0,0,0,0,0,0,0,0}
		}
		,
		{
			{0,0,0,0,1,1,1,0,0,0},
			{0,0,0,1,2,2,1,1,1,0},
			{0,0,1,0,0,0,0,0,0,1},
			{0,1,0,0,3,3,0,2,1,0},
			{1,0,0,3,3,0,0,1,0,0},
			{0,1,4,0,0,2,1,0,0,0},
			{0,0,1,0,0,1,0,0,0,0},
			{0,0,0,1,1,0,0,0,0,0},
			{0,0,0,1,1,0,0,0,0,0},
			{0,0,0,1,1,0,0,0,0,0}

		}
		,
		{
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,1,1,0,0,1,1,0,0},
			{0,1,2,0,1,1,0,2,1,0},
			{1,0,0,0,0,0,0,4,0,1},
			{1,0,0,3,3,0,0,0,0,1},
			{0,1,0,3,0,0,3,0,1,0},
			{0,0,1,0,0,0,0,1,0,0},
			{0,0,0,1,2,2,1,0,0,0},
			{0,0,0,0,1,1,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0}

		}

	};

	// ��ǰ�ؿ�
	int level = 0;
	// ��Ϸ��ѭ��
	while (true)
	{
		showMap(map[level]);
		drawMap(map[level]);
		if (isPass(map[level]))
		{
			level++;
			if (level >= 3)
			{
				printf("��ϲ�㣡ͨ���ˣ�\n");
				return 0;
			}

			printf("��ϲ�㣡�����ˣ��������������һ��\n");
		}
		pushBox(map[level]);

		system("cls");
	}


	return 0;
}

// ��ӡ��ͼ
void showMap(int map[][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			/*if (map[i][j] == 0)
			{
				printf("  ");
			}
			else
			{
				printf("%d ", map[i][j]);

			}*/

			switch (map[i][j])
			{
			case SPACE:
				printf(" ");
				break;
			case WALL:
				printf("#");
				break;
			case DEST:
				printf("*");
				break;
			case BOX:
				printf("$");
				break;
			case PLAYER:
				printf("��");
				break;
				// ������Ŀ�ĵ��� 
			case BOX + DEST:
				printf("��");
				break;
				// �����Ŀ�ĵ���
			case PLAYER + DEST:
				printf("��");
				break;
			default:
				break;
			}
		}
		printf("\n");
	}
}

// ������
void pushBox(int map[][COL])
{
	// ����������getchar() ����֮�� ��Ҫ�س����ܼ�����_getch() ����Ҫ���س�
	// int key = _getch();
	// printf("%d %c\n", key, key);

	// �����ҵ�������ڵ�λ��
	int r = -1;
	int c = -1;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (map[i][j] == PLAYER || map[i][j] == DEST + PLAYER)
			{
				r = i;
				c = j;
				goto doneLoop;
			}
		}
	}
doneLoop:
	switch (_getch())
	{
	case 72: // ��
		// ʲô����� ��ҿ����ƶ���
		// 1. ��� ��ǰ���� �յء�Ŀ�ĵأ�ֱ���ƶ����յء�Ŀ�ĵ�
		if (map[r - 1][c] == SPACE || map[r - 1][c] == DEST)
		{
			// printf("move");
			// 1. ����Ҽӵ��յ� 
			map[r - 1][c] += PLAYER;
			// 2. ����Ҵ�ԭ����λ�ü���
			map[r][c] -= PLAYER;

		}
		// 2. ��� ��ǰ���� ���ӣ�����������
		else if (map[r - 1][c] == BOX || map[r - 1][c] == BOX + DEST)
		{
			// �ж�һ�����ӵ�ǰ����ʲô
			if (map[r - 2][c] == SPACE || map[r - 2][c] == DEST)
			{
				// 1. �������ƶ���ǰ��
				map[r - 2][c] += BOX;
				// 2. �����Ӵ�ԭ����λ�ü���
				map[r - 1][c] -= BOX;
				// 3. ������ƶ���ԭ�����ӵ�λ��
				map[r - 1][c] += PLAYER;
				// 4. ����Ҵ�ԭ����λ�ü���
				map[r][c] -= PLAYER;
			}
		}
		break;
	case 80: // ��
		if (map[r + 1][c] == SPACE || map[r + 1][c] == DEST)
		{
			map[r + 1][c] += PLAYER;
			map[r][c] -= PLAYER;

		}
		else if (map[r + 1][c] == BOX || map[r + 1][c] == BOX + DEST)
		{
			if (map[r + 2][c] == SPACE || map[r + 2][c] == DEST)
			{
				map[r + 2][c] += BOX;
				map[r + 1][c] -= BOX;
				map[r + 1][c] += PLAYER;
				map[r][c] -= PLAYER;
			}
		}
		break;
	case 75: // ��
		if (map[r][c - 1] == SPACE || map[r][c - 1] == DEST)
		{
			map[r][c - 1] += PLAYER;
			map[r][c] -= PLAYER;

		}
		else if (map[r][c - 1] == BOX || map[r][c - 1] == BOX + DEST)
		{
			if (map[r][c - 2] == SPACE || map[r][c - 2] == DEST)
			{
				map[r][c - 2] += BOX;
				map[r][c - 1] -= BOX;
				map[r][c - 1] += PLAYER;
				map[r][c] -= PLAYER;
			}
		}
		break;
	case 77: // ��
		if (map[r][c + 1] == SPACE || map[r][c + 1] == DEST)
		{
			map[r][c + 1] += PLAYER;
			map[r][c] -= PLAYER;

		}
		else if (map[r][c + 1] == BOX || map[r][c + 1] == BOX + DEST)
		{
			if (map[r][c + 2] == SPACE || map[r][c + 2] == DEST)
			{
				map[r][c + 2] += BOX;
				map[r][c + 1] -= BOX;
				map[r][c + 1] += PLAYER;
				map[r][c] -= PLAYER;
			}
		}
		break;
	default:
		break;
	}
}

// �ж��Ƿ����
bool isPass(int map[][COL])
{
	// ʲô����²Ź���
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (map[i][j] == BOX)
				return false;
		}
	}
	return true;
}

// ����ͼƬ��Դ
void loadResuorce()
{
	// ����ͼƬ
	char file[50] = { 0 };

	for (int i = 0; i < 7; i++)
	{
		sprintf_s(file, "images/%d.bmp", i);
		loadimage(imgs + i, file);

	}

}

// ���Ƶ�ͼ
void drawMap(int map[][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++)
		{
			int x = k * 64;
			int y = i * 64;

			putimage(x, y, imgs + map[i][k]);
		}
	}
}