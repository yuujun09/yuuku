#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
	int result = 1;
	int i = 0;
	int n = 0;
	printf("n等于：");
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++)
	{
		result = result * i;
		n = n + result;
	}
		printf("n的阶乘为%d\n", result);
		printf("从1到n的每一个阶乘的和为%d\n", n);
	return 0;
}