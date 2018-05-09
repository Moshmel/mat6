#include "Board.h"
#include <iostream>
#include "main.h"
using namespace std;

int main() {
	Board board1{ 4 };  // Initializes a 4x4 board
	cout << board1 << endl;   /* Shows an empty board:
							  ....
							  ....
							  ....
							  ....
							  */
	cout << board1[{1, 2}] << endl; // .
	board1[{1, 1}] = 'x'; 
	board1[{1, 2}] = 'o';
	char c = board1[{1, 2}]; cout << c << endl; // o
	cout << board1 << endl;  /* shows the following board:
							 ....
							 .xo.
							 ....
							 ....
							 */

	try {
		board1[{3, 4}] = 'O';   // This should raise an exception
	}
	catch (const IllegalCoordinateException& ex) {
		cout << "Illegal coordinate: " << ex.theCoordinate() << endl;  // prints "Illegal coordinate: 3,4"
	}

	board1 = '.';     // fill the entire board with "."
	cout << board1 << endl;  /* shows an empty board, as above */
	try {
		board1 = 'a';        // this should raise an exception
	}
	catch (const illegalcharexception& ex) {
		cout << "illegal char: " << ex.thechar() << endl;  // "illegal char: a"
	}

	try {
		board1[{0, 1}] = 'x';  // this should raise an exception
	}
	catch (const illegalcharexception& ex) {
		cout << "illegal char: " << ex.thechar() << endl;  // "illegal char: x"
	}

	Board board2 = board1;
	board2[{0, 0}] = 'X';
	cout << board1 << endl;  /* Shows an empty board, as above */
	cout << board2 << endl;  /* Shows a board with an X at top-left */

	board1 = board2;
	board1[{3, 3}] = 'O';
	cout << board2 << endl;  /* Shows a board with an X at top-left */
	cout << board1 << endl;  /* Shows a board with an X at top-left and O at bottom-right */

	cout << "Good bye!" << endl;

	return 0;
}