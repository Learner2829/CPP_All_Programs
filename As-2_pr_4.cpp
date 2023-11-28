#include <iostream>
using namespace std;

class coord {
private:
    int x;
    int y;

public:
    // Constructor
    coord(int t_x, int t_y) : x(t_x), y(t_y) {}

    // Prefix decrement operator (--coord)
    coord operator--() {
        --x;
        --y;
        return *this;
    }

    // Postfix decrement operator (coord--)
    coord operator--(int) {
        coord temp(*this);
        --x;
        --y;
        return temp;
    }

    // Unary plus operator (+coord)
    coord operator+() {
        // Make any negative coordinate value positive
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        return *this;
    }

    // Binary plus operator (coord + coord)
    coord operator+(const coord& other) {
        return coord(x + other.x, y + other.y);
    }

    // Display coordinates
    void display() {
        cout << "X: " << x << ", Y: " << y << endl;
    }
};

int main() {
    coord point1(5, -3);
    coord point2(-2, 7);

    cout << "Original Coordinates:" << endl;
    point1.display();
    point2.display();

    // Unary plus operator (+coord)
    cout << "\nApplying Unary Plus Operator (+coord):" << endl;
    (+point1).display();
    (+point2).display();

    // Binary plus operator (coord + coord)
    cout << "\nApplying Binary Plus Operator (coord + coord):" << endl;
    (point1 + point2).display();

    // Prefix decrement operator (--coord)
    cout << "\nApplying Prefix Decrement Operator (--coord):" << endl;
    (--point1).display();

    // Postfix decrement operator (coord--)
    cout << "\nApplying Postfix Decrement Operator (coord--):" << endl;
    (point2--).display();

    return 0;
}

