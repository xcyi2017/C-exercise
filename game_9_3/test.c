
#include "game.h"

void menu()
{
	printf("*************************************\n");
	printf("***********    1.play   *************\n");
	printf("***********    0.exit   *************\n");
	printf("*************************************\n");
}

void game()
{
	/*printf("扫雷\n");*/
	// 雷的信息存储
	//1.布置好雷的信息
	char mine[ROWS][COLS] = { 0 }; // 11*11
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	initBoard(mine, ROWS, COLS, '0');
	initBoard(show, ROWS, COLS, '*');
	//打印棋盘
	/*displayBoard(mine, ROW, COL);*/
	//布置雷
	setMine(mine, ROW, COL);
	displayBoard(mine, ROW, COL);
	//扫雷
	findMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	do
	{

		printf(u8"请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf(u8"退出游戏\n");
			break;
		default:
			printf(u8"选择错误，重新选择!\n");
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