#include <iostream>
#include <string>
using namespace std;

class illegalcharexception
{
	char ch;
public:

	illegalcharexception(char a)
	{
		ch=a;
	}
	 char thechar()const
	{
		 return ch;
	}


};
