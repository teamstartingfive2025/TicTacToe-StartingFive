#pragma once
#ifndef BOARD_H

#define BOARD_H

class Board {
private:

	char spaces[3][3];

public:

	Board();

	void reset();

	bool updateSpace(int y, int x, char c);

	bool checkWin(int y, int x);
};
#endif