#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//char c[5] = { 'a', 'b', '\0', 'c', '\0' };
//	//char a[20] = "abcdefg";
//	//char b[] = "x+y=5.";
//	//char d[15];
//	int x[10][10] = { {1},{2},{0},{0},{0}, {1,2,3,4,5,6,7,8,9,10},{0} };
//	int e = x[5][5];
//	int a=*(x[5] + 5);
//	int b=*(*(x + 5) + 5);
//	int c=*(x + 5 + 5);
//	int d=*(x + 5)[5];
//
//	printf("%s", c);
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const char* a, const char* b)
{
    return *a - *b;
}
int main()
{
    char s[501];
    while (scanf("%s", s) != EOF)
    {
        int len = strlen(s);
        int i = 0;
        int ret = 0;
        qsort(s, len, sizeof(char), cmp);
        while (s[i] <= 127&&i<len)
        {
            if ((i > 0) && (s[i] != s[i - 1]))
            {
                ret++;
                i++;
            }
            else if (i == 0)
            {
                ret++;
                i++;
            }
            else
            {
                i++;
            }
        }
        printf("%d\n", ret);
    }
    return 0;
}


int cmp(const int* a, const int* b)
{
    return *a - *b;
}

int majorityElement(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);
    return nums[numsSize / 2];
}