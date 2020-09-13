#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}

// 枚举常量 性别、三元色
// 枚举关键字
//enum sex
//{
//	male = 1,
//	female,
//	secert
//
//};


//int main()
//{
//	// 字面常量
//	3;
//	// 常属性
//	const int num = 6; // 本质上还是变量， 但有常属性
//	printf("%d-%d-%d\n", MALE, FEMALE, SECERT);
//	char arr1[] = "abc"; // 数组
//	char arr2[] = { 97, 98, 1, 0 }; // ascii编码值
//	char arr3[] = "c:\\test\\32\\test.c\n";
//	char arr4[] = "c:\test\32\test.c";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr4));
//	printf("%c\n", '\132');
//	return 0;
//}

//inline
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int line = 0;
//	/*printf("加入比特\n");
//	while (line++ < 20000)
//	{
//		printf("%d行:敲一行代码\n", line + 1);
//	}
//	printf("离开比特\n");*/
//	register int c = 10; // 建议作用
//	int a, b, sum, i = 0, new;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	char h[40], n[40];
//	while (i < 10)
//	{
//		printf("%d\n", arr[i++]);
//	}
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	new = a << b;
//	_itoa(a, h, 2);
//	_itoa(new, n, 2);
//	printf("%d: %s--->%s\n", new, h, n);
//	printf("sum = %d\n", sum);
//	printf("%d\n", sizeof arr);
//	printf("%d\n", ~line);
//	printf("%d\n", c);
//	return 0;
//}


//void test()
//{
//	static int a = 1; // a是一个静态局部变量，不会随着函数的结束而销毁
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	extern g_val;
//	printf("g_val=%d", g_val);
//
//	return 0;
//}

// #define 定义标识符常量
#define MAX 100
// #define 可以定义宏---带参数
#define Max(x, y) (x>y?x:y)

bool isPrime(int n)
{
	return (n % 2 == 1);
}

void getRangePrime(int start, int end)
{

	while (start <= end) 
	{
		if (isPrime(start))
			printf("%d是奇数\n", start++ );
		else
			start++; 
	}
}

int main()
{
	int num1 = 1, num2 = 2;
	switch (num1)
	{
	case 1:
		num2++;
	case 2:
		num1++;
	case 3:
		switch (num1)
		{
		case 1:
			num1++;
		case 2:
			num2++;
			num1++;
			break;
		}
	case 4:
		num2++;
		break;
	default:
		break;
	}
	printf("num1=%d, num2=%d", num1, num2);

	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
