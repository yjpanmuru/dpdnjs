//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <conio.h>
//#include <stdbool.h>
//#include "start.h"
//
//typedef struct player
//{
//	int posx;
//	int posy;
//	bool islive;
//}player;
//
//enum arrow { left = 75, right = 77, up = 72, down = 80 };
//
//typedef struct bullet
//{
//	int posx;
//	int posy;
//	bool islive;
//}bullet;
//
//typedef struct enemy
//{
//	int posx;
//	int posy;
//	bool islive;
//}enemy;
//
//player player1;
//bullet bullets[10];
//enemy enemy1;
//
//void printmap();
//void printplayer();
//void keyinput();
//bool iskeydown(int key);
//void attackinput();
//void printbullet();
//void createnemy();
//void printenemy();
//void oncollision();
//
//
//int main()
//{
//	showcursor(false);
//	clrscr();
//	printmap();
//	printplayer();
//	randomize();
//	while (1)
//	{
//		keyinput();
//		attackinput();
//		printbullet();
//		createnemy();
//		delay(100);
//	}
//}
//
//void printmap()
//{
//	for (int i = 0; i < 30; i++)
//	{
//		gotoxy(i, 0);
//		printf("-");
//		gotoxy(i, 20);
//		printf("-");
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		gotoxy(0, i);
//		printf("i");
//		gotoxy(30, i);
//		printf("i");
//	}
//}
//
//void printplayer()
//{
//	player1.posx = 15;
//	player1.posy = 17;
//	gotoxy(player1.posx, player1.posy);
//	printf("け");
//}
//
//void keyinput()
//{
//	if (kbhit()) 
//	{
//		int ch = getch();
//		{
//			if (ch == 0xe0 || ch == 0)
//			{
//				ch = getch();
//				switch (ch)
//				{
//				case 72:
//					gotoxy(player1.posx, player1.posy);
//					printf("  ");
//					player1.posy -= 1;
//					gotoxy(player1.posx, player1.posy);
//					printf("け");
//					break;
//				case 80:
//					gotoxy(player1.posx, player1.posy);
//					printf("  ");
//					player1.posy += 1;
//					gotoxy(player1.posx, player1.posy);
//					printf("け");
//					break;
//				case 75:
//					gotoxy(player1.posx, player1.posy);
//					printf("  ");
//					player1.posx -= 1;
//					gotoxy(player1.posx, player1.posy);
//					printf("け");
//					break;
//				case 77:
//					gotoxy(player1.posx, player1.posy);
//					printf("  ");
//					player1.posx += 1;
//					gotoxy(player1.posx, player1.posy);
//					printf("け");
//					break;
//				default:
//					break;
//
//				}
//			}
//		}
//	}
//}
//
//bool iskeydown(int key)
//{
//	return ((GetAsyncKeyState(key) & 0x8000) != 0);
//}
//
//
//void attackinput()
//{
//	if (iskeydown(VK_SPACE))
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (bullets[i].islive == false)
//			{
//				bullets[i].posx = player1.posx;
//				bullets[i].posy = player1.posy;
//				bullets[i].islive = true;
//				gotoxy(bullets[i].posx, bullets[i].posy - 1);
//				printf("*");
//				break;
//			}
//		}
//	}
//}
//
//void printbullet()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (bullets[i].islive)
//		{
//			gotoxy(bullets[i].posx, bullets[i].posy);
//			printf(" ");
//			bullets[i].posy--;
//			if (bullets[i].posy < 1)
//			{
//				bullets[i].islive = false;
//				return;
//			}
//			gotoxy(bullets[i].posx, bullets[i].posy);
//			printf("*");
//
//		}
//	}
//}
//
//void createnemy()
//{
//	if (enemy1.islive == false)
//	{
//		int rnd = random(30);
//		if (rnd != 0)
//		{
//			return;
//		}
//		enemy1.posx = 6;
//		enemy1.posy = 10;
//		enemy1.islive = true;
//		gotoxy(enemy1.posx, enemy1.posy);
//		printf("さ");
//	}
//}
//
//
//void printenemy()
//{
//	if (enemy1.islive == true)
//	{
//		gotoxy(enemy1.posx, enemy1.posy);
//		printf("  ");
//		enemy1.posx++;
//		if (enemy1.posx > 10)
//		{
//			enemy1.islive = false;
//			return;
//		}
//		gotoxy(enemy1.posx, enemy1.posy);
//		printf("さ");
//	}
//}
//
//void oncollision()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (bullets[i].islive)
//		{
//			if (bullets[i].posx == enemy1.posx && bullets[i].posy == enemy1.posy)
//			{
//				gotoxy(bullets[i].posx, bullets[i].posy);
//				printf(" ");
//				bullets[i].islive = false;
//				gotoxy(enemy1.posx, enemy1.posy);
//				printf("  ");
//				enemy1.islive = false;
//			}
//		}
//	}
//}