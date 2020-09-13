#include <stdio.h>
#include "add.h"
#include <string.h>


int Add(int x, int y);

int jiecheng(int n)
{
	if (n == 1) return n;
	else return n * jiecheng(n - 1);
}

// dp
int getJ(int arr[], int n)
{
	arr[0] = 1;
	int i = 0, ret = 0;
	for (i = 1; i <= n; arr[i] = (i + 1) * arr[i - 1], ++i)
	{
		ret += arr[i - 1];
	}
	return ret;
}

void printNum(unsigned int n)
{
	if (n == 0) return;
	else
	{
		int ret = n % 10;
		printNum(n / 10);
		printf("%d ", ret);
	}
}

int getStrLen(char str[])
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + getStrLen(str + 1);
	}
}

void fib(int n)
{
	long long a = 1, b = 1, tmp;
	while (n--)
	{
		printf("%lld ", a);
		tmp = a;
		a = b;
		b = tmp + b;
	}
}

void han(int n, char A, char B, char C)
{
	static long long i = 0;
	if (n == 1)
	{
		printf("%lld:%c->%c\n", ++i, A, C);
	}
	else
	{
		han(n - 1, A, C, B);
		printf("%lld:%c->%c\n", ++i, A, C);
		han(n - 1, B, A, C);
	}
}

void bubbleSort(int arr[], int r)
{
	int i, j, tmp;
	for (i = 0; i < r - 1; ++i) // 趟数
	{
		int flag = 1; // 假设这一趟要排序的数据已经有序
		for (j = 0; j < r - i - 1; ++j)
		{
			if (arr[j + 1] > arr[j])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0; // 本趟排序不完全有序
			}
		}
		if (flag) break;
	}
}

void bubbleSort_(int arr[], int r)
{
	if (r > 1)
	{

		for (int j = 0; j < r - 1; ++j)
		{
			if (arr[j + 1] > arr[j])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
		bubbleSort_(arr, --r);

	}

}

int main()
{
	int arr[] = { 9,2,3,4,5,6,7,8,1 };
	bubbleSort(arr, 9);
	for (int i = 0; i < 9; ++i)
	{
		printf("%d ", arr[i]);
	}
 	return 0;
}
