#include<iostream>
using namespace std;
//Create a class say coordinate class with variables x and y.
//Overload the == and != operators to perform required operations on the object of that class. 
//Overload the * so that it performs multiplication operation with object of coordinate class either in the form int * obj or obj * int.
//Also define the -- operator to decrement values when applied to an object. 
//Also write appropriate conversion function to convert coordinate object in to int.
class coodinate{
	int x;
	int y;
	public:
		set(int t_x,int t_y)
		{
			x=t_x;
			y=t_y;
		}
		show()
		{
			cout<<"X:"<<x<<endl;
			cout<<"Y:"<<y<<endl;
			cout<<"--------------"<<endl;
		}
		bool operator ==(coodinate c1)
		{
			if(this->x==c1.x && this->y==c1.y)
			{
				return 1;
			}
			else 
			{
				return 0;
			}
			
		}
			bool operator !=(coodinate c1)
		{
			if(this->x!=c1.x && this->y!=c1.y)
			{
				return 1;
			}
			else 
			{
				return 0;
			}
			
		}
		operator *(int num)
		{
			this->x=(this->x*num);
			this->y=(this->y*num);
		}
		operator --()
		{
			x=(this->x-1);
			y=(this->y-1);
		}
		friend convert_int(coodinate c1,int &t_x,int &t_y);
			
};
convert_int(coodinate c1,int &t_x,int &t_y)
{
	t_x=c1.x;
	t_y=c1.y;
}
main()
{
	coodinate c1,c2;
	c1.set(1,2);
	c2.set(1,3);
	c1.show();
	c2.show();
	if(c1==c2)
	cout<<"Same"<<endl;
	else
	cout<<"Note same"<<endl;
	if(c1!=c2)
	cout<<"note Same"<<endl;
	else
	cout<<"same"<<endl;
	c1*2;
	c1.show();
	--c1;
	c1.show();
	int x,y;
	convert_int(c1,x,y);
	cout<<"cod x:"<<x<<endl;
	cout<<"cod y:"<<y;

}
//	output
//X:1
//Y:2
//--------------
//X:1
//Y:3
//--------------
//Note same
//same
//X:2
//Y:4
//--------------
//X:1
//Y:3
//--------------
//cod x:1
//cod y:3
//----------
