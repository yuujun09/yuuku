#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void menu()
{
	printf("************************\n");
	printf("***  1.play   2.exit ***\n");
	printf("************************\n");
}
void game()
{
	//1.����һ�������
	int ret = 0;
	int guess = 0;//���ղµ�����
//��ʱ��������������������㣬��42��
	ret = rand() % 100 + 1;//����1��100��������
	while (1)
	{
	   scanf("%d", &guess);
	   if (ret < guess)
	   {
		   printf("�´���\n");
	   }
	    else if (ret > guess)
	   {
		   printf("��С��\n");
	    }
	   else
	   {
		   printf("��ϲ��¶��ˣ�\n");
		   break;
	   }
    }
}
int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));//��������㣬����randǰ����ʹ��
	                               //���ܼ���ѭ��������������ᱻ�������ã�����һ�β���
	                               //NULL��Ϊ��ָ�룬������ʵ��Ч��
	do
	{
		menu();
		printf("���롰1��������Ϸ�����롰0���˳���Ϸ\n��ѡ��:>");
	scanf("%d", &choice);
	switch (choice)
	  {
	case 1:
		game();//��������Ϸ
		break;
	case 0:
		printf("�˳���Ϸ");
		break;
	default:
		printf("ѡ�����");
		break;
	   }

	} while (choice);
	return 0;
}