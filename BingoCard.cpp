#include "BingoCard.h"

BingoCard::BingoCard(){
	
	srand(time(NULL));

}

void BingoCard::InitCard(){
	for(int i = 0; i <= TOTAL_BALLS_ROW; i++){

		if(i > 0) minColVal = minColVal + 15;
		
		for(int j = 0; j <= TOTAL_BALLS_COL; j++){
			
			card[i][j] = minColVal;
		
		}
	
	}

}

void BingoCard::PrintCard(){
	for(int i = 0; i <= 4; i++){
		for(int j = 0; j <= 4; j++){
			printf("card[%d][%d] = %d\n", i, j, card[i][j]);
		}
	}
}