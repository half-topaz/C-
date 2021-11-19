#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//两个数有几个不同的二进制位
//{
//    int a = 0;
//    int b = 0;
//    int i = 0;
//    int count = 0;
//    scanf("%d %d", &a, &b);
//    int m = a ^ b;
//    while (m != 0)
//    {
//        count++;
//        m = m & (m - 1);
//    }
//    printf("%d", count);
//    return 0;
//}

//int main()//传统方法分离二进制的奇数位和偶数位
//{
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 15;i >0;i--)
//	{
//		arr1[i] = a % 2;
//		a = a / 2;
//		arr2[i] = a % 2;
//		a = a / 2;
//	}
//	for (i = 0;i < 16;i++)
//		printf("%d", arr1[i]);
//	printf("\n");
//	for (i = 0;i < 16;i++)
//		printf("%d", arr2[i]);
//	return 0;
//}


//void sort(int m)//位操作符分离二进制的奇数位和偶数位
//{
//	int i = 0;
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31;i >= 0;i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	sort(a);
//	return 0;
//}

//int NumberOf1(int n)//二进制中1的个数
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//
//void exchange(int* a, int* b)
//{
//	*a = *b ^ *a;
//	*b = *b ^ *a;
//	*a = *b ^ *a;
//}
//int main()//交换两个数，用操作符
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange(&a, &b);
//	//a = a ^ b;
//	//b = b ^ a;
//	//a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}