#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<stdio.h>
void menu()
{
	printf("*****************************\n");
	printf("*****1. play   2. quit ******\n");
	printf("*****************************\n");
}
void game()
{
	char ret = 0;
	//数组存放棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋（循环）
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		                                           ret = IsWin(board, ROW, COL);
		                                           if (ret != 'C')
													{
													 break;
													}
		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
													ret = IsWin(board, ROW, COL);
													if (ret != 'C')
													{
													break;
													}

	}

								if (ret == '*')
								{
									printf("玩家赢\n");
								}
								else if (ret == '#')
								{
									printf("电脑赢\n");
								}
								else
								{ 
									printf("平局\n");
								}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//重置随机数
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出\n");
			break;
		default:
			printf("输入错误，请重试!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}