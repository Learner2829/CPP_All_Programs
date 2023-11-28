/*(2) Consider a class student from which the classes test and sports are derived. The class student has
 the name and rollno of the student.
 The class test has the marks of the internal test and the sports class has the marks of the sports test.
 The class student contains a virtual function display() which  are implemented in the classes test and sports.
 Write a program which will take relative information and display it using pointer of the base class.
polymorphism assignment
*/
#include<iostream>
#include<string>
using namespace std;

class student{
	string name;
	int rollno;
	public:
		student(const string& _name, int _rollno) : name(_name), rollno(_rollno) {}
	
	virtual void display() const {
        cout << "Name: " << name << "\nRoll No: " << rollno << endl;
    }
};

class test:public student{
	int testmarks;
	public:
		test(const string& _name, int _rollno, int _testmarks)
        : student(_name, _rollno), testmarks(_testmarks) {}
        
        void display() const {
        	student::display();
        	cout << "Test Marks: " << testmarks << endl;
    }
};

class sports:public student{
	int sportsmarks;
	public:
		sports(const string& _name, int _rollno, int _sportsmarks)
        : student(_name, _rollno), sportsmarks(_sportsmarks) {}
	
	void display() const {
        student::display();
        cout << "Sports Marks: " << sportsmarks << endl;
    }
};

int main(){
	student* stuptr;
	
	test t1("jannat", 103, 89);
	sports s1("ashish", 92, 88);
	
	 // Use pointers to the base class to display information
    stuptr = &t1;
    stuptr->display();

 	cout<<endl;
 	
    stuptr = &s1;
    stuptr->display();
    
    return 0;

}
