#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
 
 
void menu();      //������
void equation();  //��һԪ���η���
void year();      //�ж�����Ƿ�Ϊ����
void daffodil();  //�ж�ĳһ�����Ƿ�Ϊˮ�ɻ���
 
void color(short x); //�ı�������ɫ
void back_e();       //�ⷽ�� ���ؽ���
void back_y() ;      //���� ���ؽ���
void back_d();       //ˮ�ɻ��� ����
 
int main()
{
 
    menu();
    return 0;
}
 
void menu()
{
    int l;
            printf("===================================\n");
            printf("\t    ������Ϸ\t\n");
            printf("===================================\n");
            printf("\t1.��һԪ���η��� \t\n");
            printf("===================================\n");
            printf("\t2.�ж�����Ƿ�Ϊ���� \t\n");
            printf("===================================\n");
            printf("\t3.�ж�ĳһ�����Ƿ�Ϊˮ�ɻ���\t\n");
            printf("===================================\n");
            printf("\t4.�˳�   \n");
            printf("===================================\n");
            printf("������ѡ�����Ϸ: ");
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
            printf("��л����ʹ��,���˳���\n");
            exit(0);
        default:
            color(772);
            printf("[�������]��3�������������Ч����!\n");
            Sleep(3000);
            color(7);
            system("cls");
            menu();
            break;
        }
}
 
void color(short x) //�ı�������ɫ
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
 
void equation() //��һԪ���η���
{
   float a,b,c,dis;
   printf("\t  ��һԪ���η��� \t\n");
   printf("һԪ���η���:ax2+bx+c=0\n");
   printf("���������a,b,c: ");
   scanf("%f%f%f",&a,&b,&c);
   if(a==0){
        if(b==0){
 
             if(c!=0){
                printf("\n�޷����ɵ�ʽ!\n");
                }
 
              else{
                printf("\n��ʽ��Ϊ���ʽ0=0!\n");
                }
 
            }
         else{
            printf("\n��ʽ��ΪһԪһ�η���,���Ϊ: %f\n",-c/b);
         }
   }
   else{
 
       dis=b*b-4*a*c;
       if(dis<0)
           printf("\n�������������: x1=%f+%fi \n\t\tx2=%f-%fi\n ",-b/(2*a),sqrt(-dis)/(2*a),-b/(2*a),sqrt(-dis)/(2*a));
       if(dis==0)
           printf("\n������������ȵ�ʵ��: x1=x2=%f\n ",-b/(2*a));
       if(dis>0)
           printf("\n���������������ʵ��: x1=%f\n\t\t      x2=%f\n",(-b+sqrt(dis))/(2*a),(-b-sqrt(dis))/(2*a));
   }
 
    back_e();
}
 
void year()      //�ж�����Ƿ�Ϊ����
{
    int year;
    printf("\t�ж�����Ƿ�Ϊ���� \t\n");
    printf("���������: ");
    scanf("%d",&year);
    if(year%400==0)
        printf("\n%d��������!\n",year);
    else{
        if(year%4==0&&year%100!=0){
            printf("\n%d��������!\n",year);}
        else{
            printf("\n%d����ƽ��!\n",year);}
            }
 
    back_y();
}
 
void daffodil() //�ж�ĳһ�����Ƿ�Ϊˮ�ɻ���
{
    int tem,num;
    printf("\t�ж��Ƿ�Ϊˮ�ɻ���\n");
    printf("������һ������: ");
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
            printf("\n%d��ˮ�ɻ���\n",num);
        }
        else
            printf("\n%d����ˮ�ɻ���\n",num);
 
    back_d();
 
}
 
 
void back_e() //�ⷽ�� ���ؽ���
{
    int l;
    printf("\n1.������Ϸ");
    printf("\n2.����������");
    printf("\n=========================");
    printf("\n������Ҫִ�еĲ���: ");
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
            printf("[�������]��3�������������Ч����!\n");
            Sleep(3000);
            color(7);
            back_e();
            break;
        }
}
 
 
 
void back_y() //���� ���ؽ���
{
    int l;
    printf("\n1.������Ϸ");
    printf("\n2.����������");
    printf("\n=========================");
    printf("\n������Ҫִ�еĲ���: ");
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
            printf("[�������]��3�������������Ч����!\n");
            Sleep(3000);
            color(7);
            back_e();
            break;
        }
}
 
void back_d() //ˮ�ɻ� ���ؽ���
{
    int l;
    printf("\n1.������Ϸ");
    printf("\n2.����������");
    printf("\n=========================");
    printf("\n������Ҫִ�еĲ���: ");
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
            printf("[�������]��3�������������Ч����!\n");
            Sleep(3000);
            color(7);
            back_d();
            break;
        }
}
