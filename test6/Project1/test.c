#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <time.h>
#include<stdlib.h>
void Guessnumber()
{
	int i = rand()%1000+1;
	int ans = 0;
	printf("��������µ�����:");
	do
	{
		scanf("%d", &ans);
		if (ans > i)
			printf("̫���ˣ�����������:");
		else if (ans < i)
			printf("̫С�ˣ�����������:");
		else if (ans == i)
		{
			printf("�¶��ˣ��������%d\n", i);
			break;
		}
	} while (1);
}

int main()
{
	srand((unsigned int)time(NULL));
	int n = 0;
	do 
	{
		printf("**************************\n");
		printf("******  1.��ʼ��Ϸ  ******\n");
		printf("******  0.������Ϸ  ******\n");
		printf("**************************\n");
		printf("��ѡ��->:");
		scanf("%d", &n);
		if (n == 1)
			Guessnumber();
		else if (n == 0)
			break;
		else
			printf("�����������������\n");
	} while (1);
	return 0;
}