#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_BALLS_ROW 4
#define TOTAL_BALLS_COL 4

class BingoCard{
public:
	BingoCard();
	void InitCard();
	//void ShuffleCard();
	void PrintCard();
	int card[TOTAL_BALLS_ROW][TOTAL_BALLS_COL];
	int minColVal;
};