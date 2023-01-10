#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<mmstream.h>
#pragma comment(lib,"winmm.lib") 
//定义行列 
#define HEIGHT 45
#define WIDTH 100

 
void gamestart1();
void gamestart2();
int score=0;
int offset_X;//X的移动 
int offset_Y;//y的移动 
//尾巴的坐标 
int tail_X;
int tail_Y;
int hot; 
int sleeptime=200;


struct BODY//蛇身的结构体 
{
	int x;
	int y; 
};
struct SNAKE//整条蛇的结构体 
{
	struct BODY body[(HEIGHT-2)*(WIDTH-2)];//蛇的数组
	int size;//蛇的长度 
}snake;
struct FOOD//食物的结构体 
{
	int x;
	int y;
}food;

void initsnake(){//蛇初始化 
	snake.size=3;//蛇刚开始为三个身段(包括头) 
	snake.body[0].x=WIDTH/2;
	snake.body[0].y=HEIGHT/2;
	snake.body[1].x=WIDTH/2-1;
	snake.body[1].y=HEIGHT/2;
	snake.body[2].x=WIDTH/2-2;
	snake.body[2].y=HEIGHT/2;
} 
void w1(){//墙的初始化 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);//设置墙的颜色 
	for(int i=0;i<HEIGHT;i++){
		for(int j=0;j<WIDTH;j++){
			if(i==0||j==0||i==HEIGHT-1||j==WIDTH-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		if(i==5) printf("		    贪吃蛇游玩提示");
		if(i==6) printf("			上: w");
		if(i==7) printf("			下: s");
		if(i==8) printf("			左: a");
		if(i==9) printf("			右: d"); 
		if(i==11) printf("			按空格键加速");
		printf("\n");
	}
	
}

void gotoxy(int x,int y)
{ //光标转变位置 
	if(x==0&&y==0){
		return;
	} 
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void xianshi()
{//显示蛇和食物 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);//蛇的颜色 
	for(int i=0;i<snake.size;i++){
		gotoxy(snake.body[i].x,snake.body[i].y);//移动光标
		if(i==0){
			printf("@");//头 
		}
		else{
			printf("#");//身子 
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);//食物的颜色 
	gotoxy(food.x,food.y);
	printf("*");
	if(tail_X!=0&&tail_Y!=0){//防止第一次进入时果子生成在墙旁（画完食物后立马画空格，会导致墙一部分消失） 
		gotoxy(tail_X,tail_Y);//将运动前的蛇尾变为空格 
		printf(" ");}
	if(hot){
		gotoxy(snake.body[0].x,snake.body[0].y);
		putchar('@');
	}
	gotoxy(0,HEIGHT+1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);//得分的颜色 
		printf("得分=%d",score);
}
void initfood(){//食物初始化 
	while(1){
		int flag=0;
		food.x=(rand()%(WIDTH-2))+1;
		food.y=(rand()%(HEIGHT-2))+1;
	
		for(int i=0;i<snake.size;i++){
			if(snake.body[i].x==food.x&&snake.body[i].y==food.y){
				flag=1;//食物和蛇的坐标重复 
				break;
			}
		}
		if(flag==0) break;//没有重复 
	}
}
void gameover(int mode){//死亡检测 
	if(mode==1){
		gotoxy(snake.body[0].x,snake.body[0].y);
		putchar('#');
		gotoxy(0,HEIGHT+1);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);//结束时出现的字的颜色 
	gotoxy(0,HEIGHT+2);
	printf("Game Over!!!\n");
	return;
 
} 
void gamestart1(){
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = FALSE;
	cci.dwSize = sizeof(cci);
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cci);
	
	srand((unsigned int)time(NULL));
	w1();
	initsnake();
	initfood(); 
	xianshi();
	
	//先记录一下蛇移动的方向 
	char key='d'; 
	char prekey = 'd';//记录上一次方向 
	int p=0;
	 
	//运动循环 
	while(snake.body[0].x>=1&&snake.body[0].x<=WIDTH-2&&snake.body[0].y>=1&&snake.body[0].y<=HEIGHT-2){
		if(_kbhit()){
			key=getch();
			if(key==32){
				sleeptime=30;
				p+=1;
			}
			if(p==2){
				p=0;
				sleeptime=200;
			}
		}
		if(key=='d'&&prekey=='a'||key=='a'&&prekey=='d'||key=='w'&&prekey=='s'||key=='s'&&prekey=='w'){
			key=prekey;
		}
		else{
			prekey=key;
		}
		
		switch(key)//上下左右移动 
		{
			case 'a':
				offset_X=-1;
				offset_Y=0;
				break;
			case 'd':
				offset_X=1;
				offset_Y=0;
				break;
			case 'w':
				offset_X=0;
				offset_Y=-1;
				break;
			case 's':
				offset_X=0;
				offset_Y=1;
				break;
		}
	
		for(int z=1;z<snake.size;z++){
			if(snake.body[0].x==snake.body[z].x&&snake.body[0].y==snake.body[z].y){//蛇吃了自己 
			gameover(1);
			return ;
			}
		}
		if(snake.body[0].x==food.x&&snake.body[0].y==food.y){
			snake.size++;
			score++;
			initfood();//随机新食物坐标 
		}
		tail_X=snake.body[snake.size-1].x;
		tail_Y=snake.body[snake.size-1].y;
		for(int i=snake.size-1;i>0;i--){
			snake.body[i].x = snake.body[i-1].x;
			snake.body[i].y = snake.body[i-1].y;
		}
		snake.body[0].x+=offset_X;
		snake.body[0].y+=offset_Y;
		
		//防止蛇出现环状时，头既是头又是尾，此时头显示为#，而不是@
		if(snake.body[0].x==tail_X&&snake.body[0].y==tail_Y){
			 hot=1;
		}
		else{
			hot=0; 
		}
		
		xianshi();
		
		Sleep(sleeptime);//行动停留 
	}
	
 
	gameover(2);
}

void printsnake()
{
	system("color a");
	printf("                                                                                         \n");
	printf("                       __________       ___                                              \n");
	printf("                      /          \\     / \\ \\    |____      __\\__                     \n");
	printf("                     /  ________  \\   / ___ \\  _/ __     | |   /                       \n");
	printf("                     |  |      |__|     _/_   |_|  /    [|] |/                           \n");
	printf("                     |  |              | | |      /     _|_ \\__/                        \n");
	printf("                     \\  \\_______        / \\      |___/        ____                    \n");
	printf("                      \\         \\    ____ ____      ____   __ |  |  ___   ______       \n");
	printf("                       \\_______  \\   |  |/    \\    /    \\_/ / |  | /  /  /      \\   \n");
	printf("                               \\  \\  |    ___  \\  / ____   /  |  |/  /  /  ____  \\   \n");
	printf("                     __        |  |  |   /   \\  \\ | |  |  /   |     /  |  /____\\  |   \n");
	printf("                    \\  \\_______|  |  |  |    |  | | |__|  |   |     \\  |  ________/   \n");
	printf("                     \\            /  |  |    |  |  \\       \\  |  |\\  \\  \\  \\____  \n");
	printf("                      \\__________/   |__|    |__|   \\___/\\__\\ |__| \\__\\  \\______/ \n");	
}

 
int main(){
 
	start:printf("\n\n\n				*********贪吃蛇大作战*********\n\n");
	printsnake();
	printf("\n\n				        1、开始游戏\n");
	printf("					2、退出游戏\n");
	printf("					3、游戏说明\n\n\n"); 
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1: system("cls");gamestart1();Sleep(1000);printf("\t\t按任意键返回主页面");getch();system("cls");sleeptime=200;score=0;goto start;break;
		case 3:
			system("cls");
			printf("游戏：贪吃蛇\n");
			printf("		独特主观延迟能力降低难度\n");
			printf("		按下空格即可加速\n\n\n");
			printf("按任意键返回主页面");
			getch();
			system("cls");
			goto start;
		case 4: exit(1);break;
	}  
	if(choice!=1&&choice!=2&&choice!=3&&choice!=4){
		printf("输入错误，请重新输入！");
		Sleep(3000); 
		system("cls");
		goto start;
	}
}
