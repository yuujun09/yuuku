#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int count = 0;
	int i = 0;
	printf("��100��200�������У�");
	for (i = 100; i <= 200; i++)//for����󲻼ӡ� ; ��
	{
		int j = 0; 
		for (j = 2; j <=sqrt(i); j++)//�Գ���
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if(j>sqrt(i))//ѭ������
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\n����Ϊ��%d\n", count);
		return 0;
}