#include<stdio.h> 
#include <stdlib.h> 
//int main()
//{
// int stuNum = 0,remainder=-1,weekNum=0;
// printf("������ѧ��[142011001,142015000):");
// scanf("%d", &stuNum);
// if ((142011001 > stuNum) && (stuNum <= 142015000)) { printf("ѧ���������,Ӧ����[14201101,142015000)��"); };
// printf("����������[1,20]:");
// scanf("%d", &weekNum);
// if ((1 >= weekNum) || (weekNum >= 20)) {
//  printf("�����������Ӧ����[1,20]��\n");
//  return 0;
// }
//  remainder = stuNum % 10;
//  if (remainder % 3 == weekNum % 3)
//  {
//   printf("ѧ��%d�ڵ�%d��Ӧ�ý���ҵ��?�� ", stuNum, weekNum);
//  }
//  else { printf("ѧ��%d�ڵ�%d��Ӧ�ý���ҵ��?�� ", stuNum, weekNum); }
// 
// return 0;
//}

//int main()
//{
//	int grade = -1;
//	char gradelevel = '0';
//	printf("������ɼ���0~100����\n");
//	scanf("%d", &grade);
//	if((grade >= 0) && (grade < 60))
//	{
//		printf("gradelevel = E\n");
//	}
//	else if ((grade >= 60) && (grade < 70))
//	{
//		printf("gradelevel = D\n");
//	}
//	else if ((grade >= 70) && (grade < 80))
//	{
//		printf("gradelevel = C\n");
//	}
//	else if ((grade >= 80) && (grade < 90))
//	{
//		printf("gradelevel = B\n");
//	}
//	else
//	{
//		printf("gradelevel = A\n");
//	}
//	printf("so easy!!!!!!!!!!!!!!!!!!!!!!");
//	return 0;
//}

int main()
{
	int grade = -1;
	char gradelevel = '0';
	printf("������ɼ���0~100��:\n");
	scanf("%d",&grade);\
	int grade_d10 = grade / 10;
	switch (grade_d10)
	{
		case 10:
		case 9:
		       gradelevel = 'A';
			   break;
		case 8:
		       gradelevel = 'B';
			   break;	
		case 7:
		       gradelevel = 'C';
			   break;	
		case 6:
		       gradelevel = 'D';
			   break;		
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:	
		    
		       gradelevel = 'E';
		       break;
		      		   	   	   	   	 	
	}
	printf("�ɼ�%3d�ĵȼ���%c:\n",grade,gradelevel);
	printf("so easy!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	return 0;
}
























