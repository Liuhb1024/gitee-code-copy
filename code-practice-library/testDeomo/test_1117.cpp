//go to��� 

//#include <stdio.h> 
//int main ()
//��ѭ�� 
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	
//	goto flag; 
//	return 0;
// } 


//�ػ�����
//ֻҪ����������������1�����ڹػ������������������ȡ���ػ� 
//�ػ� shutdown -s -t60
//	ȡ���ػ� shutdown -a
//	c�����ṩһ��������system����- ִ��ϵͳ����
//	strcmp - string.h
//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	char input[20] = { 0 };     //����������Ϣ 
//	system("shutdown -s -t 60"); //system - stdlib.h
//again:
//	printf("��ע�⣬������1�����ڹػ������������������ȡ���ػ�\n");
//	scanf("%s",input); 
//	
//	if (strcmp (input, "������") == 0)   //�����ַ����Ƚϲ���ʹ��==��Ӧ��ʹ��strcmp() string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
////goto����ֻ����һ��������Χ����ת�����ܿ纯�� 
//
//
//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	char intput[20] = { 0 };     
//	system("shutdown -s -t 60"); 
//again:
//	while(1)
//	{
//		printf("��ע�⣬������1�����ڹػ������������������ȡ���ػ�\n");
//	scanf("%s",intput); 
//	
//	if (strcmp (input, "������") == 0)   
//	{        
//		system("shutdown -a");
//		break;
//	}
//	}
//	return 0;
//}
































