#include <stdio.h>
#include <stdlib.h>

//int fun(int n) {
// double result = 1.0;
// int i = 1;
//  printf("请输入求阶乘中的n（1~100）：\n");
// scanf("%d", &n);
// for (i = 1; i<= n; i++) {
//  result *= i;
// 
// }
// return result;
//}
//int main()
//{
// printf("阶乘为：%d\n", fun(0));
// return 0;
//}

//char getGradeLevel(int grade);
// 
//int main()
//{
//    int grade = -1;
//    char gradeLevel = '0';
//    printf("请输入成绩（0~100）：\n");
//    scanf("%d", &grade);
//    gradeLevel = getGradeLevel(grade);
//    printf("成绩为 %d, 等级为 %c \n", grade, gradeLevel);
//    printf("So easy!!!!!!!!!!\n");
//    return 0;
//}
//char getGradeLevel(int grade)
//{ 
//    if ( 0<=grade && grade <60)
//    {
//        return 'E';
//    }
//    else if ( 60<=grade && grade <70)
//    {
//        return 'D';
//    }
//    else if ( 70<=grade && grade <80 )
//    {
//        return 'C';
//    }
//    else if ( 80<=grade && grade <90 )
//    {
//        return 'B';
//    }
//    else if ( 80<=grade && grade <=100 )
//    {
//        return 'A';
//    }
//    else
//    {
//        return '0';
//    }
//} 


#include<stdio.h>
float getRectvolume(float l,float w,float h)
{
    return l*w*h;
}
float getRectArea(float l,float w)
{
    return l * w;
}
int main()
{
    float length=0,width=0,height=0,area=0,volume=0;
    printf("请分别输入长度宽度和高:");
    scanf("%f %f %f",&length,&width,&height);
    volume=getRectvolume(length,width,height);
    area=getRectArea(length,width);
    printf("长度=%.2f\n宽度=%.2f\n高度=%.2f\n面积=%.2f\n体积=%.2f\n",length,width,height,area,volume);
    return 0;
}






























