#include"game.h"

void meun()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   0.exit   ******\n");
	printf("************************\n");
	printf("请选择->");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		meun();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新选择->");
		}
	} while (input);
	return 0;
}