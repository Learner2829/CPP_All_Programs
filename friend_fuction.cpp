#include<iostream>
using namespace std;

class salary;
class emp{
	int id;
	string name;
	int dep_number;
	public:
	set(){
		cout<<"Enter id :"<<endl;
		cin>>id;
		cout<<"Enter name :"<<endl;
		cin>>name;
		cout<<"dep_bonus :"<<endl;
		cin>>dep_number;
	}
	get(){
		cout<<"Id: "<<id <<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"dep_name :"<<dep_number<<endl;
	}
	friend int plus_salary(emp,salary);
};
class salary{
	int id ;
	float salary_min;
	public:
	set(){
		cout<<"Entre id"<<endl;
		cin>>id;
		cout<<"Enter salary"<<endl;
		cin>>salary_min;
	}
	get	()
	{
		cout<<"your id :"<<id<<endl;
		cout<<"your salary :"<<salary_min<<endl;
	}
	friend int plus_salary(emp ,salary);
	
};

int plus_salary(emp e1,salary s1)
{
	int new_salary;
	new_salary=e1.dep_number+s1.salary_min;
	return new_salary;
}


main()
{
	emp e1;
	salary s1;
	e1.set();
	e1.get();
	s1.set();
	s1.get();
	cout<<"Your salary+dep_bonus is :"<<plus_salary(e1,s1);
}
