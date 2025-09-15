#pragma once
class Board {
private:
	char spaces[3][3];


public:
	void reset() {
		/*spaces = {
			{'\0','\0','\0'},
			{'\0','\0','\0'},
			{'\0','\0','\0'}
		};
		return;*/
	}

	bool updateSpace(int y, int x, char c) {
		// Verify space is within bounds. If not print appropriate error message and return false
		// Verify space is empty. If not print appropriate error message and return false
		// Change space as specified
		// Return true
	}

	bool checkWin(int y, int x) {
		//check if the given piece at the given location has resulted in a win; yes: return true, no: return false
		reset();
	}
};