#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int val = 0;
//        int i = 0;
//        double ave = 0;
//        int pnum = 0;
//        int nnum = 0;
//        if (n >= 1 && n <= 2000)
//        {
//            int* a = (int*)malloc(n * sizeof(int));
//            for (i = 0;i < n;i++)
//            {
//                scanf("%d", &val);
//                if (abs(val) <= 1000)
//                {
//                    a[i] = val;
//                    if (a[i] > 0)
//                    {
//                        pnum++;
//                        ave += a[i];
//                    }
//                    else if (a[i] < 0)
//                        nnum++;
//                }
//                else
//                    i--;
//            }
//            printf("%d %0.1f", nnum, ave / pnum);
//        }
//    }
//    return 0;
//}

#include <stdio.h>
int minNumberInRotateArray(int* a, int rotateArrayLen)
{
    int right = rotateArrayLen - 1;
    int left = 0;
    while (right >= left)
    {
        int mid = (right + left) / 2;
        if (a[right] == a[left])
            left++;
        else if (a[mid] > a[left])
            left = mid;
        else
            right = mid;
    }
    return a[right];
}

int main()
{
    int a[] = { 3,4 };
    printf("%d",minNumberInRotateArray(a, 2));
    return 0;
}