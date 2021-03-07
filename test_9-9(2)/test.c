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
	//1.生成一个随机数
	int ret = 0;
	int guess = 0;//接收猜的数字
//用时间戳设置随机数的生成起点，见42行
	ret = rand() % 100 + 1;//生成1到100间的随机数
	while (1)
	{
	   scanf("%d", &guess);
	   if (ret < guess)
	   {
		   printf("猜大了\n");
	   }
	    else if (ret > guess)
	   {
		   printf("猜小了\n");
	    }
	   else
	   {
		   printf("恭喜你猜对了！\n");
		   break;
	   }
    }
}
int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));//生成数起点，调用rand前必须使用
	                               //不能加入循环，否者随机数会被不断重置，除非一次猜中
	                               //NULL意为空指针，不产生实际效果
	do
	{
		menu();
		printf("输入“1”进入游戏，输入“0”退出游戏\n请选择:>");
	scanf("%d", &choice);
	switch (choice)
	  {
	case 1:
		game();//猜数字游戏
		break;
	case 0:
		printf("退出游戏");
		break;
	default:
		printf("选择错误");
		break;
	   }

	} while (choice);
	return 0;
}