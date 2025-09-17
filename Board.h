#pragma once
#ifndef BOARD_H

#define BOARD_H

class Board {
private:

	char spaces[3][3];

public:

	Board();

	void Reset();

	bool updateSpace(int p, char c);

	bool checkWin(int p);

	void printBoard();

	bool IsFull();
};
#endif