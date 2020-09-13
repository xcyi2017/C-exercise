#include "game.h"


void initBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			board[i][j] = ' ';
		}
	}
}

void displayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; ++i)
	{
		// 1. 打印第一行数据
		for (j = 0; j < col; ++j)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1) printf("|");

		}
		printf("\n");
		// 2. 打印分隔行
		if (i < row - 1)
		{
			for (j = 0; j < col; ++j)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}

		}
		printf("\n");
	}
}

void playerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("玩家走\n");
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}

void computerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}



}

char isWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	// 横三行
	for (i = 0; i < row; ++i)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	// 竖三列
	for (i = 0; i < col; ++i)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	// 两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	// 判断是否平局
	if (1 == isFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}

int isFull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			if (board[i][j] == ' ') 
				return 0;
		}
	}
	return 1;
}
