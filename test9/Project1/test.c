#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void pop(char arr[])
//{
//	int i = 0;
//	int j = 0;
//	int n = strlen(arr);
//	int ret = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0;j < n - i; j++)
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
//}
//int main()
//{
//	int i = 0;
//	char arr[] = "15898654";
//	pop(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>
//void init(int arr[],int k)//初始化为0
//{
//	int i = 0;
//	for (i = 0;i < k ; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int k)//打印数组
//{
//	int i = 0;
//	for (i = 0;i < k ; i++)
//	{
//		printf("%3d",arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int k)//逆序数组
//{
//	int i = 0;
//	int j = k - 1;
//	int ret = 0;
//	while (i < j)
//	{
//		ret = arr[i];
//		arr[i] = arr[j];
//		arr[j] = ret;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {4,15,8,94,8,9,63,2,74};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr,sz);
//	init(arr,sz);
//	print(arr,sz);
//	return 0;
//}

#include<stdio.h>
void exchange(char arr1[], char arr2[], int k)//数组交换
{
	int i = 0;
	int ret = 0;
	for (i = 0;i < k-1; i++)
	{
		ret = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = ret;
		ret = 0;
	}
}
int main()
{
	char arr1[] = "Hello World";
	char arr2[] = "Happy to se";
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	exchange(arr1, arr2, sz);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}