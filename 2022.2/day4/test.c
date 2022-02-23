#define _CRT_SECURE_NO_WARNINGS 1
//力扣645错误的集合
int cmp(int* a, int* b)
{
    return *a - *b;
}
int* findErrorNums(int* nums, int numsSize, int* returnSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);
    int* a = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    int sta = (1 + numsSize) * (numsSize) / 2;
    int sum = 0;
    int i = 0;
    for (i = 0;i < numsSize;i++)
    {
        sum += nums[i];
    }
    for (i = 0;i < numsSize;i++)
    {
        if (nums[i] > (i + 1))
        {
            a[1] = i + 1;
            a[0] = a[1] + sum - sta;
            break;
        }
        else if (nums[i] < (i + 1))
        {
            a[0] = nums[i];
            a[1] = a[0] - sum + sta;
            break;
        }
    }
    return a;
}