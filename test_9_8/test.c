#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


// 求字符串的长度
//1.计数器的方法
//2.递归
//3.指针-指针
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str);
	{
		count++;
		str++;
	}
	return count;
}

//int main()
//{
//	// (unsigned int)(3-6)
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//hehe
//	return 0;
//}


//实现字符串拷贝
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest = *src);
	return ret;
}

//实现字符串的拼接
char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	//1.找到目的字符串的'\0'
	while (*dest) ++dest;
	//2.追加
	while (*dest = *src);
	return ret;
}

int my_strcmp(const char* dest, const char* src)
{
	/*assert(dest);
	assert(src);
	while (*dest && *src)
	{
		if (*dest > * src) return 1;
		if (*dest < *src) return -1;
		++dest;
		++src;
	}
	return 0;*/

	assert(dest && src);
	while (*dest == *src)
	{
		if (*dest == '\0') return 0;
		++dest;
		++src;
	}
	return *dest - *src;
}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	if (ret > 0) printf("p1>p2\n");
//	else if (ret < 0) printf("p1<p2\n");
//	else printf("p1==p2\n");
//	return 0;
//}

char* my_strncpy(char* dest, const char* src, size_t t)
{
	char* ret = dest;
	while (*dest++);
	dest--;
	while (t--)
	{
		if (!(*dest++ = *src++))
			return ret;
	}
	*dest = '\0';
	return ret;
}

// 有长度限制的比较字符串大小
//int my_strncmp(const char* str1, const char* str2, size_t count)
//{
//
//}

//查找子串
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2); // p1 p2都不能为空
	if (*p2 == '\0') return p1;
	char* s1 = (char*)p1;
	char* s2 = (char*)p2;
	char* cur = (char*)p1;
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0') return cur; // 找到子串
		if (*s1 == '\0') return NULL; // 找不到子串
		++cur;
	}
	return NULL; // 找不到子串
}

//分隔字符串
char* my_strtok(char* dest, const char* sep)
{
	

}

//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	printf("%s\n", ret);
//	return 0;
//}

int main()
{
	/*char arr[] = "zpw@bitedu.tech";
	char* p = "@.";*/
	char arr[] = "192.168.1.102";
	char* p = "@.";
	//zpw\0bitedu.tech
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	//切割buf中的字符串
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}


