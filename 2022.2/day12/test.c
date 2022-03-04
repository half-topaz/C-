#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char c = 'A';
//	if ('0' <= c <= '9') printf("YES");
//	else printf("NO");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 1001;
//	int ans = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		ans ^= i % 3;
//	} printf("%d", ans);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    char arr[11];
//    scanf("%d", &n);
//    int i = 0;
//    if (n == 0)
//    {
//        arr[0] = '0';
//    }
//    while (n > 0)
//    {
//        arr[i] = n % 10 + '0';
//        n = n / 10;
//        i++;
//    }
//    printf("%s", arr);
//    return 0;
//}

#include <stdio.h>
#include <string.h>
void change(char* arr, int left, int right)
{
    char ret = 0;
    while (right > left)
    {
        ret = *(arr + left);
        *(arr + left) = *(arr + right);
        *(arr + right) = ret;
        left++;
        right--;
    }
}

int main()
{
    char c[10001];
    gets(c);
    int len = strlen(c);
    change(c, 0, len - 1);//数组翻转
    int i = 0;
    int left = 0;
    for (i = 0;i < len;i++)//去符号
    {
        if (c[i] < 'A' || (c[i] > 'Z' && c[i] < 'a') || c[i]>'z')
            c[i] = ' ';
    }
    for (i = 0;i <= len;i++)//部分翻转
    {
        if (c[i] == ' ' || c[i] == '\0')
        {
            change(c, left, i - 1);
            left = i + 1;
        }
    }
    int space = 0;
    for (i = 0;(i + space) <= len;i++)//去空格
    {
        if (c[i + space] == ' ')
        {
            while (c[i + space + 1] == ' ')
            {
                space++;
            }
        }
        c[i] = c[i + space];
    }
    printf("%s\n", c);
    return 0;
}