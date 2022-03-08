#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>//牛客45 数对
//int main()
//{
//    long long n = 0;
//    long long k = 0;
//    scanf("%d %d", &n, &k);
//    long long y = 0;
//    long long ret = 0;
//    long long nums = 0;
//    if (k == 0)
//    {
//        nums = n * n;
//        printf("%ld", nums);
//    }
//    else
//    {
//        for (y = k + 1;y <= n;y++)
//        {
//            ret = 0;
//            if (n % y >= k)
//                ret = n % y - k + 1;
//            nums += ((n / y) * (y - k) + ret);
//        }
//        printf("%ld", nums);
//    }
//    return 0;
//}


#include<stdio.h>
int main()//截断数组
{
    int k = 0;
    char a[1001];
    while (scanf("%s", a) != EOF)
    {
        scanf("%d", &k);
        a[k] = '\0';
        printf("%s", a);
    }
    return 0;
}