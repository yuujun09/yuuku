#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	int k = sqrt(n);//提高代码效率，转化实型
	for (j = 2; j <= k; j++)
	{
		if (n % j == 0)
			return 0;
	}
		return 1;
}
int main()
{
	int i,n;
	scanf_s("%d", &n);
	for (i = 2; i <= n; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}