#include<iostream>
using namespace std;
main()
{
//(7) Define a class Car. Add data members as Make, Color, Size, and Cost. 
//Write member functions for reading values and printing values of car.
//Define one more class as CarCollection.
//CarCollection contains array of cars. 
//CarCollection class should contain member functions as Add,delete, modify and replace. 
//CarCollection is to be defined as friend of Car class. 
//Write C++ programs to test your classes

class Car{
	protected:
	int id;
	string  color;
	float size;
	float cost;
	public:
		make()
		{
			cout<<"Enter ID :"<<endl;
			cin>>id;
			cout<<"Enter Color :"<<endl;
			cin>>color;
			cout<<"Enter size of Car :"<<endl;
			cin>>size;
			cout<<"Enter cost for Car :"<<endl;
			cin>>cost;
		}
		data()
		{	
			cout<<"Car id is :"<<id<<endl;
			cout<<"Car Color is :"<< color<<endl;
			cout<<"Car size is :"<<size<<endl;
			cout<<"Car cost is :"<<cost<<endl;
		}
};
class carcollection{
	int size;
	int id;
	carcollection(int in_size){
			size=in_size;
			car c1[in_size];	
	}
	add_data(int count)
	{
		c1[count].make();
	}
	del()
	{
		cout<<"Enter id number which want to delete"<<endl;
		cin>>id;
		for(int i=0;i<=size;i++)
		{
			if(c1[i]::id>=id)
			{
				c1[i]::id=id+1;
			}
		}
	}
	
};

main()
{
	
}



}
