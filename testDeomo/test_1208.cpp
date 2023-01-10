#include <stdio.h>
#include <stdlib.h>
/*float getSarea(float length,float width)
    {
        float S;
        S=length*width;
        return(S);
    }
float getV(float length,float width,float height)
    {
        float V;
        V=length*width*height;
        return(V);
    }
int main()
{
    float length,width,height,volume,area;
    while(area>=0)
    {
    printf("请依次输入长、宽、高（如1.0,1.0,1.0）：\n");
    scanf("%f,%f,%f",&length,&width,&height);
    area=getSarea(length,width);
    volume=getV(length,width,height);
    printf("矩形（长%f，宽%f）的面积为%f\n",length,width,area);
    printf("矩形（长%f，宽%f，高%f）的体积为%f\n",length,width,height,volume);
    }
    return 0;
}



char GetGradeLevel(int grade,int gradelevel)
{
	char Y;
	if (grade > 100 || grade < 0)
	{
		printf("输入错误"); 
		gradelevel = '0'; 
	}
	else if (grade >= 0 && grade < 60)
	{
		gradelevel = 'E';
	}
	else if (grade >= 60 && grade <70)
	{
		gradelevel = 'D';
	}
	else if (grade >= 70 && grade < 80)
	{
		gradelevel = 'C';
	}
	else if (grade >= 80 && grade < 90)
	{
		gradelevel = 'B';
	}
	else if (grade >= 90 && grade < 100)
	{
		gradelevel = 'A';
	}
	Y = gradelevel;
	return (Y);
}


int main ()
{
	int grade = -1;
	char gradelevel = '0';
	while (grade != 0)
	{
		printf("请输入成绩（0~100）：\n");
		scanf("%d", &grade);
		gradelevel = GetGradeLevel(grade,gradelevel);
		printf("成绩%d的等级是%c\n",grade,gradelevel);
		printf("so easy!!!!\n");
	}
	return 0;
}

*/


int jiecheng (int n)
{
	double result;
	if (n > 1)
	{
		result = n * jiecheng(n - 1);
	}
	if (n == 1)
	{
		result = 1;
	}
	if (n < 1)
	{
		result = -1;
		printf("n值出错！！\n");
	}
	return (result);
}
int main()
{
	double result = 1.0;
	int n = 1;
	for(;n = 1;)
	{
		printf("请输入一个整数：\n");
		scanf("%d",&n);
		if (n == 0)
		{
			break;
		}
		
		result = jiecheng(n);
		printf("%d的阶乘是%.lf\n",n,result);
	}
	return 0;
}


































