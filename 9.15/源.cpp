#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int ret = 0;
	int i = 0;
	int n = 0;
	printf("������������������ѯ��n = ");
	scanf_s("%d", &n);
	if (n >= 3)
	{
		for (i = 0; i <= n - 3; i++)
		{
			ret = a + b;
			a = b;
			b = ret;
		}
		printf("����Ϊ��%d", ret);
	}
	else
	{
		printf("����Ϊ1");
	}
	return 0;
}