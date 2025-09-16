#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

bool TryParseStoi(string input, int &output) {
	try {
		output = stoi(input);
		return true;
	}
	catch(...) {
		return false;
	}
}

int inputInt(int lowerBound = INT_MIN, int upperBound = INT_MAX) {
	string input;
	int parsedInput;

	while(true) {
		cout << "Selection: ";
		cin >> input;

		if (!TryParseStoi(input, parsedInput))
			cout << "\nSelection is not a valid integer!\n";
		else if (parsedInput < lowerBound)
			cout << "\nSelection is below lower bound!\n";
		else if (parsedInput > upperBound)
			cout << "\nSelection is above upper bound!\n";
		else
			return parsedInput;
	}
}
