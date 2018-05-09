#include "Board.h"
#include <string>

			

Board::Board(void)
{
	cout << "Object is being created" << endl;
		Bchar = new char;
		size = 0;
}

Board::Board(int num)
{
	cout << "Object is being created" << endl;
	Bchar = new char[num*num];
	this->size = num;
	for (int i = 0; i < num*num; i++)
		Bchar[i] = '.';
}

Board::~Board()
{
	delete[] Bchar;
}
Board& Board::operator =(const Board& other)
{
	if (this == &other) return *this;
	if (this->size != other.size)
		{
			delete[] Bchar;
			Bchar = new char[other.size*other.size];
			size = other.size;
			
		}
		int num = this->size;
		for (int i = 0; i < num*num; i++)
			Bchar[i] = other.Bchar[i];
	
	return *this;
}
char & Board::operator[](opair index)
{
	{
		int num = this->size;
		if(index.x>=0&&index.x<num&&index.y >= 0 && index.y<num)
		{

			return Bchar[((index.x)*size) + index.y];
		}
		throw  IllegalCoordinateException(index.x, index.y);

	}
}

Board& Board::operator = (char a)
{
	if ((a == 'x') || (a == 'o') || (a == '.'))
	{
		int num = size;
		for (int i = 0; i < num*num; i++)
			Bchar[i] = a;

		return *this;
	}
	else throw illegalcharexception(a);
}
ostream & operator<<(ostream & os, const Board & c)
{

	for (int i = 0; i < c.size; i++)
	{
		string s="";
		for (int j = 0; j < c.size; j++)
		{
			s += c.Bchar[i*c.size + j];
		}
		os << s << endl;
	}

	return os;
}

