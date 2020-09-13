#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Add(int x, int y)
{
	return x + y;
}

//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int* (*pa)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1,2);
//	//int sum = pAdd(1,2);
//	//			Add(1,2)
//	//函数指针的数组
//	int (*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int (*(*ppArr)[5])(int, int);
//	return 0;
//}

//void bubble_sort(int arr[], int n)
//{
//	int i, j;
//	for (i = 0; i < n - 1; ++i)
//	{
//		for (j = 0; j < n - i - 1; ++j)
//		{
//			if (cmp(&arr[j],&arr[j+1]))
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
typedef struct Stu
{
	char* name;
	int age;
} Stu;

int cmp(const void* e1, const void* e2)
{
	//比较两个元素值
	return ((Stu*)e1)->age - ((Stu*)e2)->age;

}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(int);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	/*int* pa = &a;
//	char* pc = &a;*/
//	/*char ch = 'w';*/
//	void* p = &a; // 可以接受任意类型的地址
//	//*p = 0;  // void* 类型的指针不能进行解引用操作
//	//p++        // void* 不能进行加减整数的操作
//	return 0;
//}

void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; ++i)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


void bubble_sort_(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; ++i)//每一趟比较的对数
	{
		for (int j = 0; j < sz - 1 - i; ++j)
		{
			//比较两个元素
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				// 交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
	
}

//int main()
//{
//	Stu s[3] = { {"张三", 20},{"lisi",30},{"wangwu", 10} };
//	bubble_sort_(s, sizeof(s) / sizeof(Stu), sizeof(Stu), cmp);
//	return 0;
//}

//int main()
//{
	// 一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a)); // ！16
	//printf("%d\n", sizeof(a+0)); // 4/8
	//printf("%d\n", sizeof(*a)); // 4 首元素
	//printf("%d\n", sizeof(a + 1)); //4/8
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4/8
	//printf("%d\n", sizeof(*&a));//4！16 *&抵销 还是求数组的大小
	//printf("%d\n", sizeof(&a+1));//4 指针的大小
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0]+1));//4

	// 字符数组
	/*char arr[] = { 'a','b','c','d','e','f' };*/
	//printf("%s\n", arr);
	//printf("%d\n", sizeof(arr)); // 6
	//printf("%d\n", sizeof(arr + 0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%s\n", arr);
	//printf("%d\n", strlen(arr)); // 15?不确定
	//printf("%d\n", strlen(arr + 0));//15?不确定
	////printf("%d\n", strlen(*arr));//不确定，出错 err
	////printf("%d\n", strlen(arr[1]));//不确定，err
	//printf("%d\n", strlen(&arr));//15?不确定
	//printf("%d\n", strlen(&arr + 1));//不确定
	//printf("%d\n", strlen(&arr[0] + 1));//14?不确定

	//char arr[] = "abcdef";
	//printf("%s\n", arr); // abcdef
	//printf("%d\n", sizeof(arr)); // 7
	//printf("%d\n", sizeof(arr + 0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%s\n", arr); // abcdef
	//printf("%d\n", strlen(arr)); // 6
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//不确定
	//printf("%d\n", strlen(&arr[0] + 1));//5

	/*char *p = "abcdef";*/
	//printf("%s\n", p); // abcdef
	//printf("%d\n", sizeof(p)); // 4/8
	//printf("%d\n", sizeof(p + 0));//4/8
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[1]));//1
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%s\n", p); // abcdef
	//printf("%d\n", strlen(p)); // 6
	//printf("%d\n", strlen(p + 0));//6
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[1]));//err
	//printf("%d\n", strlen(&p));//6！不确定
	//printf("%d\n", strlen(&p + 1));//不确定
	//printf("%d\n", strlen(&p[0] + 1));//5

	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a)); // 48 计算数组总大小
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16 相当于第一行的数组名
	//printf("%d\n", sizeof(a[0]+1));//16 ！4 sizeof(arr+1)a[0]第一行数组名，此时表示首元素地址
	//printf("%d\n", sizeof(*(a[0]+1)));//4
	//printf("%d\n", sizeof(a + 1)); //16 ! 4 // 是纯粹的地址，a是二维数组的数组名，a是首元素地址，表示第一行数组地址，存第二行数组的地址的地址
	//printf("%d\n", sizeof(*(a + 1))); //4/8 !16
	//printf("%d\n", sizeof(&a[0] + 1)); //16
	//printf("%d\n", sizeof(*(&a[0] + 1))); //4/8
	//printf("%d\n", sizeof(*a)); // 4/8 ! 16
	//printf("%d\n", sizeof(a[3])); //16 不会计算表达式的值，只关心表达形式
	//printf("%d\n", sizeof(a[1]));//16
	//printf("%d\n", sizeof(&a));//4/8
	//printf("%d\n", sizeof(*&a));//48
	//printf("%d\n", sizeof(&a+1));//4 指针的大小
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0]+1));//4
	//printf("%d\n", sizeof(a + 0)); // 16 ! 4

	//int a[5] = { 1,2,3,4,5 };
	//int* ptr = (int*)(&a + 1);
	//printf("%d,%d\n",*(a+1), *(ptr-1));// 2 5

	//假设p的值为0x10000000，如下表表达式的值分别多少
	//已知，结构体Test类型的标量大小是20个字节
