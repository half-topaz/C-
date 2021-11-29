#include "game.h"

void freshboard(char board[ROW][COL], int row, int col)//初始化棋盘
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
			board[x][y] = ' ';
	}
}

void Outputboard(char board[ROW][COL], int row, int col)//打印棋盘
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

void humango(char board[ROW][COL], int row, int col)//玩家行动
{
	int x = 0;
	int y = 0;
	printf("玩家行动\n");
	printf("请输入坐标->");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= 3 && y > 0 && y <= 3 && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
			printf("坐标异常，重新输入->");
	}
	Outputboard(board, row, col);
}

void comgo(char board[ROW][COL], int row, int col)//电脑行动
{
	printf("电脑行动\n");
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

int fullboard(char board[ROW][COL], int row, int col)//棋盘下满
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

char checkboard(char board[ROW][COL], int row, int col)//检查棋盘
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)//纵向胜利
	{
		if ((board[x][0] == board[x][1]) && (board[x][1] == board[x][2]) && (board[x][0] != ' '))
			return board[x][0];
	}
	for (y = 0; y < col; y++)//横向胜利
	{
		if ((board[0][y] == board[1][y]) && (board[1][y] == board[2][y]) && (board[0][y] != ' '))
			return board[0][y];
	}
	if ((((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) || ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))) && (board[1][1] != ' '))//斜对角胜利
		return board[1][1];
	if (fullboard(board, row, col) == 0)//判断平局
		return 'F';
	else
		return 'C';
}

void game(char board[ROW][COL], int row, int col)//游戏主函数
{
	char sign = 'C';
	freshboard(board, row, col);//初始化棋盘
	Outputboard(board, row, col);
	while (1)//游戏过程
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
	switch (sign)//判断输赢
	{
	case '*':
		printf("玩家胜利\n");
		break;
	case '#':
		printf("电脑胜利\n");
		break;
	case 'F':
		printf("平局\n");
		break;
	}
	Outputboard(board, row, col);
}