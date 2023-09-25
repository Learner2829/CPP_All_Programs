#include <iostream>
using namespace std;

class Department_one {
protected:
    int Department_id;
    string Department_name;

public:
    void set() {
        cout << "Enter department1 id\n";
        cin >> Department_id;
        cout << "Enter Department1 name\n";
        cin >> Department_name;
    }

    void get() {
        cout << "Department1 id: " << Department_id << endl;
        cout << "Department1 name: " << Department_name << endl;
    }
};

class Department_two {
protected:
    int Department_id;
    string Department_name;

public:
    void set() {
        cout << "Enter department2 id\n";
        cin >> Department_id;
        cout << "Enter Department2 name\n";
        cin >> Department_name;
    }

    void get() {
        cout << "Department2 id: " << Department_id << endl;
        cout << "Department2 name: " << Department_name << endl;
    }
};

class uni : public Department_one, public Department_two {
    int input;

public:
   void result() {
    cout << "This is university class" << endl;
    cout << "Enter '1' to show department1 data" << endl;
    cout << "Enter '2' to show department2 data" << endl;
    cin >> input;
    if (input == 1) {
    	Department_one::set();
        Department_one::get();
        cout << endl; // Add this line to separate output
    } else if (input == 2) {
    	Department_one::set();
        Department_two::get();
        cout << endl; // Add this line to separate output
    } else {
        cout << "Enter valid input" << endl;
    }
}
};

int main() {
//    Department_one d1;
//    Department_two d2;
    uni u1;

//    d1.set();
//    d2.set();
u1.result();

    return 0;
}

