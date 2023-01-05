#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(int);

int main()
{
	srand((unsigned)time(NULL));

	int comHand = rand() % 3; // 0, 1, 2
	int playerHand;

	for (;;)
	{
		printf("choose number between 0~2 : ");
		scanf("%d", &playerHand);
		if (playerHand < 3 && playerHand >= 0)
			break; 
	} 

	printf("PC : ");
	Print(comHand);
	printf("\n");

	printf("Player : ");
	Print(playerHand);
	printf("\n");

	int result = playerHand - comHand;

	if (result == 0)
	{
		printf("tied.\n");
	}
	else if (result == 1 || result == -2)
	{
		printf("win.\n");
	}
	else 
	{
		printf("lost.");
	}


	return 0;
}

void Print(int hand)
{
	switch (hand)
	{
	case 0:
		printf("scissors");
		break;
	case 1: 
		printf("rock");
		break;
	case 2:
		printf("paper");
		break;
	}
}