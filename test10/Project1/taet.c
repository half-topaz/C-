#include "game.h"

void menu()
{
	printf("***********************************\n");
	printf("********    1.��ʼ��Ϸ     ********\n");
	printf("********    0.������Ϸ     ********\n");
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
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(board, ROW, COL);
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����쳣��������\n");
		}
	} while (input);
	return 0;
}