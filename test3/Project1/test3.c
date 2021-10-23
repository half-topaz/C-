#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//    if (x < 0)
//    {
//        y = 1;
//        printf("%d", y);
//    }
//    else if (x == 0)
//    {
//        y = 0;
//        printf("%d", y);
//    }
//    else if (x > 0)
//    {
//        y = -1;
//        printf("%d", y);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int sec = 0;
//    int min = 0;
//    int hou = 0;
//    scanf("%d", &sec);
//    min = sec / 60;
//    sec = sec % 60;
//    hou = min / 60;
//    min = min % 60;
//    printf("%d %d %d", hou, min, sec);
//    return 0;
////}
//#include<stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man   \n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int gra_1 = 0;
//    int gra_2 = 0;
//    int gra_3 = 0;
//    int gra_4 = 0;
//    int gra_5 = 0;
//    float ave = 0;
//    scanf("%d %d %d %d %d", &gra_1, &gra_2, &gra_3, &gra_4, &gra_5);
//    ave = (float)(gra_1 + gra_2 + gra_3 + gra_4 + gra_5) / 5;
//    printf("%0.1f", ave);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int num = 0;
    scanf("%d",&num);
    d = num / 1000;
    c = num % 1000 / 100;
    b = num % 100 / 10;
    a = num % 10;
    printf("%d%d%d%d\n", a, b, c, d);
    return 0;
}