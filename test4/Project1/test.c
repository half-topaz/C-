#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//从大到小排序
//{
//	char arr[20] = {0};
//	int ret = 0;
//	int i = 0;
//	int j = 0;
//	int n = sizeof(arr);
//	scanf("%s",arr);
//	for (i = 0; i < sizeof(arr); i++)
//	{
//		for (j = 0;j < n-1;j++)
//		{
//			if (arr[j] < arr[j + 1])//判断是否交换
//			{
//				ret = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = ret;
//			}
//		}
//		n--;//最后一位已经最小，不再参加交换
//	}
//	printf( "%s",arr);
//	return 0;
//}

//int main()//打印1~100内3的倍数
//{
//	int i = 0;
//	for (i = 1;i < 100;i++)
//	{
//		if (i % 3 == 0)//能否被3整除
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()//辗转相除法求最大公约数
//{
//	int m = 0;
//	int n = 0;
//	int COF = 0;
//	scanf("%d %d", &m, &n);
//	while (1) 
//	{
//		COF = m % n;
//		if (COF != 0)
//		{
//			m = n;
//			n = COF;
//		}
//		else
//			break;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()//打印闰年
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) 
//		{
//			printf("%d ", i);
//			n++;
//		}
//	}
//	printf("\n%d\n", n);
//	return 0;
//}

int main()//打印100~200之间的素数
{
	int i = 0;
	int n = 0;
	for (i = 101;i < 200;i+=2 )
		//因为100肯定不是素数，直接从101开始，又因为大于100的偶数肯定不是素数，所以+2排除偶数
	{
		for (n = 2;n < i;n++)
			if (i % n == 0)
				break;
		if(i==n)
			printf("%d ", i);
	}
	return 0;
}