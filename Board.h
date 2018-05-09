#pragma once
#include <iostream>
#include "opair.cpp"
#include "IllegalCoordinateException.cpp"
#include "illegalcharexception.cpp"
using namespace std;
class Board
{
		char *Bchar;
		int size=0;

public:
	Board();
	
	Board(int num);

	~Board();
	Board& operator = (char a);
	Board& operator =(const Board& other);
	friend ostream& operator<< (ostream& os, const Board& c);
	friend istream& operator>> (istream& is, Board& c);
	char& operator [](opair index);

	
};
