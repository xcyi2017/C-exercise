#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//// ʵ���ڴ濽��������ʵ���ص��ڴ�Ŀ���
//void* my_memcpy(void* dest, const void* src, rsize_t num)
//{//���ݴ�ǰ��󿽱�
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{//���ݴӺ���ǰ���� ��ǰ��󿽱�Ҫ���������
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//ǰ->��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		
//	}
//	return ret;
//}
////int my_memcmp(const void* dest, const void* src, rsize_t num)
////{
////	return 0;
////}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	// memcpy
//	int* ret = my_memcpy(arr2, arr1, sizeof(arr1));
//	//memmove������ʤ���ڴ���ص�����
//	//c���Ա�׼˵��memcpy�������Կ������ص��ľͿ�����
//	//vs��׼��memcpyʵ���˿����ص�������
//	int* ret1 = my_memmove(arr2, arr2+2, 16);
//	//int ret = my_memcmp(arr1, arr1, sizeof(arr1));
//	//memset,��ÿ���Լ��ĳ��ض���ֵ
//	char st1[10] = "";
//	memset(st1, '#', 10);
//	return 0;
//}

/*
�ṹ��
*/
//����һ���ṹ��
//�������͵Ľṹ���
struct Stu
{
	char name[20];//����
	char tele[12];//�绰
	char sex[10];//�Ա�
	int age;
};
//�ṹ���ڴ����
struct s1
{
	char c1;
	int a;
	char c2;
};

struct s2
{
	char c1;
	char c2;
	int a;
};

struct s3
{
	double d;
	char c;
	int i;

};

struct s4
{
	char c1;
	struct s3 s3;
	double d;
};

//#include <stddef.h>
//
//int main()
//{
//	struct s1 s1 = { 0 };
//	struct s2 s2 = { 0 };
//	struct s3 s3 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	printf("%d\n", sizeof(s2));//8
//	printf("%d\n", sizeof(s3));//16
//	printf("%d\n", sizeof(struct s4));//32
//	//offsetof �ṹ���Ա�������ʼ������ƫ��ֵ
//
//	return 0;
//}

// �ṹ�崫��
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//int main()
//{
//	struct S s;
//	s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//	return 0;
//}


// λ��

struct S
{
	int _a : 2;//2������λ
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
// 47bit, һ�ο���4���ֽ�
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8
//	return 0;
//}
struct S1
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

//int main()
//{
//	struct S1 s = { 0 };
//	//printf("%d\n", sizeof(s));//3
//	s.a = 10; // 1010 --> 010
//	s.b = 20; // 10100 --> 0100
//	s.c = 3; // 00011
//	s.d = 4;//0100
//	// �ڴ��������ʹ��
//	// 00100010 00000011 00000100
//	// 22       03       04
//	return 0;
//}

//ö������
enum Sex
{
	//ö�ٵĿ���ȡֵ-����
	MALE = 2,
	FEMALE,
	SECERT
};

enum Color
{
	REB,//0
	GREEN,//1
	BLUE//2
};

//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//	printf("%d %d %d\n", MALE, FEMALE, SECERT);
//	return 0;
//}

//�����壬����ͬһ�οռ䣬ͬһʱ��ֻ����һ����������
union Un
{
	char c;//1
	int i;//4
};
//ȷ���Ǵ�˴洢 ����С�˴洢
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//����1����ʾС��
	//����0����ʾ���
	return u.c;
}
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));//������ַһ��
	//����enum�Ĵ�С
	printf("%d\n", sizeof(enum Color));
	return 0;
}