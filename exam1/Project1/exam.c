#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void turn(char arr[])
{
    int i = 0;
    int start = 0;
    int end = strlen(arr)-1;
    int ret = 0;;
    while (end > start)
    {
        ret = arr[start];
        arr[start] = arr[end];
        arr[end] = ret;
        start++;
        end--;
    }
    start = 0;
    while (arr[i] != '\0')
    {
        if (arr[i+1] != ' ')
            i++;
        else
        {
            end = i;
            while (end > start)
            {
                ret = arr[start];
                arr[start] = arr[end];
                arr[end] = ret;
                start++;
                end--;
            }
            i += 2;
            start = i;
        }
    }
}

int main()
{
    char arr[] = {0};
    while (gets_s(arr,100) != EOF)
    {
        turn(arr);
        printf("%s", arr);
    }
    return 0;
}