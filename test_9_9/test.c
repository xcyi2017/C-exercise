#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//内存拷贝
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest);
	assert(src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr1, arr2, sizeof(arr2));
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[5] = { 0 };
	my_memcpy(arr1+2, arr2, 20);
	return 0;
}