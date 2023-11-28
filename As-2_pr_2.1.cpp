#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int feet, int inches) : feet(feet), inches(inches) {}

    // Convert Distance class to total inches (int)
    operator int() const {
        return feet * 12 + inches;
    }

    // Convert int to Distance class
    static Distance intToDistance(int totalInches) {
        int feet = totalInches / 12;
        int remainingInches = totalInches % 12;
        return Distance(feet, remainingInches);
    }

    // Display the distance
    void display() const {
        cout << "Feet: " << feet << ", Inches: " << inches << endl;
    }
};

class Length {
private:
    int meters;
    int centimeters;

public:
    // Constructor
    Length(int meters, int centimeters) : meters(meters), centimeters(centimeters) {}

    // Convert Distance class to Length class
    static Length distanceToLength(const Distance& distance) {
        // 1 foot = 0.3048 meters
        // 1 inch = 0.0254 meters
        double totalMeters = distance.operator int() * 0.0254;
        int meters = static_cast<int>(totalMeters);
        int centimeters = static_cast<int>((totalMeters - meters) * 100);
        return Length(meters, centimeters);
    }

    // Display the length
    void display() const {
        cout << "Meters: " << meters << ", Centimeters: " << centimeters << endl;
    }
};

int main() {
    // Test the Distance class
    Distance d1(3, 6);
//    Distance d2 = 48;  // Using conversion constructor

    cout << "Distance 1:" << endl;
    d1.display();

//    cout << "\nDistance 2:" << endl;
//    d2.display();

    // Test conversion from Distance to int
    int totalInches = static_cast<int>(d1);
    cout << "\nTotal inches of Distance 1: " << totalInches << endl;

    // Test conversion from int to Distance
    Distance d3 = Distance::intToDistance(72);
    cout << "\nDistance 3 (converted from 72 inches):" << endl;
    d3.display();

    // Test conversion from Distance to Length
    Length length = Length::distanceToLength(d1);
    cout << "\nLength (converted from Distance 1):" << endl;
    length.display();

    return 0;
}
//OTPUT
//Distance 1:
//Feet: 3, Inches: 6
//
//Total inches of Distance 1: 42
//
//
//Length (converted from Dist
//Distance 3 (converted from 72 inches):
//Feet: 6, Inches: 0ance 1):
//Meters: 1, Centimeters: 6

