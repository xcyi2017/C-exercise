#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//向内存申请10个整型空间
//	int* p = (int*)malloc(10 * sizeof(int));//动态内存开辟
//	if (!p) printf("开辟内存失败：%s\n", strerror(errno));
//	else
//	{
//		// 正常使用空间
//		int i;
//		for (i = 0; i < 10; ++i) *(p + i) = i;
//		for (i = 0; i < 10; ++i) printf("%d ", *(p + i));
//	}
//	//动态内存不再使用的时候应该释放 还给系统 但p所指向的地址不会变 但现在内存地址不属于程序 所以要把p置为空指针
//	free(p);
//	p = NULL;
//	return 0;
//}

//
//int main()
//{
//	// calloc 会把元素初始化为0
//	int* p = calloc(10, sizeof(int));
//	if (!p) printf("开辟内存失败:%s\n", strerror(errno));
//	else
//	{
//		// 正常使用空间
//		int i;
//		for (i = 0; i < 10; ++i) *(p + i) = i;
//		for (i = 0; i < 10; ++i) printf("%d ", *(p + i));
//	}
//	//动态内存不再使用的时候应该释放 还给系统 但p所指向的地址不会变 但现在内存地址不属于程序 所以要把p置为空指针
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	// realloc 可以调整动态开辟内存的大小
//	int* p = malloc(20);//动态内存开辟
//	if (!p) printf("开辟内存失败:%s\n", strerror(errno));
//	else
//	{
//		// 正常使用空间
//		int i;
//		for (i = 0; i < 5; ++i) *(p + i) = i;
//		for (i = 0; i < 5; ++i) printf("%d ", *(p + i));
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设在这里，20个自字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	// p = realloc(p, 40); 这样写是有很大的风险 在原来空间不够用的
//	//的情况下会重新找新的空间 而p还指在原来的空间地址
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的空间可以追加，则relloc函数会重新找
//	// 个新的内存区域，开皮一块满足需求的空间，并且把原来内存空间的数据
//	// 拷贝过来，释放旧的内存空间 最后返回新开辟的内存空间地址
//	//3.得使用一个新的变量来接受realloc函数的返回值
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++) printf("%d ", *(p2 + i));
//	free(p2);
//	p2 = NULL;
//	return 0;
//}


//int main()
//{	
//	//1. 对NULL解引用操作
//	//int* p = malloc(40);
//	//一定要进行malloc成败检查
//	//*p = 0;//err
//	/*int i = 0;
//	for (i = 0; i < 10; i++) *(p + i) = i;
//	free(p);
//	p = NULL;*/
//	//2.对动态开辟内存的越界访问
//	//int* p = malloc(5 * sizeof(int));
//	//if (!p) printf("出错\n");
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; ++i) *(p + i) = i;//err
//	//}
//	//3.对非动态开辟内存进行free
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
//	//4.使用free释放动态开辟内存的一部分
//	//int* p = malloc(40);
//	//if (!p) printf("开辟失败！\n");
//	//int i;
//	//for (i = 0; i < 10; ++i) *p++;
//	////回收空间
//	//free(p);
//	//p = NULL;
//
//	//5.对同一块动态内存的多次释放
//	//int* p = malloc(40);
//	//if (!p) printf("失败\n");
//	////谁使用 谁释放
//	//free(p);
//	//p = NULL;
//	//free(p);
//
//	//对开辟的内存不释放
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
//	char p[] = "hello world"; // 退出函数会内容被销毁，这是一个局部变量地址
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
//	// 要释放内存
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
//	free(str); // free 后要把指针指向 NULL
//	if (str) // warning:使用未初始化的str 也就是野指针
//	{
//		strcpy(str, "world"); // 非法访问内存
//		printf(str);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}

// 柔性数组
//struct S
//{
//	int n;
//	int arr[]; // 结构体最后一个成员 数组可以是位置大小 
//	// 柔性数组成员 数组可变大小
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(struct S)); //4 不包含柔性数组成员大小
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 5);
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++) ps->arr[i] = i;
//	struct S *ptr = realloc(ps, 44);
//	if (!ptr) printf("开辟失败\n");
//	else
//	{
//		ps = ptr; // 这种情况下 将新的地址赋给原来的指针变量
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
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (!ptr)
	{
		printf("出错\n");
		return 0;
	}
	else ps->arr = ptr;
	for (i = 5; i < 10; ++i) ps->arr[i] = i;
	for (i = 0; i < 10; i++) printf("%d ", ps->arr[i]);
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ptr);
	
	ptr = NULL;
	return 0;
}