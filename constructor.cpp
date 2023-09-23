#include<iostream>
using namespace std;
class car{
	string brand;
	int car_number;
	
	public:
		car(string name,int num)
		{
			brand=name;
			car_number=num;
		}
		car()
		{
			brand="null";
			car_number=0;
		}
//		copy constructor
 		car(car &a)
 		{
 			brand=a.brand;
 			car_number=a.car_number;
		}
		
		get()
		{
			cout<<"Your car brand is :"<<brand<<endl;
			cout<<"Car number is :"<<car_number<<endl;
		}
		
};

main()
{
	car c1("bmw",1),c2,c3(c1),c4("audi",2),c5;
	c5=c4;
	
	c1.get();
	c2.get();
	c3.get();
	c5.get();
}
