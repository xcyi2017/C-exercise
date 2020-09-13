#include <stdio.h>
#include "game.h"


void menu()
{
	printf("************************************\n");
	printf("******1.play    0. exit*************\n");
	printf("************************************\n");
}

void game()
{
	// 数组-存放棋盘的信息
	char arr[ROW][COL] = { 0 }; // 全部空格
	char ret;
	// 初始化棋盘
	initBoard(arr, ROW, COL);
	// 打印棋盘
	displayBoard(arr, ROW, COL);
	// 下棋
	while (1)
	{
		// 玩家下棋
		playerMove(arr, ROW, COL);
		displayBoard(arr, ROW, COL);
		ret = isWin(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// 电脑下棋
		computerMove(arr, ROW, COL);
		displayBoard(arr, ROW, COL);
		ret = isWin(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	do
	{
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			menu();
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}