//
//	return 0;
//}


//struct Test
//{
//	int Num; // 4
//	char* pcName; // 4
//	short sDate; // 2
//	char cha[2];// 2
//	short sBa[4];
//}* p;
//
//int main()
//{
//	p = (struct Test*)0x10000000;
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1); //0x10000014
//	printf("%p\n", (unsigned long)p + 0x1);//0x10000001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x10000004
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1); // 强制将数组指针转为int*指针
//	int* ptr2 = (int*)((int)a + 1); // 将指针变量int*强制转化为整型int，然后+1，再强制转化为整型变量
//	printf("%x,%x", ptr1[-1], *ptr2);//%x:表示16进制输出， 0x00000004,0x02000000 X 大端存储小端存储
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3), (4,5) };//逗号表达式，=>{{1,3},{5,0},{0,0}};
//	int* p;
//	p = a[0];// a[0]:第一行数组的地址，强制转换为整型指针
//	printf("%d\n", p[0]); // 1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//p:int(*)[4]  a:int(*)[5]
//	print("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &aa + 1);//aa表示数组的指针 步长为数组的长度
//	printf("%p\n", *(aa + 1));
//	int* ptr1 = (int*)(&aa + 1);//将第二行地址转化为整型指针X 数组末端的第一个元素的地址
//	int* ptr2 = (int*)(*(aa + 1));//将第二行地址指针转化为整型指针
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10， 5
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work", "at", "alibaba" }; // 
//	char** pa = a; // 
//	pa++;
//	printf("%s\n", *pa); // at
//	return 0;
//}

//int main()
//{
//
//	int i = "abc" + 3;
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp); // POINT
//	printf("%s\n", *-- * ++cpp + 3); // 
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);//
//	return 0;
//}

//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;//pulPtr[3] = pulPtr[3]+3
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12
//	return 0;
//}


//char* reverse_str(char* str)
//{
//	int sz = strlen(str);
//	char* left = str;
//	char* right = str + sz - 1; // 排除'\0'最后一个字符地址
//	while (right > left)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	return str;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	char* ret = reverse_str(arr);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; ++i)
//	{
//		//判断i是否为水仙花数
//		//1.计算i的位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			++n;
//		}
//		//2.计算i的每一位的n次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

int main()
{
	// 打印菱形
	int line = 0;
	scanf_s("%d", &line);
	// 打印上半部分
	int lg = (int)(line / 2) + 1; // 7
	for (int i = 0; i < lg; ++i)
	{
		// 每一行打印的字符串内容
		int tmp = 0;
		while (tmp < line)
		{
			if (tmp < lg - 1 - i || tmp >= line - lg + 1 + i) printf(" ");
			else printf("*");
			++tmp;
		}
		printf("\n");
	}
	// 打印下半部分
	for (int i = 0; i < lg - 1; ++i)
	{
		// 打印每一行
		int tmp = 0;
		while (tmp < line)
		{
			if (tmp < i + 1 || tmp >= line - 1 - i) printf(" ");
			else printf("*");
			++tmp;
		}
		printf("\n");
	}
	// 右边部分其实可以不打印！！！！！！
	return 0;
}