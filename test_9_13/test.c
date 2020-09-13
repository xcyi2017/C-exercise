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


int main()
{	
	//1. 对NULL解引用操作
	//int* p = malloc(40);
	//一定要进行malloc成败检查
	//*p = 0;//err
	/*int i = 0;
	for (i = 0; i < 10; i++) *(p + i) = i;
	free(p);
	p = NULL;*/
	//2.对动态开辟内存的越界访问
	//int* p = malloc(5 * sizeof(int));
	//if (!p) printf("出错\n");
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; ++i) *(p + i) = i;//err
	//}
	//3.对非动态开辟内存进行free
	/*int a = 10;
	int* p = &a;
	p = 20;
	free(p);
	p = NULL;*/

	return 0;
}