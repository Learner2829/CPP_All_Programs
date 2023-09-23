#include<iostream>
using namespace std;
class student{
	int roll;
	string name;
	int marks;
	public:
		int set_fild(int a,string input_name,int input_marks){
			roll=a;
			name=input_name;
			marks=input_marks;
			return 0;
		}
		void sow(void){
				cout<<roll<<endl;
				cout<<name<<endl;
				cout<<marks<<endl;
		}
		void cal(void);
		char pass_fail(void);
};
 void student::cal(void){
	cout<< marks+100 <<endl;
}
char student::pass_fail(void){
	if(marks>=35){
		return 'P';
	}
	else
	{
		return 'F';
	}
}

void main()
{
	student stu1;
	stu1.set_fild(12,"Ashish",45);
	stu1.sow();
	stu1.cal();
	cout<<stu1.pass_fail();
}
