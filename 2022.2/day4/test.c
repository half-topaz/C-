#define _CRT_SECURE_NO_WARNINGS 1
//力扣645错误的集合
//int cmp(int* a, int* b)
//{
//    return *a - *b;
//}
//int* findErrorNums(int* nums, int numsSize, int* returnSize)
//{
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int* a = (int*)malloc(2 * sizeof(int));
//    *returnSize = 2;
//    int sta = (1 + numsSize) * (numsSize) / 2;
//    int sum = 0;
//    int i = 0;
//    for (i = 0;i < numsSize;i++)
//    {
//        sum += nums[i];
//    }
//    for (i = 0;i < numsSize;i++)
//    {
//        if (nums[i] > (i + 1))
//        {
//            a[1] = i + 1;
//            a[0] = a[1] + sum - sta;
//            break;
//        }
//        else if (nums[i] < (i + 1))
//        {
//            a[0] = nums[i];
//            a[1] = a[0] - sum + sta;
//            break;
//        }
//    }
//    return a;
//}

#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0;
    int i = 0;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
    {
        char cod[100];
        int num = 0;
        int low = 0;
        int cap = 0;
        scanf("%s", cod);
        //判断密码长度和首字符类型
        if ((strlen(cod) >= 8) && ((cod[0] < '0' || cod[0]>'9')))
        {
            int leg = strlen(cod);
            do//判断密码中各个字符的类型
            {
                if (cod[leg - 1] >= 'a' && cod[leg - 1] <= 'z')
                    low++;
                else if (cod[leg - 1] >= 'A' && cod[leg - 1] <= 'Z')
                    cap++;
                else if (cod[leg - 1] >= '0' && cod[leg - 1] <= '9')
                    num++;
            } while (--leg);
            //判断符合条件的字符个数是否等于密码长度，同时满足三选二规则。
            //因为首位不能是数字，所以符合长度要求的密码必有大写或小写中的一种
            //若首位不是三种类型之一，则符合条件的字符长度不等于密码长度
            if ((cap + low + num) == strlen(cod) && (low != 0) && (cap != 0))
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}