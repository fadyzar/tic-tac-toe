#include "board.h"
#include <stdio.h>

using namespace std;

board::board() {
	int k1 = 0;
	int k2 = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 1 && i < 3) {
				myBoard[i][j] = 1;
				p1.setOnePawn(k1, j, i);
			}
			else
				if ((i + j) % 2 == 1 && i > 4) {
					myBoard[i][j] = 2;
					p2.setOnePawn(k2, j, i);
				}
				else
					myBoard[i][j] = 0;
		}
	}
}

void board::printBoard() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("%4d", myBoard[i][j]);		
		}
		printf("\n");
	}
}
