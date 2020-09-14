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
	struct PeoInfo* data;//存放一个信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录最大容量
};

void initContact(struct Contact* ps);
void addContact(struct Contact* ps);
void showContact(const struct Contact* ps);
void delContact(struct Contact* ps);
void searchContact(const struct Contact* ps); // 查找指定人
//int findPeoInfo(const struct Contact* ps, char name[MAX]); // 找到所查人的下标
void modifyContact(struct Contact* ps);
void destoryContact(struct Contact* ps);
void saveContact(const struct Contact* ps);//对通讯录进行持久化保存
void loadContact(struct Contact* ps);//加载文件中的信息到通讯录