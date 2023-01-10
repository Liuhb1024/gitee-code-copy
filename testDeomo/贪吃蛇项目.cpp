#define WIN_WIDTH 640
#define WIN_HEIGHT 480
#define MAX_SNAKE 120

initgraph(WIN_WIDTH,WIN_HEIGHT,SHOWCONSOLE);//初始化一个图形窗口

	printf("\tWelcome! \n");
	printf("\tPlay Game Right Now！\n");

struct Snake_tlg  //蛇的结构体
{
	int num;  // 身体的长度
	int direction;  //方向
	int score;  
	int size;  //蛇的尺寸，身体和高度
	POINT coor[MAX_SNAKE];  //位置坐标
 
} 
    snake;
    
struct Food_tlg  //食物的出现 结构体
{
	POINT fd;  //坐标
	int flag;  //是否已经被蛇吃掉
	DWORD color;  //食物的颜色
}
    food;
    
void GameInit()
{
	srand((unsigned int)time(NULL));
	//定义snake
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

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
