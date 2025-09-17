#include "Board.h"
#include "Game.h"
#include <iostream>
#include "Input.h"
using namespace std;


void Game::Start() {
    board.Reset();
    int pieceSelected = 0;
    const char pieces[2] = { 'X','O' };

    while (true) {
        board.printBoard();

        cout << "\n\n" << pieces[pieceSelected] << "'s turn, enter a space\n";
        int sel = inputInt(1, 9);

        while (!board.updateSpace(sel, pieces[pieceSelected])) {
            sel = inputInt(1, 9);
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
