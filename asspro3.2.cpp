/*(2)
 An educational institution wishes to maintain a database of its employees.
 The database is divided into a number of classed whose hierarchical relationships are shown in fig-1.
 The figure also shows the minimum information required for each class.
 Specify all the classes and define function to create the database and retrieve individual information as and when required.
 Write parameterized constructor for each class in the hierarchy.

*/

#include<iostream>
#include<string>
using namespace std;

class staff{
	int code;
	string name;
	string joining;
	public:
		staff(int _code, const string& _name, const string& _joining): code(_code), name(_name), joining(_joining) {
		}
        
         virtual void GetInfo() const {
        cout << "Code: " << code << "\nName: " << name << "\nJoining Date: " << joining <<endl;
    }
	
};

class teacher:public staff{
	string subject;
	string publication;
	public:
		teacher(int _code, const string& _name, const string& _joining,
            const string& _subject, const string& _publication)
        : staff(_code, _name, _joining), subject(_subject), publication(_publication) {
		}

	    void GetInfo() const {
	        staff::GetInfo();
	        cout << "Subject: " << subject << "\nPublication: " << publication << endl;
	    }
};

class typist:public staff{
	string speed;
	public:
		 typist(int _code, const string& _name, const string& _joining, const string& _speed)
		 :staff(_code, _name, _joining), speed(_speed) {
		 }

	    void GetInfo() const {
	        staff::GetInfo();
	        cout << "Typing Speed: " << speed << endl;
	    }
};

class officer:public staff{
	string grade;
	public:
		 officer(int _code, const string& _name, const string& _joining, const string& _grade)
        : staff(_code, _name, _joining), grade(_grade) {}

	    void GetInfo() const {
	        staff::GetInfo();
	        cout << "Grade: " << grade << endl;
	    }
};

class regular_typist: public typist{
	float salary;
	public:
		regular_typist(int _code, const string& _name, const ::string& _joining,  const string& _speed, float _salary)
        : typist(_code, _name, _joining, _speed), salary(_salary) {}

	    void GetInfo() const {
	        typist::GetInfo();
	        cout << "Salary: " << salary <<endl;
	    }
};

class casual_typist: public typist{
	float daily_wages;
	public:
		 casual_typist(int _code, const string& _name, const string& _joining,
                 const string& _speed, float _dailywages)
        : typist(_code, _name, _joining, _speed), daily_wages(_dailywages) {}

    void GetInfo() const {
        typist::GetInfo();
        cout << "Daily Wages: " << daily_wages << endl;
    }
};

int main() {

    teacher t1(103, "Jannat", "2022-01-01", "oocp", "Published in XYZ Journal");
    regular_typist rt1(92, "Ashish", "2022-02-01", "60 WPM", 2500.00);

    // Display individual information
    t1.GetInfo();
    cout << "\n";
    rt1.GetInfo();

    return 0;
}

