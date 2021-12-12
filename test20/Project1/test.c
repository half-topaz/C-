#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        if (a == 0)
//            printf("Not quadratic equation\n");
//        else
//        {
//            float Delta = pow(b, 2) - 4 * a * c;
//            float shi = (-b) / (2 * a);
//            if (b == 0)
//                shi = 0;
//            if (Delta == 0)
//                printf("x1=x2=%.2f\n", shi);
//            else if (Delta > 0)
//                printf("x1=%.2f;x2=%.2f", (-b - sqrt(Delta)) / (2 * a), (-b + sqrt(Delta)) / (2 * a));
//            else if (Delta < 0)
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi", shi, sqrt(-Delta) / (2 * a), shi, sqrt(-Delta) / (2 * a));
//        }
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        if (month > 12 || month < 0)
        {
            printf("ÔÂ·ÝÊäÈë´íÎó\n");
            continue;
        }
        if (month == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                printf("29\n");
            else
                printf("28\n");
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            printf("30\n");
        else
            printf("31\n");
    }
    return 0;
}