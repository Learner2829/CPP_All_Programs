#include <iostream>

using namespace std;

class Vector {
private:
    int elements[10]; 
    int size;
    int capacity;

public:
    Vector() : size(0), capacity(10) {}

    void modify_element(int index, int newValue) {
        if (index >= 0 && index < size) {
            elements[index] = newValue;
        } else {
            cout << "Invalid index. Element not modified." << endl;
        }
    }

    void multiply_Scalar(int scalar) {
        for (int i = 0; i < size; i++) {
            elements[i] *= scalar;
        }
    }

    void add(int value) {
        if (size < capacity) {
            elements[size++] = value;
        } else {
            cout << "Vector is full. Element not added." << endl;
        }
    }

    // Function to display the vector
    void display_Vector() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << elements[i];
            if (i < (size - 1)) {
                cout << ",";
            }
        }
        cout << ")" << endl;
    }
};

int main() {
    Vector myVector;
    int num;
		cout<<"Enter Number of vector elements"<<endl;
		cin>>num;
    // Add elements to the vector
    for(int i=0;i<=num;i++)
    {
    	int ele;
    cout<<"Enter your vector elements";
    cin>>ele;
	myVector.add(ele);
	}
    

    // Display the vector
    cout << "Initial Vector: ";
    myVector.display_Vector();

    // Modify an element
    myVector.modify_element(2, 35);

    // Display the modified vector
    cout << "Modified Vector: ";
    myVector.display_Vector();

    // Multiply the vector by a scalar value
    myVector.multiply_Scalar(2);

    // Display the multiplied vector
    cout << "Multiplied Vector: ";
    myVector.display_Vector();

    return 0;
}

