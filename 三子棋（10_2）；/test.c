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
	//������������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//���壨ѭ����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		                                           ret = IsWin(board, ROW, COL);
		                                           if (ret != 'C')
													{
													 break;
													}
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
													ret = IsWin(board, ROW, COL);
													if (ret != 'C')
													{
													break;
													}

	}

								if (ret == '*')
								{
									printf("���Ӯ\n");
								}
								else if (ret == '#')
								{
									printf("����Ӯ\n");
								}
								else
								{ 
									printf("ƽ��\n");
								}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//���������
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("���˳�\n");
			break;
		default:
			printf("�������������!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}