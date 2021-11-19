#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int money = 0;
	int bot = 0;
	int ret1 = 0;
	int ret2 = 0;
	scanf("%d", &money);
	while (money / 2)
	{
		bot += money;
		ret1 = money / 2;
		ret2 = money % 2;
		money = ret1 + ret2;
	}
	printf("%d", bot);
	return 0;
}