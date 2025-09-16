#include <iostream>
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
    printTitleHeader();
}