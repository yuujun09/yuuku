#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int i = 0,n=3;
    int a[3] = { 0 };
    while (i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }
    return 0;
}