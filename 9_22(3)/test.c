#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int x)
{
	if (x > 9)
		print(x / 10);
	printf("%d ", x%10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}