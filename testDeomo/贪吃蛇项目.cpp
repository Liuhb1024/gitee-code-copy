#define WIN_WIDTH 640
#define WIN_HEIGHT 480
#define MAX_SNAKE 120

initgraph(WIN_WIDTH,WIN_HEIGHT,SHOWCONSOLE);//��ʼ��һ��ͼ�δ���

	printf("\tWelcome! \n");
	printf("\tPlay Game Right Now��\n");

struct Snake_tlg  //�ߵĽṹ��
{
	int num;  // ����ĳ���
	int direction;  //����
	int score;  
	int size;  //�ߵĳߴ磬����͸߶�
	POINT coor[MAX_SNAKE];  //λ������
 
} 
    snake;
    
struct Food_tlg  //ʳ��ĳ��� �ṹ��
{
	POINT fd;  //����
	int flag;  //�Ƿ��Ѿ����߳Ե�
	DWORD color;  //ʳ�����ɫ
}
    food;
    
void GameInit()
{
	srand((unsigned int)time(NULL));
	//����snake
	snake.num = 3;
	snake.direction = RIGHT;
	snake.score = 0;
	snake.size = 10;
	snake.coor[2].x = 0;
	snake.coor[2].y = 0;
	snake.coor[1].x = 0 + snake.size;
	snake.coor[1].y = 0;
	snake.coor[0].x = 
 } 

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
