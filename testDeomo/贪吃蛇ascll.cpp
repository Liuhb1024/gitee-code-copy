#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<mmstream.h>
#pragma comment(lib,"winmm.lib") 
//�������� 
#define HEIGHT 45
#define WIDTH 100

 
void gamestart1();
void gamestart2();
int score=0;
int offset_X;//X���ƶ� 
int offset_Y;//y���ƶ� 
//β�͵����� 
int tail_X;
int tail_Y;
int hot; 
int sleeptime=200;


struct BODY//����Ľṹ�� 
{
	int x;
	int y; 
};
struct SNAKE//�����ߵĽṹ�� 
{
	struct BODY body[(HEIGHT-2)*(WIDTH-2)];//�ߵ�����
	int size;//�ߵĳ��� 
}snake;
struct FOOD//ʳ��Ľṹ�� 
{
	int x;
	int y;
}food;

void initsnake(){//�߳�ʼ�� 
	snake.size=3;//�߸տ�ʼΪ�������(����ͷ) 
	snake.body[0].x=WIDTH/2;
	snake.body[0].y=HEIGHT/2;
	snake.body[1].x=WIDTH/2-1;
	snake.body[1].y=HEIGHT/2;
	snake.body[2].x=WIDTH/2-2;
	snake.body[2].y=HEIGHT/2;
} 
void w1(){//ǽ�ĳ�ʼ�� 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);//����ǽ����ɫ 
	for(int i=0;i<HEIGHT;i++){
		for(int j=0;j<WIDTH;j++){
			if(i==0||j==0||i==HEIGHT-1||j==WIDTH-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		if(i==5) printf("		    ̰����������ʾ");
		if(i==6) printf("			��: w");
		if(i==7) printf("			��: s");
		if(i==8) printf("			��: a");
		if(i==9) printf("			��: d"); 
		if(i==11) printf("			���ո������");
		printf("\n");
	}
	
}

void gotoxy(int x,int y)
{ //���ת��λ�� 
	if(x==0&&y==0){
		return;
	} 
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void xianshi()
{//��ʾ�ߺ�ʳ�� 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);//�ߵ���ɫ 
	for(int i=0;i<snake.size;i++){
		gotoxy(snake.body[i].x,snake.body[i].y);//�ƶ����
		if(i==0){
			printf("@");//ͷ 
		}
		else{
			printf("#");//���� 
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);//ʳ�����ɫ 
	gotoxy(food.x,food.y);
	printf("*");
	if(tail_X!=0&&tail_Y!=0){//��ֹ��һ�ν���ʱ����������ǽ�ԣ�����ʳ��������ո񣬻ᵼ��ǽһ������ʧ�� 
		gotoxy(tail_X,tail_Y);//���˶�ǰ����β��Ϊ�ո� 
		printf(" ");}
	if(hot){
		gotoxy(snake.body[0].x,snake.body[0].y);
		putchar('@');
	}
	gotoxy(0,HEIGHT+1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);//�÷ֵ���ɫ 
		printf("�÷�=%d",score);
}
void initfood(){//ʳ���ʼ�� 
	while(1){
		int flag=0;
		food.x=(rand()%(WIDTH-2))+1;
		food.y=(rand()%(HEIGHT-2))+1;
	
		for(int i=0;i<snake.size;i++){
			if(snake.body[i].x==food.x&&snake.body[i].y==food.y){
				flag=1;//ʳ����ߵ������ظ� 
				break;
			}
		}
		if(flag==0) break;//û���ظ� 
	}
}
void gameover(int mode){//������� 
	if(mode==1){
		gotoxy(snake.body[0].x,snake.body[0].y);
		putchar('#');
		gotoxy(0,HEIGHT+1);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);//����ʱ���ֵ��ֵ���ɫ 
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
	
	//�ȼ�¼һ�����ƶ��ķ��� 
	char key='d'; 
	char prekey = 'd';//��¼��һ�η��� 
	int p=0;
	 
	//�˶�ѭ�� 
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
		
		switch(key)//���������ƶ� 
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
			if(snake.body[0].x==snake.body[z].x&&snake.body[0].y==snake.body[z].y){//�߳����Լ� 
			gameover(1);
			return ;
			}
		}
		if(snake.body[0].x==food.x&&snake.body[0].y==food.y){
			snake.size++;
			score++;
			initfood();//�����ʳ������ 
		}
		tail_X=snake.body[snake.size-1].x;
		tail_Y=snake.body[snake.size-1].y;
		for(int i=snake.size-1;i>0;i--){
			snake.body[i].x = snake.body[i-1].x;
			snake.body[i].y = snake.body[i-1].y;
		}
		snake.body[0].x+=offset_X;
		snake.body[0].y+=offset_Y;
		
		//��ֹ�߳��ֻ�״ʱ��ͷ����ͷ����β����ʱͷ��ʾΪ#��������@
		if(snake.body[0].x==tail_X&&snake.body[0].y==tail_Y){
			 hot=1;
		}
		else{
			hot=0; 
		}
		
		xianshi();
		
		Sleep(sleeptime);//�ж�ͣ�� 
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
 
	start:printf("\n\n\n				*********̰���ߴ���ս*********\n\n");
	printsnake();
	printf("\n\n				        1����ʼ��Ϸ\n");
	printf("					2���˳���Ϸ\n");
	printf("					3����Ϸ˵��\n\n\n"); 
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1: system("cls");gamestart1();Sleep(1000);printf("\t\t�������������ҳ��");getch();system("cls");sleeptime=200;score=0;goto start;break;
		case 3:
			system("cls");
			printf("��Ϸ��̰����\n");
			printf("		���������ӳ����������Ѷ�\n");
			printf("		���¿ո񼴿ɼ���\n\n\n");
			printf("�������������ҳ��");
			getch();
			system("cls");
			goto start;
		case 4: exit(1);break;
	}  
	if(choice!=1&&choice!=2&&choice!=3&&choice!=4){
		printf("����������������룡");
		Sleep(3000); 
		system("cls");
		goto start;
	}
}
