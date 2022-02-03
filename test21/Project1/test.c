#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void revolve(char *arr,int k)
//{
//	assert(arr);
//	char tmp = 0;
//	int i = 0;
//	while (i < k)
//	{
//		tmp = *(arr + i);
//		*(arr + i) = *(arr + k-1);
//		*(arr + k-1) = tmp;
//		i++;
//		k--;
//	}
//}
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int lg = strlen(arr);
//	int k = 0;
//	int i = 0;
//	scanf("%d", &k);
//	k %= lg;
//	revolve(arr,lg);
//	revolve(arr,lg-k);
//	revolve(arr+lg-k,k);
//	printf("%s", arr + i);
//	printf("\n");
//	return 0;
//}

#include<stdio.h>
#define row 4
#define col 4
int main()
{
	int arr[row][col] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int key = 0;
	while (scanf("%d", &key) != EOF)
	{
		int ret = 0;
		int i = 0;
		int j = 0;
		for (i = 0;i < row;i++)
		{
			if (arr[i][col - 1] >= key)
			{
				for (j = col - 1;j >= 0;j--)
				{
					if (arr[i][j] == key)
					{
						printf("找到了，在第%d行第%d列\n", i, j);
						ret = 1;
						break;
					}
				}
			}
			if (ret == 1)
				break;
		}
		if (ret == 0)
		{
			printf("找不到\n");
		}
	}

	return 0;
}