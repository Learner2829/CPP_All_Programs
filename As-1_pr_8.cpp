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
class All_employee;
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
		friend All_employee getsubordinates(Employee e1,All_employee s1);
	
	};
	
		
	
	
	class All_employee{
		string subordinates;
		string manager;
		public:
		set(string input_manager,string input_subordinates){
			subordinates=input_manager;
			manager=input_manager;
		}
		get()
		{
			cout<<"Subordinates:"<<subordinates<<endl;
			cout<<"Manager:"<<manager<<endl;
			cout<<"----------------------------------"<<endl;
			}	
	};
	 All_employee getsubordinates(Employee e1,All_employee s1)
	{
			string temp_manager;
			string temp_subordinates;
			temp_manager=e1.manager;
			temp_subordinates=e1.subordinates;
			
			s1.set(temp_manager,temp_subordinates);
			return s1;
	}

main()
{
	Employee l1;
	All_employee z1;
	
	l1.set_data();
	z1=getsubordinates(l1,z1);
	z1.get();
	
}
