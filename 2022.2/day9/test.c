#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, * p[4], i;
	for (i = 0;i < 4;i++)
		p[i] = &a[i * 3];
	printf("%d\n", p[3][2]);
	return 0;
}

int* selfDividingNumbers(int left, int right, int* returnSize)//力扣728 自除数
{
    int* pf = (int*)malloc(sizeof(int) * (right - left));
    int key = left;
    int i = 0;

    while (key <= right)
    {
        int tag = 1;
        int ret = key;
        while (ret != 0)
        {
            if ((ret % 10) != 0 && (key % (ret % 10) == 0))
            {
                ret = ret / 10;
            }
            else
            {
                tag = 0;
                break;
            }
        }
        if (tag == 1)
        {
            pf[i] = key;
            i++;
            key++;
        }
        else
        {
            key++;
        }
    }
    *returnSize = i;
    return pf;
}

int* productExceptSelf(int* nums, int numsSize, int* returnSize)//力扣238 除自身以外数组的乘积
{
    int* answer = (int*)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    answer[0] = 1;
    int men = 1;
    int i = 0;
    for (i = 1;i < numsSize;i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    for (i = numsSize - 1;i >= 0;i--)
    {
        answer[i] = answer[i] * men;
        men *= nums[i];
    }
    return answer;
}