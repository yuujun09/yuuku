#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* arr)
{
	if (*arr != '\0')
		return 1 + my_strlen(arr+1);
	else
		return 0;
}


int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}