#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int count = 0;
	int i = 0;
	printf("从100到200的素数有：");
	for (i = 100; i <= 200; i++)//for命令后不加“ ; ”
	{
		int j = 0; 
		for (j = 2; j <=sqrt(i); j++)//试除法
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if(j>sqrt(i))//循环跳出
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\n个数为：%d\n", count);
		return 0;
}