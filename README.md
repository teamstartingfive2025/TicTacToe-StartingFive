# TicTacToe

## Project Overview
This is a simple **Tic Tac Toe game** written in **C++** using **Microsoft Visual Studio**.  

The implementation follows an **Object-Oriented Programming (OOP)** design with two main classes:
- **`Game` class**: Manages the overall flow of the game.
- **`Board` class**: Handles the field of play and board state.

### Gameplay Rules
- Two players take turns entering their moves.
- A player wins if they place **three consecutive `X` or `O`** in:
  - A row
  - A column
  - A diagonal
- If the board is full and no winner exists, the game ends in a **tie**.

---

## Installation
1. **Clone or download** the project files to your device.
2. Ensure you have a **C++ compiler** and **Visual Studio** installed.
3. Open the project folder in **Visual Studio**.
4. Compile and run the program.

---

## Usage Instructions
- The game displays the board with numbered spaces (1–9).
- On your turn, **enter the number** corresponding to the space where you want to place your piece.
- Invalid moves:
  - Entering a number outside 1–9.
  - Choosing an already occupied space.  
  These will prompt you to try again.
- The game ends when:
  - A player wins.
  - The board is full (tie).

---

## Gameplay Example
```
 1 │ 2 │ 3
───┼───┼───
 4 │ 5 │ 6
───┼───┼───
 7 │ 8 │ 9
```

## Running in Visual Studio
1. Open **Visual Studio**.
2. Select **File > Open > Project/Solution**.
3. Navigate to the folder containing the project and open the solution (`.sln`) file (or create a new project and add the `.cpp` files).
4. Make sure the project is set to use a **C++17 (or newer)** compiler.
5. Press **Ctrl + F5** or select **Debug > Start Without Debugging** to build and run the game.

## Credits
**Created by:** Brendan, John, Mike, Philip, and Sam