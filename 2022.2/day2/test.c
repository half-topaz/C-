#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()//尼科彻斯定理
//{
//    int m = 0;
//    int i = 0;
//    while (scanf("%d", &m) != EOF)
//    {
//        int a[100] = { 0 };
//        a[0] = pow(m, 2) - m + 1;//计算数组首位元素的大小
//        for (i = 0;i < m;i++)
//        {
//            //由题目可得，数组为差为2的等差数列，项数为m个
//            printf("%d", a[i] = a[0] + i * 2);
//            if (i < m - 1)
//                printf("+");
//        }
//        printf("\n");
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    int min = 2;
    int max = 0;
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n >= 1 && n <= 1000)
        {
            max = 3 * (n - 1) + min;
            printf("%d\n", (min + max) * n / 2);
        }
    }
    return 0;
}