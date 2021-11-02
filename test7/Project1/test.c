#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//void Primenum(int j)
//{
//	int n = 0;
//	for (n = 2;n < j;n++)
//		if (j % n == 0)
//			break;
//	if (j == n)
//		printf("%d ", j);
//}
//int main()
//{
//	int i = 0;
//	for (i = 101;i < 200;i += 2)
//		Primenum(i);
//	return 0;
//}

//#include<stdio.h>
//void LeapYear(int j)
//{
//	if (((j % 4 == 0) && (j % 100 != 0)) || (j % 400 == 0))
//		printf("%d是闰年", j);
//	else
//		printf("%d不是闰年", j);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	LeapYear(i);
//	return 0;
//}

//#include<stdio.h>
//void Exchange(int *x, int *y)
//{
//	int ret = 0;
//	ret = *x;
//	*x = *y;
//	*y = ret;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int *pi = &i;
//	int *pj = &j;
//	scanf("%d %d", &i, &j);
//	Exchange(pi, pj);
//	printf("%d %d", i, j);
//	return 0;
//}

#include<stdio.h>
void mulform(int n)
{
	int x = 0;
	int y = 0;
	for (x = 1;x <= n;x++)
	{
		for (y = 1;y <= x;y++)
			printf("%2d*%2d=%3d  ", x, y, x * y);
		printf("\n");
	}
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	mulform(i);
	return 0;
}