#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3


void game(char board[ROW][COL], int row, int col);
void freshboard(char board[ROW][COL], int row, int col);//��ʼ������
void Outputboard(char board[ROW][COL], int row, int col);//��ӡ����
void humango(char board[ROW][COL], int row, int col);//����ж�
void comgo(char board[ROW][COL], int row, int col);//�����ж�
char checkboard(char board[ROW][COL], int row, int col);//�������