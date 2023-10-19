#include<iostream>
using namespace std;
class employy{
	static int id;
	string name;
	public:
		set()
		{
			cout<<"Enter a name"<<endl;
			cin>>name;
			id++;
		}
		get()
		{
			cout<<"Your id is :"<<id<<endl;
			cout<<"Your name is :"<<name<<endl;
		}
		
};
int employy::id=0;
main()
{ 
employy e1,e2;
e1.set();
e1.get();
e2.set();
e2.get();
}
