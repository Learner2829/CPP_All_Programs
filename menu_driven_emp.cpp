#include<iostream>
using namespace std;
class emp{
	float salary;
	float gross_Salary;
	float net_salary;
	float reduction;
	float total;
	float hrf;
	float pf;
	float da;
	float pt1;
	float pt2;
	float it;
	
	public:
		get_salary();
		get_cal();
		display();
		
};

emp::get_salary(){
	cout<<"Enter your salary"<<endl;
	cin>>salary;
	cout<<"Enter your hrf"<<endl;
	cin>>hrf;
	cout<<"Enter your pf"<<endl;
	cin>>pf;
	cout<<"Enter your da"<<endl;
	cin>>da;
	cout<<"Enter your pt1"<<endl;
	cin>>pt1;
	cout<<"Enter your pt2"<<endl;
	cin>>pt2;
	cout<<"Enter your it"<<endl;
	cin>>it;
}
emp::get_cal()
{
	gross_Salary=salary+hrf+pf+da;
	reduction=pt1+pt2+it;
	net_salary=salary-pt1-pt2-it;
	total=gross_Salary-reduction;
	
}
emp::display()
{
	char get_char;
	start:
	cout<<"Enter one option for display"<<endl;
	cout<<"g(for gross_Salary)"<<endl;
	cout<<"n(for net salary)"<<endl;
	cout<<"r(for reduction of salary)"<<endl;
	cout<<"t(for total salary)"<<endl;
	cout<<"e(For exit)"<<endl;
	cin>>get_char;
	switch(get_char)
	{
		case 'g':
			cout<<"gross salary is :"<<gross_Salary<<endl;
			goto start;
		case 'n':
			cout<<"net salary is :"<<net_salary<<endl;
			goto start;
		case 'r':
			cout<<"reductio is :"<<reduction<<endl;
			goto start;	
		case 't':
			cout<<"total is :"<<total<<endl;
			goto start;
		case 'e':
			break;
		defult:
			cout<<"Enter velid input...";
	}
	
}

main()
{
	emp e1;
		e1.get_salary();
		e1.get_cal();
		e1.display();
}
