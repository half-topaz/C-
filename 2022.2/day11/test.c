#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a;
//	unsigned int b = 5;
//	b += -20;
//	a += a -= a = 9;
//	//double x = 1.42;
//	//x = x % 3;//ȡģ���������������Ͻ���
//	int k = 1 ^ (1 << 31 >> 31);
//	printf("%d\n", k);
//	printf("%d", b);
//	return 0;
//
//}
//
//int findMaxConsecutiveOnes(int* nums, int numsSize)//����485 ������� 1 �ĸ���
//{
//    int leng = 0;
//    int ret = 0;
//    int i = 0;
//    for (i = 0;i < numsSize;i++)
//    {
//        if (nums[i] == 1)
//        {
//            ret++;
//        }
//        else if (nums[i] == 0)
//        {
//            if (ret > leng)
//            {
//                leng = ret;
//                ret = 0;
//            }
//            else
//            {
//                ret = 0;
//            }
//        }
//        if (ret > leng)
//        {
//            leng = ret;
//        }
//    }
//    return leng;
//}

#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int j = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n < 1 || n>500000)
            continue;
        int ret = 0;
        int cont = 0;
        for (i = 1;i <= n;i++)
        {
            for (j = 1;j < i;j++)
            {
                if (i % j == 0)
                {
                    cont += j;
                }
            }
            if (cont == i)
            {
                ret++;
            }
            cont = 0;
        }
        printf("%d\n", ret);
    }
    return 0;
}