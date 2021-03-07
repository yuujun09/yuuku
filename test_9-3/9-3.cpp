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
	struct message a = { "杭州电子科技大学","自动化一班","Mr.张",6900 };
	struct message* ssr = &a;
	printf("学校；%s\n", ssr->name);
	printf("班级：%s\n", ssr->clas);
	printf("班助：%s\n", ssr->assistant);
	printf("学费：%d元\n", ssr->price);
	return 0;
}