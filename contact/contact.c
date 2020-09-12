#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void initContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data)); //初始化
	ps->size = 0;//设置通讯录最开始有0个元素
}

void addContact(struct Contact* ps)
{
	if (ps->size == MAX) printf("通讯录已满，无法增加\n");
	else
	{
		printf("请输入名字>:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄>:");
		scanf("%s", &ps->data[ps->size].age);
		printf("请输入性别>:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话>:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址>:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

void showContact(const struct Contact* ps)
{
	if (ps->size == 0) printf("通讯录为空\n");
	else
	{
		int i;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; ++i)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr
			);
		}
	}
}
// 删除指定联系人
void delContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的人名字:>");
	scanf("%s", name);
	//1。查找要删除的人在什么位置
	int ret = findPeoInfo(ps, name);
	if (ret == -1) printf("要删除的人不存在\n");
	else
	{
		int j;
		for (j = ret; j < ps->size - 1; ++j)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
	}
}

void searchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的人名字:>");
	scanf("%s", name);
	//1。查找人在什么位置
	int ret = findPeoInfo(ps, name);
	if (ret == -1) printf("要删除的人不存在\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].addr);
	}
}

void modifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的人名字:>");
	scanf("%s", name);
	//1。查找人在什么位置
	int ret = findPeoInfo(ps, name);
	if (ret == -1) printf("要修改人的信息不存在\n");
	else
	{
		printf("请输入名字>:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄>:");
		scanf("%s", &ps->data[ps->size].age);
		printf("请输入性别>:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话>:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址>:");
		scanf("%s", ps->data[ps->size].addr);
		printf("修改成功\n");
	}

}

// 只能在当前文件内部使用 不暴露给外边 不用在头文件里面声明
static int findPeoInfo(const struct Contact* ps, char name[MAX])
{
	//查找要删除的人在什么位置
	int i;
	for (i = 0; i < ps->size; ++i)
	{
		if (0 == strcmp(ps->data[i].name, name)) return i;
	}
	return -1;
}
