#include<iostream>
using namespace std;
class data{
	int id;
	string name;
	public:
		set()
		{
			cout<<"Enter id:"<<endl;
			cin>>id;
			cout<<"Name:"<<endl;
			cin>>name;
		}
		friend ostream& operator>>(ostream& out,data& d1); 
};
ostream& operator>>(ostream& out,data& d1)
{
	out<<"Id:"<<d1.id<<endl;
	out<<"Name:"<<d1.name<<endl;
	return out;	
} 
main()
{
	data d1;
	d1.set();
	cout>>d1;
}
