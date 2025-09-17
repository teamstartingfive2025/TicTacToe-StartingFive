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

        if (board.checkWin(sel)) {
            board.printBoard();
            cout << "\n\n" << pieces[pieceSelected] << " wins!\n";
            hang();
            break;
        }

        if (board.IsFull()) { 
            board.printBoard();
            cout << "\n\n" << "It's a draw!\n";
            hang();
            break;
        }

        // Alternate turn
        pieceSelected = (pieceSelected + 1) % 2;
    }
}
