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


int main()
{
	// 会把元素初始化为0
	int* p = calloc(10, sizeof(int));
	if (!p) printf("开辟内存失败:%s\n", strerror(errno));
	else
	{
		// 正常使用空间
		int i;
		for (i = 0; i < 10; ++i) *(p + i) = i;
		for (i = 0; i < 10; ++i) printf("%d ", *(p + i));
	}
	//动态内存不再使用的时候应该释放 还给系统 但p所指向的地址不会变 但现在内存地址不属于程序 所以要把p置为空指针
	free(p);
	p = NULL;
	return 0;
}