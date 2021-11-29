#include "game.h"

void menu()
{
	printf("***********************************\n");
	printf("********    1.开始游戏     ********\n");
	printf("********    0.结束游戏     ********\n");
	printf("***********************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	char board[ROW][COL] = { 0 };
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(board, ROW, COL);
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入异常，请重试\n");
		}
	} while (input);
	return 0;
}