#include<iostream>
#include<string>
using namespace std;

class Education {
public:
    string general_qualification;
    string professional_qualification;

    Education(const string& genqual, const string& profqual)
        : general_qualification(genqual), professional_qualification(profqual) {}
};


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

class teacher:public staff, public Education{
	string subject;
	string publication;
	public:
		teacher(int _code, const string& _name, const string& _joining,
            const string& _subject, const string& _publication, const string& genqual, const string& profqual)
        : staff(_code, _name, _joining),  Education(genqual, profqual), subject(_subject), publication(_publication) {
		}

	    void GetInfo() const {
        staff::GetInfo();
        cout << "Subject: " << subject << "\nPublication: " << publication << "\nHighest Qualification: " 
		     << general_qualification  << "\nProfessional Qualification: " << professional_qualification << endl;
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

class officer:public staff, public Education{
	string grade;
	public:
		 officer(int _code, const string& _name, const string& _joining,
            const string& _grade, const string& genqual, const string& profqual)
        : staff(_code, _name, _joining), Education(genqual, profqual), grade(_grade) {}

	    void GetInfo() const {
        	staff::GetInfo();
        	cout << "Grade: " << grade << "\nHighest Qualification: " << general_qualification
                  << "\nProfessional Qualification: " << professional_qualification << endl;
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

	teacher t1(103, "Jannat", "2022-01-01", "oocp", "Published in XYZ Journal", "PhD", "Certified Educator");
    officer o1(111, "Jane Foster", "2022-02-01", "Grade A", "Masters", "Certified Professional");

    // Display individual information
    t1.GetInfo();
    cout << "\n";
    o1.GetInfo();

    return 0;
}
