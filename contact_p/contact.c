#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void initContact(struct Contact* ps)
{
	ps->data = malloc(DEFAULT_SZ*sizeof(int));
	if (!ps)
	{
		printf("�����ڴ�ʧ��\n");
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

static void checkCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ�ܣ�%s\n", strerror(errno));
		}
	}
}
void addContact(struct Contact* ps)
{
	/*if (ps->size == MAX) printf("ͨѶ¼�������޷�����\n");
	else
	{
		printf("����������>:");
		scanf("%s", ps->data[ps->size].name);
		printf("����������>:");
		scanf("%s", &ps->data[ps->size].age);
		printf("�������Ա�>:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰>:");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ>:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}*/
	// ��鵱ǰͨѶ¼������
	// 1.����� ��������
	// 2.������� ɶ��Ҳ����
	checkCapacity(ps);
	//��������
	printf("����������>:");
	scanf("%s", ps->data[ps->size].name);
	printf("����������>:");
	scanf("%s", &ps->data[ps->size].age);
	printf("�������Ա�>:");
-	scanf("%s", ps->data[ps->size].sex);
	printf("������绰>:");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ>:");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");

}



void showContact(const struct Contact* ps)
{
	if (ps->size == 0) printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
// ɾ��ָ����ϵ��
void delContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ����������:>");
	scanf("%s", name);
	//1������Ҫɾ��������ʲôλ��
	int ret = findPeoInfo(ps, name);
	if (ret == -1) printf("Ҫɾ�����˲�����\n");
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
	printf("������Ҫɾ����������:>");
	scanf("%s", name);
	//1����������ʲôλ��
	int ret = findPeoInfo(ps, name);
	if (ret == -1) printf("Ҫɾ�����˲�����\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ����������:>");
	scanf("%s", name);
	//1����������ʲôλ��
	int ret = findPeoInfo(ps, name);
	if (ret == -1) printf("Ҫ�޸��˵���Ϣ������\n");
	else
	{
		printf("����������>:");
		scanf("%s", ps->data[ps->size].name);
		printf("����������>:");
		scanf("%s", &ps->data[ps->size].age);
		printf("�������Ա�>:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰>:");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ>:");
		scanf("%s", ps->data[ps->size].addr);
		printf("�޸ĳɹ�\n");
	}

}

void destoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

// ֻ���ڵ�ǰ�ļ��ڲ�ʹ�� ����¶����� ������ͷ�ļ���������
static int findPeoInfo(const struct Contact* ps, char name[MAX_NAME])
{
	//����Ҫɾ��������ʲôλ��
	int i;
	for (i = 0; i < ps->size; ++i)
	{
		if (0 == strcmp(ps->data[i].name, name)) return i;
	}
	return -1;
}
