#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int two(long long m)//判断是否是二段数，通过不断的对数字取余，比较每一次余数的变化
{
    long long x = m % 10;
    long long y = m / 10;
    int i = 0;//用来记录这个数字中出现过多少次数字变化，只变一次说明是二段数
    while (y != 0)
    {
        if (y % 10 == x)
            y = y / 10;
        else
        {
            x = y % 10;
            y = y / 10;
            i++;
        }
    }
    if (i == 1)
        return 1;
    else
        return 0;
}
int main()//求一个数的最小二段数倍数
{
    long long n = 0;
    int i = 2;
    long long m = 0;
    while (scanf("%lld", &n) != EOF)
    {
        if (n == 0)
            break;
        else
        {
            do
            {
                m = n * i;//直接在这个数的倍数里面去找
                if (two(m) == 1)
                {
                    printf("%lld:%lld\n", n, m);
                    i = 2;
                }
                else
                    i++;
            } while (i > 2);
        }
    }
    return 0;
}