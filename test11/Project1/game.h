#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define DEF 10//�׵�����

void fresh(char board[ROWS][COLS], int row, int col, char set);//��ʼ��
void print(char board[ROWS][COLS], int row, int col);//��ʾ
void set(char board[ROWS][COLS], int row, int col, int set);//����
void openmod(char searchboard[ROWS][COLS], char setupboard[ROWS][COLS], int i, int j);//չ��
void search(char setupboard[ROWS][COLS], char searchboard[ROWS][COLS]);//��Ϸ�߼�
void game();