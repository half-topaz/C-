#include"game.h"
void fresh(char board[ROWS][COLS], int row, int col, char set)//区域初始化
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = set;
		}
	}
}
void print(char board[ROWS][COLS], int row, int col)//显示
{
	int i = 0;
	int j = 0;
	for (i = 0;i <= row; i++)
	{
		printf("%d ", i);//打印横坐标
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);//打印纵坐标
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void set(char board[ROWS][COLS], int row, int col,int set)//布雷
{
	int x = 0;
	int y = 0;
	while (set > 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;//随机生成坐标
		if (board[x][y] == '0')//防止在同一位置重复布雷
		{
			board[x][y] = '1';
			set--;
		}	
	}
}
int numbermine(char board[ROWS][COLS], int i, int j)//标记雷的个数
{
	return board[i - 1][j - 1] + board[i][j - 1] + board[i + 1][j - 1] +
		board[i - 1][j] + board[i + 1][j] +
		board[i - 1][j + 1] + board[i][j + 1] + board[i + 1][j + 1] - 8 * '0';
}
void openmod(char searchboard[ROWS][COLS], char setupboard[ROWS][COLS], int i, int j)//排雷时，对所选位置进行展开，若周围八个位置都没有雷，则对周围八个位置进行展开，循环直到被展开位置周围出现雷
{
	int x = i - 1;
	int y = j - 1;
	if (1 <= i && ROW >= i && 1 <= j && COL >= j)//划定展开范围，数组最外圈不参加展开
		for (x = i - 1;x <= i + 1;x++)
		{
			for (y = j - 1;y <= j + 1;y++)
			{
				if (setupboard[x][y] == '0' && searchboard[x][y] == '*')//只对未展开且非雷位置进行展开
				{
					searchboard[x][y] = numbermine(setupboard, x, y) + '0';
					if (numbermine(setupboard, x, y) == 0)//若周围八个位置有雷，不进行进一步展开
						openmod(searchboard, setupboard, x, y);
				}
			}
		}
}

int life(char searchboard[ROWS][COLS],int row,int col)//判断棋盘上还有几个地方没有翻开，若未翻开的数量等于雷的数量，说明游戏胜利
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1;i <= row;i++)
	{
		for (j = 1;j <= col;j++)
		{
			if (searchboard[i][j] == '*')
				count++;//统计未展开
		}
	}
	return count-DEF;
}

void search(char setupboard[ROWS][COLS], char searchboard[ROWS][COLS])//循环排雷，踩雷即结束循环，或只存在雷时结束循环
{
	int n = 1;
	while (n)
	{
		int i = 0;
		int j = 0;
		scanf("%d %d", &i, &j);
		if (1 <= i && ROW >= i && 1 <= j && COL >= j)
		{
			if (searchboard[i][j] == '*')
			{
				if (setupboard[i][j] == '1')
				{
					printf("你被炸死了！！！游戏结束\n");
					print(setupboard, ROW, COL);
					n = 0;
				}
				else if (setupboard[i][j] == '0')
				{
					openmod(searchboard, setupboard, i, j);
					print(searchboard, ROW, COL);
					n = life(searchboard, ROW, COL);
					if (n == 0)
						printf("排雷成功，游戏胜利\n");
					else
						printf("安全，继续排雷：");
				}
			}
			else
				printf("这里看过了，请重新输入：");
		}
		else
			printf("输入错误，请重新输入：");
	}
}
void game()//游戏主体
{
	char setupboard[ROWS][COLS] = { 0 };//布雷区
	char searchboard[ROWS][COLS] = { 0 };//排雷区
	fresh(setupboard, ROWS, COLS, '0');
	fresh(searchboard, ROWS, COLS, '*');
	set(setupboard, ROW, COL, DEF);
	print(searchboard, ROW, COL);
	printf("请选择坐标：");
	search(setupboard, searchboard);
}

