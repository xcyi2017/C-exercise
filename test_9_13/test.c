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

//
//int main()
//{
//	// calloc ���Ԫ�س�ʼ��Ϊ0
//	int* p = calloc(10, sizeof(int));
//	if (!p) printf("�����ڴ�ʧ��:%s\n", strerror(errno));
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



//int main()
//{
//	// realloc ���Ե�����̬�����ڴ�Ĵ�С
//	int* p = malloc(20);//��̬�ڴ濪��
//	if (!p) printf("�����ڴ�ʧ��:%s\n", strerror(errno));
//	else
//	{
//		// ����ʹ�ÿռ�
//		int i;
//		for (i = 0; i < 5; ++i) *(p + i) = i;
//		for (i = 0; i < 5; ++i) printf("%d ", *(p + i));
//	}
//	//������ʹ��malloc���ٵ�20���ֽڿռ�
//	//���������20�����ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	// p = realloc(p, 40); ����д���кܴ�ķ��� ��ԭ���ռ䲻���õ�
//	//������»��������µĿռ� ��p��ָ��ԭ���Ŀռ��ַ
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻�Ŀռ����׷�ӣ���relloc������������
//	// ���µ��ڴ����򣬿�Ƥһ����������Ŀռ䣬���Ұ�ԭ���ڴ�ռ������
//	// �����������ͷžɵ��ڴ�ռ� ��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.��ʹ��һ���µı���������realloc�����ķ���ֵ
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++) printf("%d ", *(p2 + i));
//	free(p2);
//	p2 = NULL;
//	return 0;
//}


int main()
{	
	//1. ��NULL�����ò���
	//int* p = malloc(40);
	//һ��Ҫ����malloc�ɰܼ��
	//*p = 0;//err
	/*int i = 0;
	for (i = 0; i < 10; i++) *(p + i) = i;
	free(p);
	p = NULL;*/
	//2.�Զ�̬�����ڴ��Խ�����
	//int* p = malloc(5 * sizeof(int));
	//if (!p) printf("����\n");
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; ++i) *(p + i) = i;//err
	//}
	//3.�ԷǶ�̬�����ڴ����free
	/*int a = 10;
	int* p = &a;
	p = 20;
	free(p);
	p = NULL;*/

	return 0;
}