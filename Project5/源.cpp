#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[80] = { 0 };
	int n, key, i;
	gets_s(arr);
	n = strlen(arr);
	scanf("%d", &key);
	for (i = 0; i < n; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			arr[i] = arr[i] + (key % 26);
			if (arr[i] < 97)
				arr[i] += 26;
			else if (arr[i] > 122)
				arr[i] -= 26;
			printf("%c", arr[i]);
		}
		else if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			arr[i] = arr[i] + (key % 26);
			if (arr[i] < 65)
				arr[i] += 26;
			else if (arr[i] > 90)
				arr[i] -= 26;
			printf("%c", arr[i]);
		}
		else printf("%c", arr[i]);
	}
	return 0;
}