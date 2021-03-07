#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double x, sum = 0,sum1;
	int n, i, a, A=1;
	scanf("%lf %d", &x, &n);
	for (i = 1; i <= n; i++)
	{
		A = 1;
		//算i的阶乘A
		for (a = 1; a <= i; a++)
			A *= a;
		sum = sum + pow(x, i) / A;
	}
	sum1 = sum + 1;
	printf("%.4f", sum1);
	return 0;
}//浮点数溢出