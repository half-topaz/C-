#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//int my_strlen(const char arr[])
//{
//	int i = 0;
//	while (arr[i])
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	while(gets(arr) != EOF)
//	{
//		printf("%d\n", my_strlen(arr));
//	}
//	return 0;
//}

//char* my_strcpy(char* arr2, const char* arr1)
//{
//	assert(arr2 && arr1);
//	char* ret = arr2;
//	while (*arr2++ = *arr1++);
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "Hello World";
//	char arr2[100] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

void team(int arr[],int sz)
{
	int right = sz-1;
	int left = 0;
	int i = 0;
	int j = 0;
	int ret = 0;
	while (right > left)
	{
		for (i = 0;i <= right;i++)
		{
			if (arr[i] % 2 == 0)
			{
				left = i;
				break;
			}
		}
		for (j = right;j >= left;j--)
		{
			if (arr[j] % 2 == 1)
			{
				right = j;
				break;
			}
		}
		ret = arr[right];
		arr[right] = arr[left];
		arr[left] = ret;
		left++;
		right--;
	}
}
int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
	int sz = sizeof(arr)/sizeof(arr[0]);
	team(arr,sz);
	for (i = 0;i < sz - 1;i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}