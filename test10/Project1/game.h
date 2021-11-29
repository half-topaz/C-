#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3


void game(char board[ROW][COL], int row, int col);
void freshboard(char board[ROW][COL], int row, int col);//初始化棋盘
void Outputboard(char board[ROW][COL], int row, int col);//打印棋盘
void humango(char board[ROW][COL], int row, int col);//玩家行动
void comgo(char board[ROW][COL], int row, int col);//电脑行动
char checkboard(char board[ROW][COL], int row, int col);//检查棋盘