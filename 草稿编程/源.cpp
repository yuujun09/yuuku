#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int arr[20];
    int i = 0;
    int sum = 0;
    for (i = 0;;)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= 0)
            break;
        if (arr[i] % 2 == 1)
            sum += arr[i];
        i++;
    }printf("%d", sum);
    return 0;
}