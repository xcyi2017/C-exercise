#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

extern int add(int, int); //声明外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		fprintf(stdout, "%d ", arr[i]);
//	}
//	c = add(a, b);
//	printf("\nc = %d\n", c);
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	return 0;
//}

#define CAT(X, Y) X##Y
int main()
{
   int Class84 = 2019;
   //printf("%d\n", Class84);
   printf("%d\n", CAT(Class, 84));
   //printf("%d\n", Class##84);
   return 0;
}