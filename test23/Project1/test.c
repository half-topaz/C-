#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<string.h>
//int compare(const int* a, const int* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//void my_qsort(void* base, size_t num, size_t size,int (*compare)(const void*, const void*))
//{
//    assert(base);
//    char* save = (char*)base;
//    char tmp[16];
//    int i = 0;
//    int j = 0;
//    for (i = 0;i < num - 1;i++)
//    {
//        for (j = 0;j < num - 1 - i;j++)
//        {
//            if (compare(save + j * size, save + (j + 1) * size) > 0)
//            {
//                memcpy(tmp, save + j * size, size);
//                memcpy(save + j * size, save + (j + 1) * size, size);
//                memcpy(save + (j + 1) * size, tmp, size);
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 48,89,456,41,68,6,14,7,15,90,5 };
//    int num = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    my_qsort(arr, num, sizeof(int), compare);
//    for (i = 0;i < num;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int compare(const int* a, const int* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//int compare2(const int* a, const int* b)
//{
//	return ((int*)a)[0] - ((int*)b)[0];
//}
//int main()
//{
//	int a[] = { 5,12,86,7,98,4,8,2,63 };
//	int b[4][2] = { 4,8,9,7,5,11,8,6 };
//	int num = sizeof(a) / sizeof(a[0]);
//    int i = 0;
//	int j = 0;
//    qsort(a, num, sizeof(int), compare);
//    for (i = 0;i < num;i++)
//    {
//        printf("%d ", a[i]);
//    }
//	printf("\n");
//	qsort(b, 4, sizeof(b[0]), compare2);
//	for (i = 0;i < 4;i++)
//	{
//		for (j = 0;j < 2;j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



struct Node
{
	int x;
	int y;
	char str[10];
};
int compareX(const struct Node* a, const struct Node* b)
{
	return a->x - b->x;
}
int compareXY(const struct Node* a, const struct Node* b)//当y相等时，按照x大小进行排序
{
	if (a->y == b->y)
	{
		return a->x - b->x;
	}
	else
	{
		return a->y - b->y;
	}
}
int compareSTR(const struct Node* a, const struct Node* b)
{
	return strcmp(a->str, b->str);
}
int main()
{
	struct Node s[10] = { { 5,28,"jfaklsd" } ,{ 8,7,"qweklsd" } ,{ 15,12,"luerrtgfg" } ,{ 5,27,"qjfaklsd" },{ 10,28,"jluerakls" },
							{ 1,66,"qertdfgv" } ,{ 66,4,"qwellsd" } ,{ 24,51,"poinusuwj" } ,{ 66,15,"ssa" } ,{ 2,0,"zxcasd" } };
	qsort(s, 10, sizeof(s[0]), compareX);//按照X大小排序
	int i = 0;
	printf("x从小到大排序\n");
	for (i = 0;i < 10;i++)
	{
		printf("%3d,%3d,%s\n", s[i].x, s[i].y, s[i].str);
	}
	printf("\n");
	printf("y为主条件，x为副条件从小到大排序\n");
	qsort(s, 10, sizeof(s[0]), compareXY);//按照Y大小排序
	for (i = 0;i < 10;i++)
	{
		printf("%3d,%3d,%s\n", s[i].x, s[i].y, s[i].str);
	}
	printf("\n");
	printf("按照字符串STR大小排序\n");
	qsort(s, 10, sizeof(s[0]), compareSTR);//按照字符串STR大小排序
	for (i = 0;i < 10;i++)
	{
		printf("%3d,%3d,%s\n", s[i].x, s[i].y, s[i].str);
	}
	printf("\n");
	return 0;
}

