#include<iostream>
using namespace std;
class person{
	protected:
	int id;
	string name;
	
	public:
	virtual  set(){
		cout<<"Enter id\n";
		cin>>id;			
		cout<<"Enter a name\n";
		cin>>name;
	}
	virtual  get()
		{
			cout<<"ID:"<<id<<endl;;
			cout<<"Name:"<<name<<endl;;
		}
};
class student:public person{
	protected:
	int roll;
	public:
		set()
		{
			person::set();
			cout<<"Enter roll"<<endl;
			cin>>roll;
			
		}
		get()
		{
				person::get();
			cout<<"Roll:"<<roll<<endl;;
		
		}
};
class facalty:public person{
	protected:
	int salary;
	public:
		set(){
				person::set();
			cout<<"Enter salary"<<endl;
			cin>>salary;
		
		}
		get()
		{
				person::get();
				
			cout<<"Salary:"<<salary<<endl;
		
		}
};

main()
{
	int size;
	char input;
	person* p1[100];
	
	cout<<"Enter number of user"<<endl;
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter person type student('s') faclaty('f')"<<endl;
		cin>>input;
		switch(input)
		{
			case 's':
				p1[i]=new student();
				p1[i]->set();
				break;
			case 'f':
				p1[i]=new facalty();
				p1[i]->set();
				break;
			default:
				cout<<"Invalid input\n";
				i--;
				break;
		}
		
	}
	
		for(int i=0;i<size;i++)
	{
		p1[i]->get();
	}
	
	
	
	
}
