#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//// 实现内存拷贝，不是实现重叠内存的拷贝
//void* my_memcpy(void* dest, const void* src, rsize_t num)
//{//数据从前向后拷贝
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
//{//数据从后向前拷贝 从前向后拷贝要分情况考虑
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
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
//	//memmove，可以胜任内存的重叠拷贝
//	//c语言标准说：memcpy函数可以拷贝不重叠的就可以了
//	//vs标准下memcpy实现了可以重叠拷贝了
//	int* ret1 = my_memmove(arr2, arr2+2, 16);
//	//int ret = my_memcmp(arr1, arr1, sizeof(arr1));
//	//memset,将每个自己改成特定的值
//	char st1[10] = "";
//	memset(st1, '#', 10);
//	return 0;
//}

/*
结构体
*/
//声明一个结构体
//描述类型的结构组成
struct Stu
{
	char name[20];//名字
	char tele[12];//电话
	char sex[10];//性别
	int age;
};
//结构体内存对齐
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
//	//offsetof 结构体成员相对于起始变量的偏移值
//
//	return 0;
//}

// 结构体传参
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


// 位段

struct S
{
	int _a : 2;//2个比特位
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
// 47bit, 一次开辟4个字节
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
//	// 内存从右往左使用
//	// 00100010 00000011 00000100
//	// 22       03       04
//	return 0;
//}

//枚举类型
enum Sex
{
	//枚举的可能取值-常量
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

//联合体，共用同一段空间，同一时刻只能有一个变量可用
union Un
{
	char c;//1
	int i;//4
};
//确定是大端存储 还是小端存储
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//返回1，表示小端
	//返回0，表示大端
	return u.c;
}
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));//三个地址一样
	//计算enum的大小
	printf("%d\n", sizeof(enum Color));
	return 0;
}