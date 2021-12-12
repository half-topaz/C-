#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int arr[100000] = {0};
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int m = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &m);
//		arr[m - 1] = m;
//	}
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] != 0)
//			printf("%d", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int tmp = 0;
//    scanf("%d", &n);
//    m = n / 12;
//    tmp = m * 4 + 2;
//    printf("%d", tmp);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0;i < n;i++)
//    {
//        for (j = 0;j < m;j++)
//        {
//            scanf("%d", &arr[j][i]);
//        }
//    }
//    for (i = 0;i < m;i++)
//    {
//        for (j = 0;j < n;j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


#include<stdio.h>
int main()
{
    int arr[50];
    int i = 0;
    int n = 0;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int ret = 0;
    scanf("%d", &ret);
    for (i = 0;i < n;i++)
    {
        if (arr[i] != ret)
            printf("%d ", arr[i]);
    }
    return 0;
}