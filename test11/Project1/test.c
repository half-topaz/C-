#include"game.h"

void meun()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   0.exit   ******\n");
	printf("************************\n");
	printf("��ѡ��->");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������ѡ��->");
		}
	} while (input);
	return 0;
}