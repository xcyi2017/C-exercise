#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//���ڴ�����10�����Ϳռ�
//	int* p = (int*)malloc(10 * sizeof(int));//��̬�ڴ濪��
//	if (!p) printf("�����ڴ�ʧ�ܣ�%s\n", strerror(errno));
//	else
//	{
//		// ����ʹ�ÿռ�
//		int i;
//		for (i = 0; i < 10; ++i) *(p + i) = i;
//		for (i = 0; i < 10; ++i) printf("%d ", *(p + i));
//	}
//	//��̬�ڴ治��ʹ�õ�ʱ��Ӧ���ͷ� ����ϵͳ ��p��ָ��ĵ�ַ����� �������ڴ��ַ�����ڳ��� ����Ҫ��p��Ϊ��ָ��
//	free(p);
//	p = NULL;
//	return 0;
//}


int main()
{
	// ���Ԫ�س�ʼ��Ϊ0
	int* p = calloc(10, sizeof(int));
	if (!p) printf("�����ڴ�ʧ��:%s\n", strerror(errno));
	else
	{
		// ����ʹ�ÿռ�
		int i;
		for (i = 0; i < 10; ++i) *(p + i) = i;
		for (i = 0; i < 10; ++i) printf("%d ", *(p + i));
	}
	//��̬�ڴ治��ʹ�õ�ʱ��Ӧ���ͷ� ����ϵͳ ��p��ָ��ĵ�ַ����� �������ڴ��ַ�����ڳ��� ����Ҫ��p��Ϊ��ָ��
	free(p);
	p = NULL;
	return 0;
}