/*
文件操作
*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	printf("Hello world");
//	return	0;
//}


//int main()
//{
//	//打开文件，路径的写法
//	FILE* pf = fopen("test1.txt", "r"); // 打开失败会返回一个空指针，没有创建文件信息结构体
//	//若打开成功，读文件
//	//关文件
//	fclose(pf);
//	pf = NULL;
//
//}

//int main()
//{
//	FILE* pf = fopen("test1.txt", "w"); 
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test1.txt", "r");
//	//读文件
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备
//键盘-标准输入设备-stdin
//屏幕-标准输出设备-stdout
//是一个程序默认打开的两个流设备
//stdin FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


//int main()
//{
//	char buff[1024] = { 0 };
//	FILE* pf = fopen("test1.txt", "r");
//	//读文件
//	printf("%s", fgets(buff, 1024, pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char buff[1024] = { 0 };
//	FILE* pf = fopen("test1.txt", "w");
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//从键盘读取一行文本信息
//	char buff[1024] = { 0 };
//	fgets(buff, 1024, stdin);//从标准输入读取
//	fputs(buff, stdout);//输出到标准输出流
//
//	gets(buff);
//	puts(buff);
//	return 0;
//}

//格式化输出
struct S
{
	int n;
	float score;
	char arr[10];
};

//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test2.txt", "w");
//	if (!pf)
//	{
//		printf("打开失败\n");
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { 0};
//	FILE* pf = fopen("test2.txt", "r");
//	if (!pf)
//	{
//		printf("打开失败\n");
//		return 0;
//	}
//	//格式化的形式读文件
//	//fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { 100, 3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buff[1024] = { 0 };
//
//	sprintf(buff, "%d %f %s", s.n, s.score, s.arr); //将结构体参数转化为字符串
//	//printf("%s\n", buff);
//	sscanf(buff, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//int main()
//{
//	struct S s = { 20, 3.14f, "张三" };
//	FILE* pf = fopen("test3.txt", "wb");
//	if (!pf)
//	{
//		printf("打开失败\n");
//		return 0;
//	}
//	// 二进制形式写入文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test3.txt", "rb");
//	if (!pf)
//	{
//		printf("打开失败\n");
//		return 0;
//	}
//	// 二进制形式读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 随机读取文件

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, 2, SEEK_CUR);
//	// fseek(pf, -2, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	
//	//ftell 返回相对其实位置的偏移量
//	//rewind 回到起始位置
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	// EOF文件结束标志
//	// feof
//	printf("%s\n", strerror(errno));//返回错误码字符串
//	FILE* pf = open("test_.txt", "r");
//	if (!pf)
//	{
//		perror("hehhe");//相当于printf("hehe ", strerror(errno)); 且不需要引入入头文件
//		return;
//	}
//}

int main()
{
	// EOF文件结束标志
	// feof
	printf("%s\n", strerror(errno));//返回错误码字符串
	FILE* pf = open("test.txt", "r");
	if (!pf)
	{
		perror("hehhe");//相当于printf("hehe ", strerror(errno)); 且不需要引入入头文件
		return;
	}
	//读文件
	int ch = 0;
	while ((ch=fgetc(pf)) !=EOF)
	{
		putchar(ch);
	}
	if (ferror(pf)) printf("error\n"); // ferror —> 1关联的流文件出现错误 0没有出现错误
	else if (feof(pf)) printf("end of file\n");//feof -> 1正常结束 0异常结束
	fclose(pf);
	pf = NULL;
	return 0;
}