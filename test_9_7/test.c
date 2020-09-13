#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//喝汽水，1瓶汽水一元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//int main()
//{
//	int money = 20;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}

// 把一个数组的奇数放前面，偶数放过后面
//void modify(int arr[], int n)
//{
//    int left = 0;
//    int cur = 0;
//    while (cur < n)
//    {
//        if (arr[cur] % 2)
//        {
//            int tmp = arr[cur];
//            arr[cur] = arr[left];
//            arr[left] = tmp;
//            ++left;
//        }
//        ++cur;
//    }
//}

//void modify_(int arr[], int n)
//{
//    //从左边找偶数，从右边找奇数
//    int left = 0, right = n - 1;
//    while (left < right)
//    {
//        while (left < right && arr[left] % 2)
//        {
//            left++;
//        }
//        while (left < right && arr[right] % 2 == 0)
//        {
//            right--;
//        }
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//    }
//}

//int main()
//{
//    int arr[] = { 1,3,5,9,7,9 };
//    int sz = sizeof(arr) / sizeof(int);
//    modify_(arr, sz);
//    return 0;
//}


//int main()
//{
//    unsigned char a = 200;//11001000 // 有符号数填1 无符号数填0
//    unsigned char b = 100;//01100100
//    unsigned char c = 0;
//    c = a + b;//提升到整型进行计算 
//    // 00000000 00000000 000000000 11001000 -补码 // 无符号数
//    //+00000000 00000000 000000000 01100100
//    // 00000000 00000000 000000001 00101100 
//    // 00101100
//    printf("%d %d", a + b, c);//300, 44
//    return 0;
//}

//int main()
//{   // 在32位大端模式处理器上变量等于
//    unsigned int a = 0x1234; // 00000000 00000000 00010010 00110100
//    unsigned char b = *(unsigned char*)&a; // 0x34
//
//    printf("%d\n", b);//3*16+4=52
//    return 0;
//}

// 打印杨辉三角
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
//1
//11
//121
//1331
//14641
//.....


//int main()
//{
//    int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//    for (i = 0; i < 10; ++i) {
//        for (j = 0; j < i; ++j)
//        {
//            if (j == 0 || i == j)
//            {
//                arr[i][j] = 1;
//            }
//            if (i > 1 && j > 0 && j < i)
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            if (arr[i][j])
//                printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

// 以下四个嫌犯的供词
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知三个人说了真话，一个人说了假话
//编程找出凶手是谁 c
//int main()
//{
//	
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; ++killer)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//
//}


//赛马问题：有36匹马，6个跑道，没有计时器，请确定，36匹马中的前三名
//请问最少比赛几次?


//int main()
//{
//	int(*(*p)[10])(int*);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&arr + 1);
//	printf("%d,%d", *(arr + 1), *(ptr - 1));
//	// 4, 1
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//1, 6
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符
void left_move(char* str, int n)
{
	assert(str != NULL);
	int len = strlen(str);
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		char tmp = *str;
		int j = 0;
		for (j = 0; j < len - 1; ++j)
			*(str + j) = *(str + j + 1);
		*(str + len - 1) = tmp;
	}
}
//abcdef
//bafedc
//cdefab

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		++left;
		--right;
	}
}

void left_move_(char* arr, int n)
{
	int len = strlen(arr); // 字符串长度
	reverse(arr, arr + n - 1); // 逆序左边
	reverse(arr + n, arr + len - 1);//逆序右边
	reverse(arr, arr + len - 1);//逆序整体
}

// 三步逆序法

int is_left_move(char* s1, const char* s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	if (l1 != l2) return 0;
	for (int i = 0; i < l1; ++i) // 一个字符串可以旋转字符串长度次
	{
		left_move_(s1, 1);
		int ret = strcmp(s1, s2);
		if (ret == 1) return 1;
	}
	return 0;
}
//abcdefabcdef的字串包含了abcdef旋转的所有可能

int is_left_move_(char* s1, const char* s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	if (l1 != l2) return 0;
	strncat(s1, s1, l1); // 自己给自己追加不能用strcat
	//strstr找是否存在字串
	char* ret = strstr(s1, s2);
	if (ret != NULL) return 1;
	return 0;
}
//int main()
//{
//	char arr1[30] = "abcdef"; // 得设置足够大的空间
//	char arr2[] = "cdefab";
//	int ret = is_left_move_(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

int findNum(int arr[][3], int k, int* row, int* col)
{
	int x = 0;
	int y = *col - 1;
	while (x < *row && y >= 0) 
	{
		if (arr[x][y] > k) y--;
		else if (arr[x][y] < k) x++;
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	*row = -1;
	*col = -1;
	return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = findNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf(u8"找到了\n");
		printf(u8"下标是:%d,%d\n", x, y);
	}
	else
	{
		printf(u8"找不到\n");
	}
	return 0;
}