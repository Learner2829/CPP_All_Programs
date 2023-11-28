/*(1)   Create a base class called shape. Use this class to store two double type values that could be used to
 compute the area of figures. Derive three specific classes calledtriangle, rectangle and circle from the base shape.
 Add to the base class, a member function get_data( ) to initialize base class data members
 and another member function display_area( ) to compute and display the area of figures.
Make display_area( ) as a virtual function and redefine this function in derived classes to suit their requirements.
 Using these three classes design a
 program that will accept dimensions of a triangle or rectangle interactively and store it in one array .
 After having read all the input display the area of all the figures whose area has been read in the program.
 Remember the two values given as input will be treated
 as lengths of two sides in the case of rectangle and as base and height in case of triangle.
 In case of circle only one value
 should be accepted which will be taken as the radius and the default value of the next parameter should be 0. 

polymorphism assignment
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class shape{
	public:double dimension1, dimension2;
	public:
		shape(): dimension1(0.0), dimension2(0.0){
		}
		
		void get_data(){
			cout<<"enter dimension1: ";
			cin>>dimension1;
			cout<<"enter dimension2: ";
			cin>>dimension2;
		}
		
		//member function to display the area
		void display_area(const string& shape_type)const{
			cout << shape_type << " Area: " << calculate_area() <<endl;
		}
		
		virtual double calculate_area()const{
			return 0.0;
		}
};

class triangle: public shape{
	public:
		double calculate_area() const {
        	return 0.5 * dimension1 * dimension2;
    	}
};

class rectangle: public shape{
	double calculate_area() const {
        return dimension1 * dimension2;
    }	
};

class circle: public shape{
	double calculate_area() const {
        return 3.14 * dimension1 * dimension1;
    }
    
    void get_data() {
        cout << "Enter radius: ";
        cin >> dimension1;
        dimension2 = 0.0; // Set the default value for the second dimension to 0 for the circle
    }
};

int main(){
	int maxshapes = 3;
	shape* shapes[maxshapes];
     // Accept dimensions of shapes interactively and store in the array
    for (int i = 0; i < maxshapes; ++i) {
        char choice;
        std::cout << "Enter shape (T for Triangle, R for Rectangle, C for Circle): ";
        std::cin >> choice;

        switch (choice) {
            case 'T':
                shapes[i] = new triangle();
                break;
            case 'R':
                shapes[i] = new rectangle();
                break;
            case 'C':
                shapes[i] = new circle();
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
                --i; // Decrement i to repeat the current iteration
                continue;
        }

        shapes[i]->get_data(); // Input dimensions
    }
     // Display the area of all the figures whose area has been read
    for (int i = 0; i < maxshapes; ++i) {
        shapes[i]->display_area((i == 0) ? "Triangle" : (i == 1) ? "Rectangle" : "Circle");
    }
    
    for (int i = 0; i < maxshapes; ++i) {
        delete shapes[i];
    }
    
    return 0;

}
