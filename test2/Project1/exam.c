#include <stdio.h>
#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}
int main() {

    for (int i = 0; i < 6; ++i)
    {
        if (i < 2)
            printf("     **     \n");
        else if (i < 4)
            printf("************\n");
        else if(i<6)
            printf("    *  *    \n");
    }
    return 0;
}