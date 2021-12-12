#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", 1 << n);
//    return 0;
//}

//#include<stdio.h>
//int main()//打印空心三角形
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 1;i <= n;i++)
//        {
//            for (j = 1;j <= i;j++)
//            {
//                if (j == 1 || i == j || i == n)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>//去掉最高分和最低分
//int main()
//{
//    int n = 0;
//    int arr[7];
//    while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
//    {
//        int max = 0;
//        int min = 0;
//        int sub = 0;
//        int i = 0;
//        for (i = 0;i < 7;i++)
//        {
//            if (arr[i] > max)
//            {
//                max = arr[i];
//            }
//            if (min == 0 || arr[i] < min)
//            {
//                min = arr[i];
//            }
//            sub += arr[i];
//        }
//        printf("%.2f\n", (sub - max - min) / 5.0);
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1;i <= n;i++)
        {
            for (j = 1;j <= n;j++)
            {
                if ((i + j) > n)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}