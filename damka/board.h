#pragma once
#include "player.h"
class board {
private:
	int myBoard[8][8];
	player p1, p2;
public:
	board();
	void printBoard();

};
