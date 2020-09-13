#include <stdio.h>


// 判断当前系统的字节序

int check()
{
	/*
	返回1表示小端
	返回0表示大端
	*/
	int a = 1;
	return *(char*)&a;
}

//int main()
//{
//	
//	printf("%d", check());
//	return 0;
//}

//int main()
//{
//	char a = -1; //
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128; 
//	//10000000 00000000 00000000 10000000 - 原码
//	//11111111 11111111 11111111 01111111 - 反码
//	//11111111 11111111 11111111 10000000 - 补码
//	//10000000
//	//11111111 11111111 11111111 10000000 -d
//	//11111111 11111111 11111111 10000000 -U
//	printf("%u\n", 0xFFFFFF80); // 4294967168
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a)); // 255
//	return 0;
//}

//unsigned char i = 0; // 全局变量
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


//int main()
//{
//	double d = 1e10;
//	printf("%lf\n", d);
//	return 0;
//}


//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}


void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
}

//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}


//int main()
//{
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef"; // 常量字符串
//	char* p2 = "abcdef";
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];
//}

//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	char* pc = NULL;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr; // 数组指针，指向一个数组
//	return 0;
//}

//int main()
//
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//
//}


void print1(int arr[3][5], int x, int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*arr)[5], int x, int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//void print3(int** arr, int x, int y)
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print3((int*)arr, 3, 5); // 数组名就是首元素地址
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

//void test()
//{
//	printf("hello world\n");
//}

//int main()
//{
//	int (*f_)(int, int);
//	f_ = Add;
//	printf("%d\n", f_(1, 2));
//	return 0;
//}

//int main()
//{
//	return 0;
//}

//char* my_sctrcap(char* dest, const char* src);
////1.写一个函数指针 pf，能够指向 my_strcpy
////2.写一个函数指针数组 pfArr, 能够存放4个my_strcpy函数的地址
//char* (*pf)(char*, const char*);
//char* (*pfArr[4])(char*, const char*);


void menu()
{
	printf("**  1. add    2. sub **\n");
	printf("**  3. mul    4. div **\n");
	printf("**        0.exit     **\n");
	printf("***********************\n");
}

//int Add(int x, int y)
//{
//	return x + y;
//}


int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

//int main()
//{
//	int input = 0, x, y;
//	int (*pfArr[])(int, int) = { Add, Sub, Mul, Div }; // 转移表
	//do
	//{
	//	menu();
	//	printf("请选择:>");
	//	scanf_s("%d", &input);
	//	printf("请输入两个操作数:>");
	//	scanf_s("%d%d", &x, &y);
	//	switch (input)
	//	{
	//	case 1:
	//		printf("%d\n", Add(x, y));
	//		break;
	//	case 2:
	//		printf("%d\n", Sub(x, y));
	//		break;
	//	case 3:
	//		printf("%d\n", Mul(x, y));
	//		break;
	//	case 4:
	//		printf("%d\n", Div(x, y));
	//		break;
	//	case 0:
	//		printf("退出\n");
	//		break;
	//	default:
	//		printf("选择错误\n");
	//		break;
	//	}
	//} while (input);

//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf_s("%d%d", &x, &y);
//			int ret = pfArr[input - 1](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//
//	} while (input);
//}

void Calc(int (*pf)(int, int)) // 回调函数, 调用该函数，该函数又去调用其他函数来完成任务
{
	int x, y;
	printf("请输入两个操作数:>");
	scanf_s("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}


//int main()
//{
//
//
//	int input = 0, x, y;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*pfArr[4]) (int, int);//pfArr是一个数组-函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	return 0;
//}

int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整型数组

}