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


//int main()
//{	
//	//1. ��NULL�����ò���
//	//int* p = malloc(40);
//	//һ��Ҫ����malloc�ɰܼ��
//	//*p = 0;//err
//	/*int i = 0;
//	for (i = 0; i < 10; i++) *(p + i) = i;
//	free(p);
//	p = NULL;*/
//	//2.�Զ�̬�����ڴ��Խ�����
//	//int* p = malloc(5 * sizeof(int));
//	//if (!p) printf("����\n");
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; ++i) *(p + i) = i;//err
//	//}
//	//3.�ԷǶ�̬�����ڴ����free
//	/*int a = 10;
//	int* p = &a;
//	p = 20;
//	free(p);
//	p = NULL;*/
//
//	/*return 0;*/
//}


//int main()
//{
//	int* p = realloc(NULL, 40);//malloc(40);
//	return 0;
//}
//#include <Windows.h>
//int main()
//{
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//int* p = malloc(40);
//	//if (!p) printf("����ʧ�ܣ�\n");
//	//int i;
//	//for (i = 0; i < 10; ++i) *p++;
//	////���տռ�
//	//free(p);
//	//p = NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = malloc(40);
//	//if (!p) printf("ʧ��\n");
//	////˭ʹ�� ˭�ͷ�
//	//free(p);
//	//p = NULL;
//	//free(p);
//
//	//�Կ��ٵ��ڴ治�ͷ�
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}


//err
//void getMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void test()
//{
//	char* str = NULL;
//	getMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//correct
//void getMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//
//void test()
//{
//	char* str = NULL;
//	getMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}

//correct
//char* getMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//
//void test()
//{
//	char* str = NULL;
//	str = getMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//char* getMemory()
//{
//	char p[] = "hello world"; // �˳����������ݱ����٣�����һ���ֲ�������ַ
//	return p;
//}
//
//void test()
//{
//	char* str = NULL;
//	str = getMemory();
//	printf(str);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void getMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void test()
//{
//	char* str = NULL;
//	getMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//	// Ҫ�ͷ��ڴ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//void test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str); // free ��Ҫ��ָ��ָ�� NULL
//	if (str) // warning:ʹ��δ��ʼ����str Ҳ����Ұָ��
//	{
//		strcpy(str, "world"); // �Ƿ������ڴ�
//		printf(str);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}

// ��������
//struct S
//{
//	int n;
//	int arr[]; // �ṹ�����һ����Ա ���������λ�ô�С 
//	// ���������Ա ����ɱ��С
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(struct S)); //4 ���������������Ա��С
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 5);
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++) ps->arr[i] = i;
//	struct S *ptr = realloc(ps, 44);
//	if (!ptr) printf("����ʧ��\n");
//	else
//	{
//		ps = ptr; // ��������� ���µĵ�ַ����ԭ����ָ�����
//
//	}
//	for (i = 5; i < 10; i++) ps->arr[i] = i;
//	for (i = 5; i < 10; i++) printf("%d ", ps->arr[i]);
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)	ps->arr[i] = i;
	for (i = 0; i < 5; i++) printf("%d ", ps->arr[i]);
	//������С
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (!ptr)
	{
		printf("����\n");
		return 0;
	}
	else ps->arr = ptr;
	for (i = 5; i < 10; ++i) ps->arr[i] = i;
	for (i = 0; i < 10; i++) printf("%d ", ps->arr[i]);
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ptr);
	
	ptr = NULL;
	return 0;
}