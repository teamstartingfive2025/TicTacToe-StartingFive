#include <iostream>
#include "Board.h"
using namespace std;

Board::Board() {}

void Board::Reset() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			spaces[i][j] = ' ';
		}
	}
	return;
}

bool Board::updateSpace(int p, char c) {
	//convert sequential position to coordinates
	int y = (p - 1) / 3;

	int x = (p - 1) % 3;

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
	if (spaces[y][x] == 'X' || spaces[y][x] == 'O') {
		cout << "\nChoose an empty position\n";
		return false;
	}

	// Change space as specified
	spaces[y][x] = c;
	return true;
}

bool Board::checkWin(int p) {
	if (p < 1 || p > 9) return false;

	int y = (p - 1) / 3;
	int x = (p - 1) % 3;

	char current = spaces[y][x];
	if (current == ' ') return false;

	// Check row
	if (spaces[y][0] == current && spaces[y][1] == current && spaces[y][2] == current)
		return true;

	// Check column
	if (spaces[0][x] == current && spaces[1][x] == current && spaces[2][x] == current)
		return true;

	// Check diagonals
	if ((spaces[0][0] == current && spaces[1][1] == current && spaces[2][2] == current) ||
		(spaces[0][2] == current && spaces[1][1] == current && spaces[2][0] == current))
		return true;

	return false;
}

void Board::printBoard() {
	system("cls");

	cout << endl;
	for(int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			if(spaces[i][j] == 'X' || spaces[i][j] == 'O')
				cout << " " << spaces[i][j] << " ";
			else
				cout << " " << i*3 + j+1 << " ";
			
			if (j < 2) cout << "|";
		}
		if (i < 2) cout << "\n---|---|---\n";
	}
}

bool Board::IsFull() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			if (spaces[i][j] != 'X' && spaces[i][j] != 'O')
				return false;
		}
	}

	return true;
}
