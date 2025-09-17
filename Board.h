#pragma once
#ifndef BOARD_H

#define BOARD_H

class Board {
private:

	char spaces[3][3];

public:

	Board();

	void reset();

	bool updateSpace(int p, char c);

	bool checkWin(int p);

	void printBoard();
};
#endif