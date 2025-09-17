#include "Board.h"
#include "Game.h"
#include <iostream>
using namespace std;


void Game::Start() {
    board.Reset();
    int pieceSelected = 0;
    const char pieces[2] = { 'X','O' };

    while (true) {
        board.printBoard();

        bool moved = false;
        while (!moved) {
            cout << pieces[pieceSelected] << "'s turn, enter a space: ";
            int sel;
            if (!(cin >> sel)) {
                cin.clear();
                cin.ignore(1000000000000, '\n');
                cout << "Please enter a number between 1 and 9.\n";
                continue;
            }

            if (!board.updateSpace(sel, pieces[pieceSelected])) {
                cout << "Invalid move! Pick an unoccupied number from 1 to 9.\n";
            }
            else {
                moved = true;
            }
        }
        char w = board.checkWin();
        if (w == 'X' || w == 'O') {
            board.printBoard();
            cout << w << " wins!\n";
            break;
        }
        if (board.IsFull()) { //Implement is full
            board.printBoard();
            cout << "It's a draw!\n";
            break;
        }

        // Alternate turn
        pieceSelected = 1 - pieceSelected;
    }
}
