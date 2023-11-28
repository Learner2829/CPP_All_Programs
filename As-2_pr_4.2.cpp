#include<iostream>
using namespace std;
//(4) Define a class coord, which has x and y coordinates as its data members .
//Overload the -- operator for the coord class.
//Create both its prefix and postfixforms.
//Overload the + operator for the coord class so that it is both a binary operator and unary operator.
//When used as unary operator, have the + make any negative coordinate value positive

class coord{
	int x;
	int y;
	public:
		coord(int t_x,int t_y)
		{
			this->x=t_x;
			this->y=t_y;
		}
		coord operator +()
		{
			
			x++;
			y++;
			return *this;
		}
};
main()
{
	
}
