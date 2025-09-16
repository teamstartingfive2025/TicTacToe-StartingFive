#include <iostream>
#include <tuple>
#include <cstdlib>
#include "Input.h"
using namespace std;

void printTitleHeader() {
    cout << R"(  _______ _   _______      _______         )" << endl;
    cout << R"( |__   __(_) |__   __|    |__   __|        )" << endl;
    cout << R"(    | |   _  ___| | __ _  ___| | ___   ___ )" << endl;
    cout << R"(    | |  | |/ __| |/ _` |/ __| |/ _ \ / _ \)" << endl;
    cout << R"(    | |  | | (__| | (_| | (__| | (_) |  __/)" << endl;
    cout << R"(    |_|  |_|\___|_|\__,_|\___|_|\___/ \___|)" << endl;
    cout << endl;
    cout << "Created by: Brendan, John, Mike, Philip, and Sam" << endl;
    cout << endl;
}

void printInstructions() {
    string done;
    cout << "\nInstructions: ...\n";

    cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

int main()
{
    //Game game();

    enum menuOptionValues {
        LABEL,
        ACTION,
    };

    // Menu Options [LABEL, ACTION (Void Function Pointer)]
    tuple<string, void(*)()> menuOptions[] = {
        //{"Start Game", game.Start()},
        {"Instructions", printInstructions},
        {"Exit Game", [](){ exit(0); }},
    };

    int numberOfMenuOptions = sizeof(menuOptions) / sizeof(menuOptions[0]);

    while(true)
    {
        printTitleHeader();

        // Print numbered menu options
        for (int i = 0; i < numberOfMenuOptions; ++i) {
            cout << i + 1 << ". " << get<LABEL>(menuOptions[i]) << endl;
        }
        cout << endl;

        // Call menuOption's ACTION
        get<ACTION>(menuOptions[inputInt(1, numberOfMenuOptions) - 1])();

        system("cls");
    }
}