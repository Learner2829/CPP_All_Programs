#include<iostream>
#include<string>
using namespace std;
/*(7) Define a class Car. Add data members as Make, Color, Size, and Cost. 
Write member functions for reading values and printing values of car.
Define one more class as CarCollection.
CarCollection contains array of cars. 
CarCollection class should contain member functions as Add,delete, modify and replace. 
CarCollection is to be defined as friend of Car class. 
Write C++ programs to test your classes
*/

// Forward declaration of CarCollection class
class CarCollection;

class Car {
private:
    string Make;
    string Color;
    double Size;
    double Cost;

public:
	Car() : Make(""), Color(""), Size(0.0), Cost(0.0) {}
    // Constructor to initialize data members
    Car(string make, string color, double size, double cost)
        : Make(make), Color(color), Size(size), Cost(cost) {}

    // Friend class declaration
    friend class CarCollection;

    // Member function to read values
    void ReadValues() {
        cout << "Enter car details:" << endl;
        cout << "Make: ";
        cin >> Make;
        cout << "Color: ";
        cin >> Color;
        cout << "Size (in meters): ";
        cin >> Size;
        cout << "Cost (in dollars): ";
        cin >> Cost;
    }

    // Member function to print values
    void PrintValues() {
        cout << "Car details:" << endl;
        cout << "Make: " << Make << endl;
        cout << "Color: " << Color << endl;
        cout << "Size: " << Size << " meters" << endl;
        cout << "Cost: $" << Cost << endl;
    }
};

class CarCollection {
private:
    Car cars[100]; // Assuming a maximum of 100 cars in the collection
    int numCars;

public:
    // Constructor to initialize the collection
    CarCollection() : numCars(0) {}

    // Member function to add a car
    void AddCar(const Car& car) {
        if (numCars < 100) {
            cars[numCars] = car;
            numCars++;
            cout << "Car added successfully!" << endl;
        } else {
            cout << "Car collection is full." << endl;
        }
    }

    // Member function to delete a car
    void DeleteCar(int index) {
        if (index >= 0 && index < numCars) {
            for (int i = index; i < numCars - 1; i++) {
                cars[i] = cars[i + 1];
            }
            numCars--;
            cout << "Car deleted successfully!" << endl;
        } else {
            cout << "Invalid index." << endl;
        }
    }

    // Member function to modify a car
    void ModifyCar(int index, const Car& newCar) {
        if (index >= 0 && index < numCars) {
            cars[index] = newCar;
            cout << "Car modified successfully!" << endl;
        } else {
            cout << "Invalid index." << endl;
        }
    }

    // Member function to replace a car
    void ReplaceCar(int index, const Car& newCar) {
        if (index >= 0 && index < numCars) {
            cars[index] = newCar;
            cout << "Car replaced successfully!" << endl;
        } else {
            cout << "Invalid index." << endl;
        }
    }
	// Member function to print car details by index
    void PrintCarDetails(int index) {
        if (index >= 0 && index < numCars) {
            cars[index].PrintValues();
        } else {
            cout << "Invalid index." << endl;
        }
    }

};

int main() {
    CarCollection collection;

    // Example usage
    Car car1("Toyota", "Blue", 4.5, 25000);
    Car car2("Honda", "Red", 4.2, 22000);

    collection.AddCar(car1);
    collection.AddCar(car2);

    collection.DeleteCar(1);

    Car modifiedCar("Ford", "Green", 4.0, 28000);
    collection.ModifyCar(0, modifiedCar);

    Car newCar("Tesla", "Black", 4.8, 60000);
    collection.ReplaceCar(0, newCar);

    collection.PrintCarDetails(0); // Print the replaced car details

    return 0;
}
