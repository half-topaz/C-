#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void output(int i)//递归输出整数
//{
//	if (i > 10)
//	{
//		output(i / 10);
//		printf("%d", i % 10);
//	}
//	else
//	{
//		printf("%d", i);
//	}	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	output(a);
//	return 0;
//}


//#include<stdio.h>
//int Factorial1(int n)//递归方式
//{
//	if (n > 1)
//		return n * Factorial1(n - 1);
//	else
//		return 1;
//}
//int Factorial2(int n)//循环方式
//{
//	int i = 0;
//	int pro = 1;
//	for (i = 1; i <= n; i++)
//			pro = pro * i;
//	return pro;
//}
//
//int main()//求阶乘
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d\n", Factorial1(x));
//	printf("%d\n", Factorial2(x));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int mystrlen1(char* arr)//递归实现
//{
//	if (arr[0] != '\0')
//		return 1 + mystrlen1(arr+1);
//	else
//		return 0;
//}
//int mystrlen2(char* arr)//do-while函数实现
//{
//	int n = 0;
//	while (arr[n] != '\0')
//	{
//			n++;
//	}
//	return n;
//}
//int main()//strlen的函数实现
//{
//	char arr[] = "abcdefghij";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", mystrlen1(arr));
//	printf("%d\n", mystrlen2(arr));
//	return 0;
//}

//#include<stdio.h>
//int mystrlen1(char* arr)//计算字符串大小
//{
//	if (arr[0] != '\0')
//		return 1 + mystrlen1(arr + 1);
//	else
//		return 0;
//}
////void reverse_string(char* string)//非递归
////{
////	int i = 0;
////	int j = mystrlen1(string)-1;
////	char ret = 0;
////	while (i < j)
////	{
////		ret = string[i];
////		string[i] = string[j];
////		string[j] = ret;
////		i++;
////		j--;
////	}
////}
//void reverse_string(char* string)//递归
//{
//	int i = 0;
//	int j = mystrlen1(string) - 1;
//	char ret = 0;
//	ret = string[i];
//	string[i] = string[j];
//	string[j] = '\0';
//	if(mystrlen1(string)>1)
//		reverse_string(string+1);
//	string[j] = ret;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()//递归求一个数的每位之和
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d",DigitSum(i));
//	return 0;
//}
//
//#include<stdio.h>
//double power(double i, double j)
//{
//	if (i != 0)
//	{
//		if (j < 0)
//			return (1 / i) * power(i, j + 1);
//		else if (j == 0)
//			return 1;
//		else
//			return i * power(i, j - 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%lf\n",power(n, k));
//	return 0;
//}

#include<stdio.h>
int Flb1(int n)
{
	if (n < 3)
		return 1;
	else
		return Flb1(n - 1) + Flb1(n - 2);
}
int Flb2(int n)
{
	int i = 0;
	int a1 = 1;
	int a2 = 1;
	int a3 = 0;
	if (n < 3)
		return 1;
	else
		for (i = 3;i <= n; i++)
		{
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
		}
	return a3;
}
int main()
{
	int k = 0;
	scanf("%d", &k);
	printf("%d\n", Flb1(k));
	printf("%d\n", Flb2(k));
	return 0;
}