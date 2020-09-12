#pragma once
#include <stdio.h>
#include <string.h>

#define MAX 100
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
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

void initContact(struct Contact* con);
void addContact(struct Contact* peo);
void showContact(const struct Contact* ps);
void delContact(struct Contact* ps);
void searchContact(const struct Contact* ps); // ����ָ����
//int findPeoInfo(const struct Contact* ps, char name[MAX]); // �ҵ������˵��±�
void modifyContact(struct Contact* ps);