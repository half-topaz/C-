#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    while (scanf("%d", &m) != EOF)
//    {
//        if (m % 2 == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}

#include<stdio.h>
char arr[] = { 'a','A','e','E','i','I','o','O','u','U' };
int main()
{
    char sz = 0;
    int i = 0;
    while (scanf(" %c", &sz) != EOF)
    {
        int ret = 0;
        for (i = 0;i < 10;i++)
            if (sz == arr[i])
            {
                printf("Vowel\n");
                ret++;
            }
        if (ret == 0)
            printf("Consonant\n");
    }
    return 0;
}