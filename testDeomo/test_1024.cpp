#include<stdio.h>
#include<stdlib.h>
int main()
{
    float grade1,grade2,grade3,sum;
    printf("输入第一个学生三门课成绩:\n");
    scanf("%f %f %f",&grade1,&grade2,&grade3);
    getchar();
    sum=grade1+grade2+grade3;
    printf("输出第一个学生的总成绩:%f\n",sum);

    printf("输入第二个学生三门课成绩:\n");
    scanf("%f %f %f",&grade1,&grade2,&grade3);
    getchar();
    sum=grade1+grade2+grade3;
    printf("输出第二个学生总成绩:%f\n",sum);

    printf("输入第三个学生三门课成绩:\n");
    scanf("%f %f %f",&grade1,&grade2,&grade3);
    getchar();
    sum=grade1+grade2+grade3;
    printf("输出第三个学生总成绩:%f\n",sum);
    return 0;


}
