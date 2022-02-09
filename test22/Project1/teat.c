#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
int change(char *s1, char *s2, int len)
{
	assert(s1 && s2);
	char mf[20];
	strcpy(mf, s1);
	strcat(mf, s1);
	int i = 0;
	int j = 0;
	for (i = 0;i < len;i++)
	{
		if (*(mf + i) == *s2)
		{
			for (j = 1;j < len;j++)
			{
				if (*(mf + i + j) != *(s2 + j))
					break;
			}
		}
		if (j == len)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	//char s1[] = "AABCD";
	//char s2[] = "DAABC";
	char s1[10];
	gets(s1);
	char s2[10];
	gets(s2);
	int len = strlen(s1);
	printf("%d", change(s1,s2,len));
	return 0;
}