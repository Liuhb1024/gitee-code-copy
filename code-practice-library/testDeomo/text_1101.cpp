//do while()ѭ��
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	}
//	while (i<=10);
//	return 0;
// } 

//do while��ѭ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		   continue;
//		   
//		printf("%d",i);
//		i++;
//	}
//	while (i<=10);
//	return 0;
// } 


//practice:����n�Ľ׳�

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n",ret);
//	
//	return 0;
//}



//99�˷���
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for(j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		putchar('\n');
//	}
//	return 0;
// } 




//practice2:����1��+����������+n!
 
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3! = 9
//	//3��=3*2*1=3*2�� 
//	for(n=1; n <= 3; n++)
//	{
//		ret = 1;         //����n�Ľ׳�֮ǰ����ret��ʼΪ1 
//	     for (i = 1; i <= n; i++)
//	    {
//		ret *= i;
//	    }
//	    sum += ret;
//	}
//	printf("%d\n",sum);
//	
//	return 0;
//}

//�Ľ�
 
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
// } 














