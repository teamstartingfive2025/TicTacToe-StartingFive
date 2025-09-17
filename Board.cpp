#include <iostream>
#include "Board.h"
using namespace std;

Board::Board() {
	reset();
}

void Board::reset() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			spaces[i][j] = ' ';
		}
	}
	return;
}

bool Board::updateSpace(int y, int x, char c) {
	// Verify space is within bounds. If not print appropriate error message and return false
	if (x > 3 || x < 0) {
		cout << "Position out of bounds\n";
		return false;
	}
	if (y > 3 || y < 0) {
		cout << "Position out of bounds\n";
		return false;
	}
	// Verify space is empty. If not print appropriate error message and return false
	if (spaces[y][x] != '\0') {
		cout << "Choose an empty position\n";
		return false;
	}

	// Change space as specified
	spaces[y][x] = c;
	return true;
}

bool Board::checkWin(int y, int x) {
	//check if the given piece at the given location has resulted in a win; yes: return true, no: return false
	
	//check horizontal and vertical
	if (/*horizontal*/
		(spaces[y][0] == spaces[y][1] && spaces[y][1] == spaces[y][2]) ||
		/*vertical*/
		(spaces[0][x] == spaces[1][x] && spaces[1][x] == spaces[2][x])
		) {
		return true;
	}
	//check diagonal if given (0,0), (0,2), (2,0), (2,2), (1,1)
	if (((x == 0 || x == 2) && (y == 0 || y == 2)) || (x == 1 && y == 1)) {
		if (
			//top-left to bottom-right
			(spaces[0][0] == spaces[1][1] && spaces[1][1] == spaces[2][2]) ||
			//top-right to bottom-left
			(spaces[0][2] == spaces[1][1] && spaces[1][1] == spaces[2][0])) {
			return true;
		}
	}
	return false;
}

void Board::printBoard() {
	for(int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout<<" ";
			cout<<spaces[i][j];
			if (j < 2) cout << " ?";
		}
		if (i < 2) cout << "\n???????????\n";
	}
}
