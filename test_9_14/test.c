/*
�ļ�����
*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	printf("Hello world");
//	return	0;
//}


//int main()
//{
//	//���ļ���·����д��
//	FILE* pf = fopen("test1.txt", "r"); // ��ʧ�ܻ᷵��һ����ָ�룬û�д����ļ���Ϣ�ṹ��
//	//���򿪳ɹ������ļ�
//	//���ļ�
//	fclose(pf);
//	pf = NULL;
//
//}

//int main()
//{
//	FILE* pf = fopen("test1.txt", "w"); 
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test1.txt", "r");
//	//���ļ�
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸
//����-��׼�����豸-stdin
//��Ļ-��׼����豸-stdout
//��һ������Ĭ�ϴ򿪵��������豸
//stdin FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


//int main()
//{
//	char buff[1024] = { 0 };
//	FILE* pf = fopen("test1.txt", "r");
//	//���ļ�
//	printf("%s", fgets(buff, 1024, pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char buff[1024] = { 0 };
//	FILE* pf = fopen("test1.txt", "w");
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buff[1024] = { 0 };
//	fgets(buff, 1024, stdin);//�ӱ�׼�����ȡ
//	fputs(buff, stdout);//�������׼�����
//
//	gets(buff);
//	puts(buff);
//	return 0;
//}

//��ʽ�����
struct S
{
	int n;
	float score;
	char arr[10];
};

//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test2.txt", "w");
//	if (!pf)
//	{
//		printf("��ʧ��\n");
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { 0};
//	FILE* pf = fopen("test2.txt", "r");
//	if (!pf)
//	{
//		printf("��ʧ��\n");
//		return 0;
//	}
//	//��ʽ������ʽ���ļ�
//	//fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { 100, 3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buff[1024] = { 0 };
//
//	sprintf(buff, "%d %f %s", s.n, s.score, s.arr); //���ṹ�����ת��Ϊ�ַ���
//	//printf("%s\n", buff);
//	sscanf(buff, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//int main()
//{
//	struct S s = { 20, 3.14f, "����" };
//	FILE* pf = fopen("test3.txt", "wb");
//	if (!pf)
//	{
//		printf("��ʧ��\n");
//		return 0;
//	}
//	// ��������ʽд���ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test3.txt", "rb");
//	if (!pf)
//	{
//		printf("��ʧ��\n");
//		return 0;
//	}
//	// ��������ʽ���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// �����ȡ�ļ�

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);
//	// fseek(pf, -2, SEEK_END);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	
//	//ftell ���������ʵλ�õ�ƫ����
//	//rewind �ص���ʼλ��
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	// EOF�ļ�������־
//	// feof
//	printf("%s\n", strerror(errno));//���ش������ַ���
//	FILE* pf = open("test_.txt", "r");
//	if (!pf)
//	{
//		perror("hehhe");//�൱��printf("hehe ", strerror(errno)); �Ҳ���Ҫ������ͷ�ļ�
//		return;
//	}
//}

int main()
{
	// EOF�ļ�������־
	// feof
	printf("%s\n", strerror(errno));//���ش������ַ���
	FILE* pf = open("test.txt", "r");
	if (!pf)
	{
		perror("hehhe");//�൱��printf("hehe ", strerror(errno)); �Ҳ���Ҫ������ͷ�ļ�
		return;
	}
	//���ļ�
	int ch = 0;
	while ((ch=fgetc(pf)) !=EOF)
	{
		putchar(ch);
	}
	if (ferror(pf)) printf("error\n"); // ferror ��> 1���������ļ����ִ��� 0û�г��ִ���
	else if (feof(pf)) printf("end of file\n");//feof -> 1�������� 0�쳣����
	fclose(pf);
	pf = NULL;
	return 0;
}