#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, * p = a + 5, * q = NULL;
	//q = (p + 5);
	float a[3] = { 1.5,2.5,3.5 }, * pa = a;*(pa++) *= 3;
	printf("%lf\n", *pa);
	return 0;
}

int* masterMind(char* s, char* g, int* returnSize)
{
    int* answer = (int*)malloc(sizeof(int) * 2);
    int i = 0;
    int ture = 0;
    int fail = 0;
    for (i = 0;i < 4;i++)
    {
        if (*(s + i) == *(g + i))
        {
            ture++;
        }
    }
    answer[0] = ture;
    int j = 0;
    for (i = 0;i < 4;i++)
    {
        for (j = 0;j < 4;j++)
        {
            if (*(s + i) == *(g + j))
            {
                fail++;
                *(g + j) = '0';
                break;
            }
        }
    }
    answer[1] = fail - ture;
    *returnSize = 2;
    return answer;
}

int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
{
    int* a = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    int i = 0;
    int j = 0;
    int ret = 0;
    for (i = 0;i < numbersLen - 1;i++)
    {
        if (numbers[i] > target)
            continue;
        for (j = i + 1;j < numbersLen;j++)
        {
            if ((numbers[i] + numbers[j]) == target)
            {
                a[0] = i + 1;
                a[1] = j + 1;
                ret = 1;
                break;
            }
        }
        if (ret == 1)
            break;
    }
    return a;
}