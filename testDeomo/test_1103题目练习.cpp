#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,d;
      printf("����������:\n");
    scanf("%d",&a);
    
  for(b = 1; b <= (a+1)/2; b++)//�������� 
{
  for(c = 1; c <= (a+1)/2-b; c++)//��ӡ�ո� 
      printf(" ");
      
  for(d = 1; d <= 2*b-1; d++)//��ӡ"*" 
      printf("*");
      printf("\n");
}
  for(b = 1; b <= (a-1)/2; b++)//�������� 
{
  for(c = 1;c <= b; c++)//��ӡ�ո� 
      printf(" ");
  for(d = a-2*b; d > 0; d--)//��ӡ"*" 
      printf("*");
      printf("\n");
}
   return 0;
}
 
