#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int func(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x & (x - 1);//与运算
//	} 
//	return count;
//}
//int func(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x >> 1;
//		printf("%d", count);
//	}
////	return count;
//}
//int main()
//{
//	printf("%d", func(-1));
//	return 0;
//}

int Add(int num1, int num2)//位运算加法
{
	int ret = 0;
	while (num1 & num2)
	{
		ret = (num1 & num2) << 1;
		num1 = num1 ^ num2;
		num2 = ret;
	}
	return num1 | num2;
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)//力扣448. 找到所有数组中消失的数字
{
    int* pf = (int*)malloc(sizeof(int) * numsSize);
    int i = 0;
    int ret = 0;
    for (i = 0;i < numsSize;i++)
    {
        pf[i] = 0;
    }
    for (i = 0;i < numsSize;i++)
    {
        pf[nums[i] - 1]++;
    }
    for (i = 0;i < numsSize;i++)
    {
        if (pf[i] == 0)
        {
            pf[ret] = i + 1;
            ret++;
        }
    }
    *returnSize = ret;
    return pf;
}
