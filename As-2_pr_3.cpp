#include <iostream>
using namespace std;

class Deductions; 

class Salary {
private:
    float MED;
    float HRA;
    float BAS;
    float DA;
    float Total_salary;

public:
 
    Salary(float med, float hra, float bas, float da) : MED(med), HRA(hra), BAS(bas), DA(da) {
        Total_salary = MED + HRA + BAS + DA;
    }

   
    friend ostream& operator<<(ostream& out, const Salary& salary);

  
    friend float operator-(const Salary& salary, const Deductions& deductions);
};

class Deductions {
private:
    float IT;
    float PF;
    float Total_deductions;

public:

    Deductions(float it, float pf) : IT(it), PF(pf) {
        Total_deductions = IT + PF;
    }

   
    friend ostream& operator<<(ostream& out, const Deductions& deductions);

 
    friend float operator-(const Salary& salary, const Deductions& deductions);
};


ostream& operator<<(ostream& out, const Salary& salary) {
    out << "Medical Allowance: " << salary.MED << endl;
    out << "House Rent Allowance: " << salary.HRA << endl;
    out << "Basic Salary: " << salary.BAS << endl;
    out << "Dearness Allowance: " << salary.DA << endl;
    out << "Total Salary: " << salary.Total_salary << endl;
    return out;
}


ostream& operator<<(ostream& out, const Deductions& deductions) {
    out << "Income Tax: " << deductions.IT << endl;
    out << "Provident Fund: " << deductions.PF << endl;
    out << "Total Deductions: " << deductions.Total_deductions << endl;
    return out;
}


float operator-(const Salary& salary, const Deductions& deductions) {
    return salary.Total_salary - deductions.Total_deductions;
}

int main() {
   
    Salary salary(1000, 2000, 3000, 4000);
    Deductions deductions(500, 600);

  
    cout << "Initial Salary:" << endl;
    cout << salary << endl;

    cout << "\nInitial Deductions:" << endl;
    cout << deductions << endl;


    float netSalary = salary - deductions;
    cout << "\nNet Salary: " << netSalary << endl;

    return 0;
}

