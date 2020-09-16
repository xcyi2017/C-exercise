#include <stdio.h>

#define DEBUG

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	for (int i = 0; i < 10; ++i)
	{

		arr[i] = 0;
#ifdef DEBUG
		printf("%d ", arr[i]);
#endif
	}
	return 0;
}