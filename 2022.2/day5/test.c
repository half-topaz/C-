#define _CRT_SECURE_NO_WARNINGS 1
int GetNumberOfK(int* data, int Len, int k)
{
    if (data[Len - 1] < k)
        return 0;
    int ret = 0;
    int i = 0;
    for (i = 0;i < Len;i++)
    {
        if (data[i] == k)
            ret++;
        else if (data[i] > k)
            break;
    }
    return ret;
}

int convertInteger(int A, int B)
{
    int ret = 0;
    A = A ^ B;
    int i = 0;
    for (i = 0;i < 32;i++)
    {
        if (((A >> i) & 1) == 1)
            ret++;
    }
    return ret;
}