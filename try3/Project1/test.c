#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int two(long long m)//�ж��Ƿ��Ƕ�������ͨ�����ϵĶ�����ȡ�࣬�Ƚ�ÿһ�������ı仯
{
    long long x = m % 10;
    long long y = m / 10;
    int i = 0;//������¼��������г��ֹ����ٴ����ֱ仯��ֻ��һ��˵���Ƕ�����
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
int main()//��һ��������С����������
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
                m = n * i;//ֱ����������ı�������ȥ��
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