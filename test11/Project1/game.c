#include"game.h"
void fresh(char board[ROWS][COLS], int row, int col, char set)//�����ʼ��
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
void print(char board[ROWS][COLS], int row, int col)//��ʾ
{
	int i = 0;
	int j = 0;
	for (i = 0;i <= row; i++)
	{
		printf("%d ", i);//��ӡ������
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);//��ӡ������
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void set(char board[ROWS][COLS], int row, int col,int set)//����
{
	int x = 0;
	int y = 0;
	while (set > 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;//�����������
		if (board[x][y] == '0')//��ֹ��ͬһλ���ظ�����
		{
			board[x][y] = '1';
			set--;
		}	
	}
}
int numbermine(char board[ROWS][COLS], int i, int j)//����׵ĸ���
{
	return board[i - 1][j - 1] + board[i][j - 1] + board[i + 1][j - 1] +
		board[i - 1][j] + board[i + 1][j] +
		board[i - 1][j + 1] + board[i][j + 1] + board[i + 1][j + 1] - 8 * '0';
}
void openmod(char searchboard[ROWS][COLS], char setupboard[ROWS][COLS], int i, int j)//����ʱ������ѡλ�ý���չ��������Χ�˸�λ�ö�û���ף������Χ�˸�λ�ý���չ����ѭ��ֱ����չ��λ����Χ������
{
	int x = i - 1;
	int y = j - 1;
	if (1 <= i && ROW >= i && 1 <= j && COL >= j)//����չ����Χ����������Ȧ���μ�չ��
		for (x = i - 1;x <= i + 1;x++)
		{
			for (y = j - 1;y <= j + 1;y++)
			{
				if (setupboard[x][y] == '0' && searchboard[x][y] == '*')//ֻ��δչ���ҷ���λ�ý���չ��
				{
					searchboard[x][y] = numbermine(setupboard, x, y) + '0';
					if (numbermine(setupboard, x, y) == 0)//����Χ�˸�λ�����ף������н�һ��չ��
						openmod(searchboard, setupboard, x, y);
				}
			}
		}
}

int life(char searchboard[ROWS][COLS],int row,int col)//�ж������ϻ��м����ط�û�з�������δ���������������׵�������˵����Ϸʤ��
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1;i <= row;i++)
	{
		for (j = 1;j <= col;j++)
		{
			if (searchboard[i][j] == '*')
				count++;//ͳ��δչ��
		}
	}
	return count-DEF;
}

void search(char setupboard[ROWS][COLS], char searchboard[ROWS][COLS])//ѭ�����ף����׼�����ѭ������ֻ������ʱ����ѭ��
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
					printf("�㱻ը���ˣ�������Ϸ����\n");
					print(setupboard, ROW, COL);
					n = 0;
				}
				else if (setupboard[i][j] == '0')
				{
					openmod(searchboard, setupboard, i, j);
					print(searchboard, ROW, COL);
					n = life(searchboard, ROW, COL);
					if (n == 0)
						printf("���׳ɹ�����Ϸʤ��\n");
					else
						printf("��ȫ���������ף�");
				}
			}
			else
				printf("���￴���ˣ����������룺");
		}
		else
			printf("����������������룺");
	}
}
void game()//��Ϸ����
{
	char setupboard[ROWS][COLS] = { 0 };//������
	char searchboard[ROWS][COLS] = { 0 };//������
	fresh(setupboard, ROWS, COLS, '0');
	fresh(searchboard, ROWS, COLS, '*');
	set(setupboard, ROW, COL, DEF);
	print(searchboard, ROW, COL);
	printf("��ѡ�����꣺");
	search(setupboard, searchboard);
}

