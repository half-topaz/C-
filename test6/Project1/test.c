#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <time.h>
#include<stdlib.h>
void Guessnumber()
{
	int i = rand()%1000+1;
	int ans = 0;
	printf("请输入你猜的数字:");
	do
	{
		scanf("%d", &ans);
		if (ans > i)
			printf("太大了，请重新输入:");
		else if (ans < i)
			printf("太小了，请重新输入:");
		else if (ans == i)
		{
			printf("猜对了，这个数是%d\n", i);
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
		printf("******  1.开始游戏  ******\n");
		printf("******  0.结束游戏  ******\n");
		printf("**************************\n");
		printf("请选择->:");
		scanf("%d", &n);
		if (n == 1)
			Guessnumber();
		else if (n == 0)
			break;
		else
			printf("输入错误，请重新输入\n");
	} while (1);
	return 0;
}