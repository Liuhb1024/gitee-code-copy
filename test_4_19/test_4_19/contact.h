#pragma once//����
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TLE 12
#define MAX_ADDR 30

//��ʾһ���˵���Ϣ
typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TLE];
    char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
    PeoInfo data[MAX];//�������
    int sz;//��¼ͨѶ¼����Ч��Ϣ�ĸ���
}Contact,*pContact;

//��ʼ��ͨѶ¼
void InitContact(Contact *pc);

//����ָ����ϵ��
void AddContact(Contact* pc);

//��ʾ��ϵ����Ϣ
void ShowContact(const Contact* pc);

//ɾ��ָ����ϵ��
//void DelContact(Contact* pc);
void DelContact(pContact pc);

//����ָ����ϵ��
void SearchContact(pContact pc);

//�޸�ͨѶ¼
void ModifyContact(Contact* pc);

//����ͨѶ¼
void SortContact(Contact* pc);