#define _CRT_SECURE_NO_WARNINGS 1
//static int a[100000];
//int* printNumbers(int n, int* returnSize) 
//{
//	int i = 0;
//	int max = pow(10, n);
//	for (i = 0;i<max-1;i++)
//	{
//		a[i] = i + 1; 
//	}
//	*returnSize = max - 1;
//	return a; 
//}

#include<stdio.h>
int main()
{
    int a[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
    int y = 0, m = 0, d = 0;
    scanf("%d %d %d", &y, &m, &d);
    if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && (m > 2))
    {
        printf("%d\n", a[m - 1] + d + 1);
    }
    else
    {
        printf("%d\n", a[m - 1] + d);
    }
    return 0;
}