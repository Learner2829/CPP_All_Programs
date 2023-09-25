#include<iostream>
using namespace std;
class employ{
	//privite data member
	private:
		float salary=12000.12;
	//Protected data member
	protected:
		int id;
		string name;
	//Public data member and function
	public:
		set()
		{
			cout<<"Enter id \n";
			cin>>id;
			cout<<"Enter name \n";
			cin>>name;
		}
};
class student:public employ{
		string department;
		public:
		eset()
		{	cout<<"Enter id \n";
			cin>>id;
			cout<<"Enter name \n";
			cin>>name;
			cout<<"Enter department\n";
			cin>>department;
		}
		sow()
		{
			cout<<"id :"<<id<<endl;
			cout<<"name :"<<name<<endl;
			cout<<"Departmnet :"<<department<<endl;
		}
};

main()
{
	student s1;
	s1.eset();
	s1.sow();
}
