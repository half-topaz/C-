#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int dominantIndex(int* nums, int numsSize)
//{
//    if (numsSize == 1)
//        return 0;
//    int a = 0;
//    int i = 0;
//    int ret = 0;
//    for (i = 0;i < numsSize ;i++)
//    {
//        if (nums[i] > nums[a])
//        {
//            ret = nums[a];
//            a = i;
//        }
//        else if ((i > 0) && (nums[i] > ret))
//        //这里限制i>0的原因是，函数本身假设nums[0]位最大值，ret存放次大值，当nums[0]确实为当前最大值时，
//        //为防止最大值和次大值相等，则在找寻次大值时跳过最大值所在位。
//            ret = nums[i];
//    }
//    return (nums[a] >= ret * 2)?a:-1;
//}
//int main()
//{
//    int arr[] = { 0,0,0,1 };
//    printf("%d", dominantIndex(arr, 4));
//    return 0;
//}





#include <stdlib.h>//数组的交集
int cmp(const int* a, const int* b)
{
    return *a - *b;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int* a = (int*)malloc(sizeof(int) * (nums1Size > nums2Size ? nums1Size : nums2Size));
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    int i = 0;
    int j = 0;
    int ret = 0;
    for (i = 0;i < nums1Size;i++)
    {
        if ((i > 0) && (nums1[i] == nums1[i - 1]))
            continue;
        for (j = 0;j < nums2Size;j++)
        {
            if (nums1[i] == nums2[j])
            {
                a[ret] = nums1[i];
                ret++;
                break;
            }
        }
    }
    *returnSize = ret;
    return a;
}