#include<stdio.h> 
#include <stdlib.h> 
//int main()
//{
// int stuNum = 0,remainder=-1,weekNum=0;
// printf("请输入学号[142011001,142015000):");
// scanf("%d", &stuNum);
// if ((142011001 > stuNum) && (stuNum <= 142015000)) { printf("学号输入错误,应该在[14201101,142015000)内"); };
// printf("请输入周数[1,20]:");
// scanf("%d", &weekNum);
// if ((1 >= weekNum) || (weekNum >= 20)) {
//  printf("周数输入错误，应该在[1,20]内\n");
//  return 0;
// }
//  remainder = stuNum % 10;
//  if (remainder % 3 == weekNum % 3)
//  {
//   printf("学生%d在第%d周应该交作业吗?是 ", stuNum, weekNum);
//  }
//  else { printf("学生%d在第%d周应该交作业吗?否 ", stuNum, weekNum); }
// 
// return 0;
//}

//int main()
//{
//	int grade = -1;
//	char gradelevel = '0';
//	printf("请输入成绩（0~100）：\n");
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
	printf("请输入成绩（0~100）:\n");
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
	printf("成绩%3d的等级是%c:\n",grade,gradelevel);
	printf("so easy!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	return 0;
}
























