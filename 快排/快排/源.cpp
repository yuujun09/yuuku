#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void sort(int a[],int l,int r)
{
	if (l < r)
	{
		int i = l;
		int j = r;
		int k = a[l];
		while (i < j)
		{
			while (i < j && a[j] >= k)
			{
				j--;
			}
			if (i < j)
			{
				a[i++] = a[j];
			}
			while (i < j && a[i] < k)
			{
				i++;
			}
			if (i < j)
			{
				a[j--] = a[i];
			}
		}
		a[i] = k;

		sort(a, l, i - 1);
		sort(a, i + 1, r);
	}
}

int main()
{
	int arr[10] = { 13,24,65,321,32,14,251,4,8,6 };
	int i = 0;
	printf("原数组：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	sort(arr,0,9);
	printf("\n顺序数组：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}