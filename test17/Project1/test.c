#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define n 10
//int main()//杨辉三角
//{
//	int arr[n][n];
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < n; i++)
//	{
//		for (j = 0;j <= i; j++)
//		{
//			if (j == i || j == 0)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j <= i;j++)
//		{
//			printf("%d\t", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()//猜凶手
//{
//	char man = 'A';
//	for (man = 'A';man <= 'D';man++)
//	{
//		if (((man != 'A') + (man == 'C') + (man == 'D') + (man != 'D')) == 3)
//			break;
//	}
//	printf("凶手是：%c\n", man);
//}

//int main()//猜名次
//{
//	int A, B, C, D, E;
//	for (A = 1;A <= 5;A++)
//	{
//		for (B = 1;B <= 5;B++)
//		{
//			for (C = 1;C <= 5;C++)
//			{
//				for (D = 1;D <= 5;D++)
//				{
//					for (E = 1;E <= 5;E++)
//					{
//						if ((((B == 2) ^ (A == 3)) + ((B == 2) ^ (E == 4)) + ((C == 1) ^ (D == 2)) + ((C == 5) ^ (D == 3)) + ((E == 4) ^ (A == 1))) == 5&&A*B*C*D*E==120)
//							printf("A是第%d，B是第%d，C是第%d，D是第%d，E是第%d\n", A, B, C, D, E);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//
//#include<stdio.h>//https://www.nowcoder.com/practice/fcd30aac9c4f4028b23919a0c649824d?tpId=107&&tqId=33397&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//#include<math.h>
//int main()
//{
//    int x = 0;
//    int y = 0;
//    int ret = 0;
//    int i = 0;
//    scanf("%d", &x);
//    while (x)
//    {
//        ret = x % 10;
//        if (ret % 2 == 1)
//            y += pow(10, i);
//        i++;
//        x = x / 10;
//    }
//    printf("%d", y);
//    return 0;
//}

//#include<stdio.h>//走台阶
//int step(int n)
//{
//    if (n == 1)
//        return 1;
//    else if (n == 2)
//        return 2;
//    else
//        return step(n - 1) + step(n - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", step(n));
//    return 0;
//}