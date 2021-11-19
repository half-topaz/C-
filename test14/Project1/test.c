#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0x12345678;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int* p = arr;
//	for (i = 0;i < 9;i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void reversal(char* arr,int j)
//{
//    char tem = 0;
//    int i = 0;
//    while (j > i)
//    {
//        tem = arr[i];
//        arr[i] = arr[j];
//        arr[j] = tem;
//        i++;
//        j--;
//    }
//}
//int main()
//{
//    char input[10000];
//    while (gets_s(input,10000))
//    {
//        int size = strlen(input) - 1;
//        reversal(input,size);
//        printf("%s\n", input);
//    }
//    return 0;
//}

//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	for (i = 0;i < 5;i++)
//	{
//		count = count * 10 + a;
//		sum += count;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<math.h>//求水仙花数
//int figure(int i)
//{
//	if ((i / 10) == 0)
//		return 1;
//	else
//		return 1 + figure(i / 10);
//}
//void narnum(int i)
//{
//	int fig = figure(i);
//	int n = 0;
//	int sum = 0;
//	int ret = i;
//	for (n = 1;n <= fig;n++)
//	{
//		sum += pow((i % 10), fig);
//		i = i / 10;
//	}
//	if (sum == ret)
//		printf("%d\n", ret);
//}
//int main()
//{
//	int i = 0;
//	int fig = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		narnum(i);
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	int left = 7;
	int right = 7;
	for (i = 0;i < 7;i++)
	{
		for (j = 0;j <= 13;j++)
		{
			if (j <= right && j >= left)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		if (right < 13)
		{
			left--;
			right++;
		}
	}
	for (i = 0;i < 6;i++)
	{
		left++;
		right--;
		for (j = 0;j <= 13;j++)
		{
			if (j <= right && j >= left)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}