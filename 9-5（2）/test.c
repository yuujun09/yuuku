#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
	int result = 1;
	int i = 0;
	int n = 0;
	printf("n���ڣ�");
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++)
	{
		result = result * i;
		n = n + result;
	}
		printf("n�Ľ׳�Ϊ%d\n", result);
		printf("��1��n��ÿһ���׳˵ĺ�Ϊ%d\n", n);
	return 0;
}