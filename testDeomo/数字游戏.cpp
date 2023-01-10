#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
 
 
void menu();      //主界面
void equation();  //解一元二次方程
void year();      //判断年份是否为闰年
void daffodil();  //判断某一数字是否为水仙花数
 
void color(short x); //改变字体颜色
void back_e();       //解方程 返回界面
void back_y() ;      //闰年 返回界面
void back_d();       //水仙花数 返回
 
int main()
{
 
    menu();
    return 0;
}
 
void menu()
{
    int l;
            printf("===================================\n");
            printf("\t    数字游戏\t\n");
            printf("===================================\n");
            printf("\t1.解一元二次方程 \t\n");
            printf("===================================\n");
            printf("\t2.判断年份是否为闰年 \t\n");
            printf("===================================\n");
            printf("\t3.判断某一数字是否为水仙花数\t\n");
            printf("===================================\n");
            printf("\t4.退出   \n");
            printf("===================================\n");
            printf("请输入选择的游戏: ");
            printf("===================================\n");
            scanf("%d",&l);
 
    switch(l){
        case 1:
            system("cls");
            equation();
            break;
        case 2:
            system("cls");
            year();
 
            break;
        case 3:
            system("cls");
            daffodil();
 
            break;
        case 4:
            printf("感谢您的使用,已退出！\n");
            exit(0);
        default:
            color(772);
            printf("[输入错误]请3秒后重新输入有效数字!\n");
            Sleep(3000);
            color(7);
            system("cls");
            menu();
            break;
        }
}
 
void color(short x) //改变字体颜色
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
 
void equation() //解一元二次方程
{
   float a,b,c,dis;
   printf("\t  解一元二次方程 \t\n");
   printf("一元二次方程:ax2+bx+c=0\n");
   printf("请输入参数a,b,c: ");
   scanf("%f%f%f",&a,&b,&c);
   if(a==0){
        if(b==0){
 
             if(c!=0){
                printf("\n无法构成等式!\n");
                }
 
              else{
                printf("\n该式子为恒等式0=0!\n");
                }
 
            }
         else{
            printf("\n该式子为一元一次方程,其根为: %f\n",-c/b);
         }
   }
   else{
 
       dis=b*b-4*a*c;
       if(dis<0)
           printf("\n方程有两个虚根: x1=%f+%fi \n\t\tx2=%f-%fi\n ",-b/(2*a),sqrt(-dis)/(2*a),-b/(2*a),sqrt(-dis)/(2*a));
       if(dis==0)
           printf("\n方程有两个相等的实根: x1=x2=%f\n ",-b/(2*a));
       if(dis>0)
           printf("\n方程有两个不相等实根: x1=%f\n\t\t      x2=%f\n",(-b+sqrt(dis))/(2*a),(-b-sqrt(dis))/(2*a));
   }
 
    back_e();
}
 
void year()      //判断年份是否为闰年
{
    int year;
    printf("\t判断年份是否为闰年 \t\n");
    printf("请输入年份: ");
    scanf("%d",&year);
    if(year%400==0)
        printf("\n%d年是闰年!\n",year);
    else{
        if(year%4==0&&year%100!=0){
            printf("\n%d年是闰年!\n",year);}
        else{
            printf("\n%d年是平年!\n",year);}
            }
 
    back_y();
}
 
void daffodil() //判断某一数字是否为水仙花数
{
    int tem,num;
    printf("\t判断是否为水仙花数\n");
    printf("请输入一个整数: ");
    scanf("%d",&num);
    int n=0,sum=0;
    tem=num;
        while(tem){
            n++;
            tem/=10;
 
        }
        tem=num;
        while(tem)
        {
            sum+=pow(tem%10,n);
            tem/=10;
 
        }
        if(sum==num){
            printf("\n%d是水仙花数\n",num);
        }
        else
            printf("\n%d不是水仙花数\n",num);
 
    back_d();
 
}
 
 
void back_e() //解方程 返回界面
{
    int l;
    printf("\n1.继续游戏");
    printf("\n2.返回主界面");
    printf("\n=========================");
    printf("\n请输入要执行的操作: ");
    scanf("%d",&l);
    switch(l){
         case 1:
            system("cls");
            equation();
            break;
        case 2:
            system("cls");
            menu();
            break;
        default:
            color(772);
            printf("[输入错误]请3秒后重新输入有效数字!\n");
            Sleep(3000);
            color(7);
            back_e();
            break;
        }
}
 
 
 
void back_y() //闰年 返回界面
{
    int l;
    printf("\n1.继续游戏");
    printf("\n2.返回主界面");
    printf("\n=========================");
    printf("\n请输入要执行的操作: ");
    scanf("%d",&l);
    switch(l){
         case 1:
            system("cls");
            year();
            break;
        case 2:
            system("cls");
            menu();
            break;
        default:
            color(772);
            printf("[输入错误]请3秒后重新输入有效数字!\n");
            Sleep(3000);
            color(7);
            back_e();
            break;
        }
}
 
void back_d() //水仙花 返回界面
{
    int l;
    printf("\n1.继续游戏");
    printf("\n2.返回主界面");
    printf("\n=========================");
    printf("\n请输入要执行的操作: ");
    scanf("%d",&l);
    switch(l){
         case 1:
            system("cls");
            daffodil();
            break;
        case 2:
            system("cls");
            menu();
            break;
        default:
            color(772);
            printf("[输入错误]请3秒后重新输入有效数字!\n");
            Sleep(3000);
            color(7);
            back_d();
            break;
        }
}
