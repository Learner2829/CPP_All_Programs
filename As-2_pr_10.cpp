#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(const string& name, int age) : name(name), age(age) {}

    bool operator==(const Person& other) const {
    // Check if the names and ages are equal
    return (name == other.name) && (age == other.age);
}


    // Overload < for less than comparison based on age
    bool operator<(const Person& other) const {
        return age < other.age;
    }

    // Display person information
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1("Alice", 25);
    Person person2("Bob", 30);
    Person person3("Alice", 25);

    // Equality comparison
    cout << "Comparison using ==:" << endl;
    cout << "person1 == person2: " << boolalpha << (person1 == person2) << endl;
    cout << "person1 == person3: " << boolalpha << (person1 == person3) << endl;

    // Less than comparison
    cout << "\nComparison using <:" << endl;
    cout << "person1 < person2: " << boolalpha << (person1 < person2) << endl;
    cout << "person2 < person1: " << boolalpha << (person2 < person1) << endl;

    return 0;
}
//OUTPUT
//Comparison using ==:
//person1 == person2: false
//person1 == person3: true
//
//Comparison using <:
//person1 < person2: true
//person2 < person1: false
