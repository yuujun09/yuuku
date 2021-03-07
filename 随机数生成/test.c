#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ret()
{
	int b = 0;
	b = rand();
	printf("%d\n", b);
}
int main()
{
	int a;
	srand((unsigned int)time(NULL));
	do 
	{
		scanf("%d", &a);
	
	switch (a)
		{
		case 1:
			ret();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (a);

	return 0;
}