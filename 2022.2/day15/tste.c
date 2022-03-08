#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n = 0;
    int a[200000];
    scanf("%d", &n);
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    int ret = 0;
    for (i = 0;i < n;i++)
    {
        ret ^= a[i];
    }
    printf("%d", ret);
    return 0;
}

int findPeakElement(int* nums, int numsLen)
{
    int left = 0;
    int right = numsLen - 1;
    int mid = (right + left) / 2;
    while (left < right)
    {
        if (*(nums + mid) > *(nums + mid + 1))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
        mid = (right + left) / 2;
    }
    return mid;
}