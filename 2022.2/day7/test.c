#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int cmp(const char* a, const char* b)
//{
//    return *a - *b;
//}
//int main()
//{
//    char arr[1000];
//    while (scanf("%s", arr) != EOF)
//    {
//        int lg = strlen(arr);
//        qsort(arr, lg, sizeof(char), cmp);
//        printf("%s", arr);
//    }
//    return 0;
//}

int pivotIndex(int* nums, int numsSize)
{
    float sums = 0;
    float sum = 0;
    int i = 0;
    int j = 0;
    for (i = 0;i < numsSize;i++)
    {
        sums += nums[i];
    }
    if (sums - nums[0] == 0)
        return 0;
    for (i = 1;i < numsSize;i++)
    {
        for (j = 0;j < i;j++)
        {
            sum += nums[j];
        }
        if (sum == ((sums - nums[i]) / 2))
            return i;
        else
            sum = 0;
    }
    return -1;
}
int main()
{
    int arr[] = { -1,-1,-1,-1,-1,-1 };
    printf("%d", pivotIndex(arr, 6));
    return 0;
}