#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo* data;//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼�������
};

void initContact(struct Contact* ps);
void addContact(struct Contact* ps);
void showContact(const struct Contact* ps);
void delContact(struct Contact* ps);
void searchContact(const struct Contact* ps); // ����ָ����
//int findPeoInfo(const struct Contact* ps, char name[MAX]); // �ҵ������˵��±�
void modifyContact(struct Contact* ps);
void destoryContact(struct Contact* ps);
void saveContact(const struct Contact* ps);//��ͨѶ¼���г־û�����
void loadContact(struct Contact* ps);//�����ļ��е���Ϣ��ͨѶ¼