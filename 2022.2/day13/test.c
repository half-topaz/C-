#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int fun(unsigned int x)
//{
//	int n = 0;
//	while (x + 1)
//	{
//		n++;
//		x = x | (x + 1);
//	}
//	return n;
//}
//int main()
//{
//	printf("%d", fun(2014));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int one = 1;
//        int two = 0;
//        int three = 0;
//        int i = 0;
//        if (n < 1 || n>31)
//            continue;
//        for (i = 1;i < n;i++)
//        {
//            three = three + two;
//            two = one;
//            one = three;
//        }
//        printf("%d\n", one + two + three);
//    }
//    return 0;
//}

#include <stdio.h>
#include <math.h>
int main()
{
    double n = 0;
    int m = 0;
    while (scanf("%lf %d", &n, &m) != EOF)
    {
        int i = 0;
        double sum = 0;
        for (i = 0;i < m;i++)
        {
            sum += n;
            n = sqrt(n);
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}