#include<stdio.h>
#include<stdlib.h>
int main()
{
    float grade1,grade2,grade3,sum;
    printf("�����һ��ѧ�����ſγɼ�:\n");
    scanf("%f %f %f",&grade1,&grade2,&grade3);
    getchar();
    sum=grade1+grade2+grade3;
    printf("�����һ��ѧ�����ܳɼ�:%f\n",sum);

    printf("����ڶ���ѧ�����ſγɼ�:\n");
    scanf("%f %f %f",&grade1,&grade2,&grade3);
    getchar();
    sum=grade1+grade2+grade3;
    printf("����ڶ���ѧ���ܳɼ�:%f\n",sum);

    printf("���������ѧ�����ſγɼ�:\n");
    scanf("%f %f %f",&grade1,&grade2,&grade3);
    getchar();
    sum=grade1+grade2+grade3;
    printf("���������ѧ���ܳɼ�:%f\n",sum);
    return 0;


}
