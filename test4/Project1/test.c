#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//�Ӵ�С����
//{
//	char arr[20] = {0};
//	int ret = 0;
//	int i = 0;
//	int j = 0;
//	int n = sizeof(arr);
//	scanf("%s",arr);
//	for (i = 0; i < sizeof(arr); i++)
//	{
//		for (j = 0;j < n-1;j++)
//		{
//			if (arr[j] < arr[j + 1])//�ж��Ƿ񽻻�
//			{
//				ret = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = ret;
//			}
//		}
//		n--;//���һλ�Ѿ���С�����ٲμӽ���
//	}
//	printf( "%s",arr);
//	return 0;
//}

//int main()//��ӡ1~100��3�ı���
//{
//	int i = 0;
//	for (i = 1;i < 100;i++)
//	{
//		if (i % 3 == 0)//�ܷ�3����
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()//շת����������Լ��
//{
//	int m = 0;
//	int n = 0;
//	int COF = 0;
//	scanf("%d %d", &m, &n);
//	while (1) 
//	{
//		COF = m % n;
//		if (COF != 0)
//		{
//			m = n;
//			n = COF;
//		}
//		else
//			break;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()//��ӡ����
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) 
//		{
//			printf("%d ", i);
//			n++;
//		}
//	}
//	printf("\n%d\n", n);
//	return 0;
//}

int main()//��ӡ100~200֮�������
{
	int i = 0;
	int n = 0;
	for (i = 101;i < 200;i+=2 )
		//��Ϊ100�϶�����������ֱ�Ӵ�101��ʼ������Ϊ����100��ż���϶���������������+2�ų�ż��
	{
		for (n = 2;n < i;n++)
			if (i % n == 0)
				break;
		if(i==n)
			printf("%d ", i);
	}
	return 0;
}