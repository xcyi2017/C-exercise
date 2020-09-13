#pragma once
#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

// 函数声明
void initBoard(char board[ROW][COL], int, int);
void displayBoard(char board[ROW][COL], int, int);
void playerMove(char board[ROW][COL], int, int);
void computerMove(char board[ROW][COL], int, int);
char isWin(char board[ROW][COL], int, int);
int isFull(char board[ROW][COL], int, int);
