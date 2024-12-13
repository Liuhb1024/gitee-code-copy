#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,d;
      printf("请输入奇数:\n");
    scanf("%d",&a);
    
  for(b = 1; b <= (a+1)/2; b++)//画上三角 
{
  for(c = 1; c <= (a+1)/2-b; c++)//打印空格 
      printf(" ");
      
  for(d = 1; d <= 2*b-1; d++)//打印"*" 
      printf("*");
      printf("\n");
}
  for(b = 1; b <= (a-1)/2; b++)//画下三角 
{
  for(c = 1;c <= b; c++)//打印空格 
      printf(" ");
  for(d = a-2*b; d > 0; d--)//打印"*" 
      printf("*");
      printf("\n");
}
   return 0;
}
 
