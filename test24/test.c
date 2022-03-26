#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int ret = 0;
//	while (*str++)
//	{
//		ret++;
//	}
//	return ret;
//}
//char* my_strcpy(char* dest,const char* sour)
//{
//	assert(dest && sour);
//	char* ret = dest;
//	while ( *dest++ = *sour++ )
//	{
//		;
//	}
//	return ret;
//}
//int my_strcmp(const char* sour, const char* dest)
//{
//	assert(dest && sour);
//	int ret = 0;
//	while ( !(ret = (unsigned int)*dest - (unsigned int)*sour) && *sour )
//	{
//		dest++;
//		sour++;
//	}
//	if (ret == 0)
//		return 1;
//	else 
//		return 0;
//}
//char* my_strcat(char* dest, const char* sour)
//{
//	char* ret = dest;
//	assert(dest && sour);
//	while (*dest)
//	{
//		*dest++;
//	}
//	while (*dest++ = *sour++);
//	return ret;
//}
char* my_strstr(const char* arr1, const char* arr2) 
{
	assert(arr1 && arr2);
	char* ret = (char*)arr1;
	while (*ret)
	{
		char* str1 = ret;
		char* str2 = (char*)arr2;
		while( (*str1 == *str2) && (*str1) && (*str2) )
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
			return ret;
		ret++;
	}
	return NULL;
}
int main()
{
	char arr1[20] = "abcdefghij";
	char arr2[20] = "efg";
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", my_strstr(arr1, arr2));
	//printf("%s\n",my_strcat(arr1, arr2));
	//char arr3[20] = "abcdefghih";
	//char arr4[20] = "abcdefghii";
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%d\n", my_strcmp(arr3, arr4));
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	return 0;
}