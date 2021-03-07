#include<stdio.h>
int main()
{
    int i, j, t,n,count=0;
    int a[20] = { 0 };
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i]; a[i] = a[i + 1]; a[i + 1] = t; count++;
            }

        }
    }
    printf("%d", count);
    return 0;
}