#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib(int x)
{
	if (x < 2)
		return 1;
	else if (x == 2)
		return 2;
	else
		return Fib(x - 1) + Fib(x - 2);
}

int main()
{
	int n,ret,i,j;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}