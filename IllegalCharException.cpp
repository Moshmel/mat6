#include <iostream>
#include <string>
using namespace std;

class IllegalCharException
{
	char ch;
public:

	IllegalCharException(char a)
	{
		ch=a;
	}
	 char theChar()const
	{
		 return ch;
	}


};
