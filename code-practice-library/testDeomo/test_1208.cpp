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
    printf("���������볤�����ߣ���1.0,1.0,1.0����\n");
    scanf("%f,%f,%f",&length,&width,&height);
    area=getSarea(length,width);
    volume=getV(length,width,height);
    printf("���Σ���%f����%f�������Ϊ%f\n",length,width,area);
    printf("���Σ���%f����%f����%f�������Ϊ%f\n",length,width,height,volume);
    }
    return 0;
}



char GetGradeLevel(int grade,int gradelevel)
{
	char Y;
	if (grade > 100 || grade < 0)
	{
		printf("�������"); 
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
		printf("������ɼ���0~100����\n");
		scanf("%d", &grade);
		gradelevel = GetGradeLevel(grade,gradelevel);
		printf("�ɼ�%d�ĵȼ���%c\n",grade,gradelevel);
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
		printf("nֵ������\n");
	}
	return (result);
}
int main()
{
	double result = 1.0;
	int n = 1;
	for(;n = 1;)
	{
		printf("������һ��������\n");
		scanf("%d",&n);
		if (n == 0)
		{
			break;
		}
		
		result = jiecheng(n);
		printf("%d�Ľ׳���%.lf\n",n,result);
	}
	return 0;
}


































