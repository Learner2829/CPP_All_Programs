#include<iostream>
using namespace std;
class us{
	int id;
	string name;
	public:
		get(){
			cout<<"Enter id"<<endl;
			cin>>id;
			cout<<"Enter name"<<endl;
			cin>>name;
		}
		display()
		{
			cout<<"Name:"<<name<<endl<<"id:"<<id<<endl;
		}
};
main()
{
	us u[3];
	u[0].get();
	u[0].display();
	u[1].get();
	u[1].display();	
	u[2].get();
	u[2].display();
	
	cout<<"---------------------------------------"<<endl;
	
	u[0].display();
	u[1].display();
	u[2].display();
}
