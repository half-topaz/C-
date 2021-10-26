#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int mix = 1;
//	int m = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for(j = 1; j <= i; j++)
//		{
//			mix = mix * j;
//		}
//		m = mix + m;
//		mix = 1;
//	}
//	printf("%d", m);
//	return 0;
//}
int main()
{
	int i = 0;
	int n = 0;
	int mix = 1;
	int m = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		mix = mix * i;
		m = mix + m;
	}
	printf("%d", m);
	return 0;
}