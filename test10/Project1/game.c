#include "game.h"

void freshboard(char board[ROW][COL], int row, int col)//��ʼ������
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
			board[x][y] = ' ';
	}
}

void Outputboard(char board[ROW][COL], int row, int col)//��ӡ����
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			printf(" %c ", board[x][y]);
			if (y < ROW - 1)
				printf("|");
		}
		printf("\n");
		if (x < COL - 1)
			printf("---|---|---\n");
	}
}

void humango(char board[ROW][COL], int row, int col)//����ж�
{
	int x = 0;
	int y = 0;
	printf("����ж�\n");
	printf("����������->");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= 3 && y > 0 && y <= 3 && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
			printf("�����쳣����������->");
	}
	Outputboard(board, row, col);
}

void comgo(char board[ROW][COL], int row, int col)//�����ж�
{
	printf("�����ж�\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	Outputboard(board, row, col);
}

int fullboard(char board[ROW][COL], int row, int col)//��������
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
			if (board[x][y] == ' ')
				return 1;
	}
	return 0;
}

char checkboard(char board[ROW][COL], int row, int col)//�������
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)//����ʤ��
	{
		if ((board[x][0] == board[x][1]) && (board[x][1] == board[x][2]) && (board[x][0] != ' '))
			return board[x][0];
	}
	for (y = 0; y < col; y++)//����ʤ��
	{
		if ((board[0][y] == board[1][y]) && (board[1][y] == board[2][y]) && (board[0][y] != ' '))
			return board[0][y];
	}
	if ((((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) || ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))) && (board[1][1] != ' '))//б�Խ�ʤ��
		return board[1][1];
	if (fullboard(board, row, col) == 0)//�ж�ƽ��
		return 'F';
	else
		return 'C';
}

void game(char board[ROW][COL], int row, int col)//��Ϸ������
{
	char sign = 'C';
	freshboard(board, row, col);//��ʼ������
	Outputboard(board, row, col);
	while (1)//��Ϸ����
	{
		humango(board, row, col);
		sign = checkboard(board, row, col);
		if (sign != 'C')
			break;
		comgo(board, row, col);
		sign = checkboard(board, row, col);
		if (sign != 'C')
			break;
	}
	switch (sign)//�ж���Ӯ
	{
	case '*':
		printf("���ʤ��\n");
		break;
	case '#':
		printf("����ʤ��\n");
		break;
	case 'F':
		printf("ƽ��\n");
		break;
	}
	Outputboard(board, row, col);
}