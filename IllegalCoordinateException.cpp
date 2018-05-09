#include <iostream>
#include <string>
using namespace std;

class IllegalCoordinateException
{
	int x;
	int y;
public:

	IllegalCoordinateException(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	string theCoordinate()const
	{
		string s = to_string(x);
		s += ',';
		s += to_string(y);
		return s;
	}


};
