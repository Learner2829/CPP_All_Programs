/*(1) Define a class Employees. Also define classes of MaleEmp and FemaleEmp inheriting from that.
 Define classes Officers, Clercks and peons again inheriting from Employee class.
 Define an array which contains 10 different types of employees.
 Define a function ReadDetails() in all above classes.
 All array elements should be able to be accessed in the same routine irrespective of their type.
*/

#include <iostream>
#include <string>

class Employees {
public:
    std::string name;
    int age;

    virtual void ReadDetails() {
        std::cout << "Enter employee name: ";
        std::cin >> name;
        std::cout << "Enter employee age: ";
        std::cin >> age;
    }
    
     virtual void DisplayDetails() const {
        std::cout << "Employee: " << name << ", Age: " << age << std::endl;
    }
};

class MaleEmp : public Employees {
public:
    void ReadDetails() override {
        Employees::ReadDetails();
        // Add additional details for Male Employee if needed
    }
};

class FemaleEmp : public Employees {
public:
    void ReadDetails() override {
        Employees::ReadDetails();
        // Add additional details for Female Employee if needed
    }
};

class Officers : public Employees {
public:
    void ReadDetails() override {
        Employees::ReadDetails();
        // Add additional details for Officers if needed
    }
};

class Clerks : public Employees {
public:
    void ReadDetails() override {
        Employees::ReadDetails();
        // Add additional details for Clerks if needed
    }
};

class Peons : public Employees {
public:
    void ReadDetails() override {
        Employees::ReadDetails();
        // Add additional details for Peons if needed
    }
};

int main() {
    Employees* employeeArray[10]; // Array of employee pointers

    // Fill the array with different types of employees
    employeeArray[0] = new MaleEmp();
    employeeArray[1] = new FemaleEmp();
    employeeArray[2] = new Officers();
    employeeArray[3] = new Clerks();
    employeeArray[4] = new Peons();
    // Add more employees to the array as needed...

    // Read details for all employees using the common function
    for (int i = 0; i < 5; i++) {
        employeeArray[i]->ReadDetails();
    }
    
    // Display details for all employees
    for (int i = 0; i < 5; i++) {
        employeeArray[i]->DisplayDetails();
    }

    // Delete the dynamically allocated objects to prevent memory leaks
    for (int i = 0; i < 5; i++) {
        delete employeeArray[i];
    }

    return 0;
}

