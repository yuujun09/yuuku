#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
struct message
{
	char name[20];
	char clas[20];
	char assistant[20];
	short price;

};
int main()
{
	struct message a = { "���ݵ��ӿƼ���ѧ","�Զ���һ��","Mr.��",6900 };
	struct message* ssr = &a;
	printf("ѧУ��%s\n", ssr->name);
	printf("�༶��%s\n", ssr->clas);
	printf("������%s\n", ssr->assistant);
	printf("ѧ�ѣ�%dԪ\n", ssr->price);
	return 0;
}