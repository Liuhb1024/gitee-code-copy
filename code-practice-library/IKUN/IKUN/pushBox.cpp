#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>
#include<easyx.h>



#define ROW 10 // 行
#define COL 10 // 列

#define SPACE 0 // 空地
#define WALL 1  // 墙
#define DEST 2  // 目的地
#define BOX 3   // 箱子
#define PLAYER 4// 玩家
/*
 推箱子：
  1. 元素（空地 墙 目的地 箱子 玩家）
  2. 操作数据
   2.1 将数据存储 二维数组
   2.2 空地用 0 表示 墙 1 目的地 2  箱子 3  玩家 4
   2.3 玩家、箱子都可以在目的地上
  3. 图形界面
*/

void showMap(int map[][COL]);
void pushBox(int map[][COL]);
bool isPass(int map[][COL]);
void loadResuorce();
void drawMap(int map[][COL]);

// 图片数组
IMAGE imgs[7];

// 定义一个图片数组

int main()
{
	// 创建串口
	initgraph(640, 640, EX_SHOWCONSOLE);
	loadResuorce();
	// 创建地图
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

	// 当前关卡
	int level = 0;
	// 游戏主循环
	while (true)
	{
		showMap(map[level]);
		drawMap(map[level]);
		if (isPass(map[level]))
		{
			level++;
			if (level >= 3)
			{
				printf("恭喜你！通关了！\n");
				return 0;
			}

			printf("恭喜你！过关了！按任意键进入下一关\n");
		}
		pushBox(map[level]);

		system("cls");
	}


	return 0;
}

// 打印地图
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
				printf("♀");
				break;
				// 箱子在目的地上 
			case BOX + DEST:
				printf("￥");
				break;
				// 玩家在目的地上
			case PLAYER + DEST:
				printf("♂");
				break;
			default:
				break;
			}
		}
		printf("\n");
	}
}

// 推箱子
void pushBox(int map[][COL])
{
	// 按键操作，getchar() 输入之后 需要回车才能继续，_getch() 不需要按回车
	// int key = _getch();
	// printf("%d %c\n", key, key);

	// 首先找到玩家所在的位置
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
	case 72: // 上
		// 什么情况下 玩家可以移动？
		// 1. 玩家 的前面是 空地、目的地，直接移动到空地、目的地
		if (map[r - 1][c] == SPACE || map[r - 1][c] == DEST)
		{
			// printf("move");
			// 1. 把玩家加到空地 
			map[r - 1][c] += PLAYER;
			// 2. 把玩家从原来的位置减掉
			map[r][c] -= PLAYER;

		}
		// 2. 玩家 的前面是 箱子，可以推箱子
		else if (map[r - 1][c] == BOX || map[r - 1][c] == BOX + DEST)
		{
			// 判断一下箱子的前面是什么
			if (map[r - 2][c] == SPACE || map[r - 2][c] == DEST)
			{
				// 1. 把箱子移动到前面
				map[r - 2][c] += BOX;
				// 2. 把箱子从原来的位置减掉
				map[r - 1][c] -= BOX;
				// 3. 把玩家移动到原来箱子的位置
				map[r - 1][c] += PLAYER;
				// 4. 把玩家从原来的位置减掉
				map[r][c] -= PLAYER;
			}
		}
		break;
	case 80: // 下
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
	case 75: // 左
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
	case 77: // 右
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

// 判断是否过关
bool isPass(int map[][COL])
{
	// 什么情况下才过关
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

// 加载图片资源
void loadResuorce()
{
	// 加载图片
	char file[50] = { 0 };

	for (int i = 0; i < 7; i++)
	{
		sprintf_s(file, "images/%d.bmp", i);
		loadimage(imgs + i, file);

	}

}

// 绘制地图
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