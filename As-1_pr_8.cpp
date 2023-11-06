#include<iostream>
using namespace std;
//(8) Use Employee and EmpCollection classes. 
//Employee class contains details about employee 
//and EmpCollection contains collection of employees
//in form of an array. 
//Provide GetSubordinates friend function which returns an object of EmpCollection 
//class which contains details of
//subordinates of a manager. 
//The employee object describing manager is to be passed as a parameter.
class Employee{
		int id;
		string name;
		string subordinates;
		string manager;
		
		public:
		set_data(){
			cout<<"ID:"<<endl;
			cin>>id;
			cout<<"Name:"<<endl;
			cin>>name;
			cout<<"Subordinates:"<<endl;
			cin>>subordinates;
			cout<<"Manager:"<<endl;
			cin>>manager;
		}	
	
		get_data(){
			cout<<"ID : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Subordinates : "<<subordinates<<endl;
			cout<<"Manager : "<<manager<<endl;
			
		}
		friend void pass(Employee e1[3]){
			
			for(int i=0;i<=3;i++)
			{
				e1[i].set_data();
			}
			for(int i=0;i<=3;i++)
			{
				e1[i].get_data();
			}
			
			
		}
	};
	
		
	
	
	class All_employee{
		
	};

main()
{
	Employee e1;
	
	e1.set_data();
	e1.get_data();
	
	
}
