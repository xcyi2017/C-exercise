#include "game.h"
const int dir_x[] = { -1, -1, -1, 0, 0,  1, 1, 1 };
const int dir_y[] = { -1,  0,  1,-1, 1, -1, 0, 1 };

void initBoard(char board[ROWS][COLS], int rows, int cols, char charset)
{
	int i, j;
	
	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j < cols; ++j)
		{
			board[i][j] = charset;
		}
	}
}

void displayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	// 打印列号
	for (i = 0; i <= col; ++i)
	{
		if (i)
			printf("%d ", i);
		else
			printf("  ");
	}
	printf("\n");
	for (i = 1; i <= row; ++i)
	{
		printf("%d ", i);
		for (j = 1; j <= col; ++j)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUT, x, y;
	while (count)
	{
		x = rand() % row + 1; // 1-9
		y = rand() % col + 1; // 1-9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			--count;
		}
	}
}

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y, win = 0;
	while (win < row * col - EASY_COUT)
	{
		printf("请输入排查雷的坐标:>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩到雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾你被炸死了!\n");
				displayBoard(mine, row, col);
				break;
			}
			else //2.不是雷
			{
				// 统计x, y周围有几个雷
				dfs(mine, show, x, y);
				displayBoard(show, row, col);
				++win;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入坐标！\n");
		}
	}
	if (win == row * col - EASY_COUT)
	{
		printf("恭喜你，排雷成功^_^!\n");
		displayBoard(show, row, col);
	}
	
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{

	int count = 0;
	for (int i = 0; i < 8; ++i)
	{
		int dx = x + dir_x[i];
		int dy = y + dir_y[i];
		if (dx < 1 || dx > ROW || dy < 1 || dy > COL) continue;
		count += (mine[dx][dy] == '1');
	}
	return count;
}


void dfs(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = get_mine_count(mine, x, y);
	if (count > 0)
	{
		show[x][y] = count + '0';
		return;
	}	
	else
	{
		show[x][y] = ' ';
		for (int i = 0; i < 8; ++i)
		{
			int dx = x + dir_x[i];
			int dy = y + dir_y[i];
			if (dx < 1 || dx > ROW || dy < 1 || dy > COL || show[dx][dy] - '0' > 0 || show[dx][dy] == ' ')
			{
				continue;
			}
			dfs(mine, show, dx, dy);
		}
	}
}