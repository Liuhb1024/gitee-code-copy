//��д���룬����ַ��м��ƶ������м��� 
//welcome to bit!!
//################
//w##############!
//we############!!
//��������
//welcome to bit!!

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//	    arr2[right] = arr1[right];
//	    printf("%s\n", arr2);
//	    Sleep(1000);   //���� 
//	    system("cls"); //�����Ļ 
//	    left++;
//	    right--; 
//	 } 
//	 printf("%s\n", arr2);
//	return 0;
//}


//��д���룬ģ���û���¼����ֻ�ܵ�½���Ρ�
//��ֻ���������������룬Y��ɹ���F���˳���
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	//������ȷ�����ǡ�12346 �� 
//	char password[20] = {0};
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s",password);
//	//	if(password == "123456")//�����ַ����Ƚϣ�������==��Ӧ����strcmp 
//	    
//	    if(strcmp(password,"123456") ==0) 
//	    {
//	    	printf("��¼�ɹ�\n");
//	    	break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	
//	    if(i = 3)
//	   
//	   	 printf("��������������˳�����\n"); 
//	}   	 
//	return 0;
// } 




//дһ����������Ϸ
//1.�Զ�����һ��1~100֮��������
//2.������
//a.�¶��ˣ���ϲ�㣬��Ϸ����
//b.�´��ˣ��������´��˻���С�ˣ������£�ֱ���¶�
//3.��Ϸһֱ�棬�����˳���Ϸ

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
void menu()
{
	printf("*******************\n");
	printf("*******************\n");
	printf("****  1. play  ****\n");
	printf("****  0. exit  ****\n");
	printf("*******************\n");
	printf("*******************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0~32767�����֣��������
	//ʱ��-ʱ���  ���������
	 
//	srand((unsigned int)time(NULL));
	//�ٶȿ�������Բ������������main�������� 
	 
	int ret = rand()%100+1;//%100��������0~99��Ȼ��+1����Χ����1~100 
//	printf("%d\n",ret);
	
	//2.������ 
	int guess = 0;
	while (1) 
	{
		printf("�������:>");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣡�¶��ˣ�\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//������������� 
	
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d",&input); 
		switch (input)
		{
			case 1:
			//	printf("������\n");
			    game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;		
		}
		
	}
	while (input);
	return 0;
 } 































































