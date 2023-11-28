#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    double** data;

public:
    // Constructors
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data = new double*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new double[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = 0.0;
            }
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Overload () for element access
    double& operator()(int row, int col) {
        return data[row][col];
    }

    // Overload + for matrix addition
    Matrix operator+(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result(i, j) = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Overload - for matrix subtraction
    Matrix operator-(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result(i, j) = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    // Overload * for matrix multiplication
    Matrix operator*(const Matrix& other) const {
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result(i, j) += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // Overload * for scalar multiplication
    Matrix operator*(double scalar) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result(i, j) = data[i][j] * scalar;
            }
        }
        return result;
    }

    // Function to calculate the inverse of a matrix
    Matrix inverse() const {
        // Assume the matrix is 2x2 for simplicity
        double det = data[0][0] * data[1][1] - data[0][1] * data[1][0];
        if (std::abs(det) < 1e-10) {
            cerr << "Matrix is singular, cannot calculate inverse." << endl;
        }

        Matrix result(2, 2);
        result(0, 0) = data[1][1] / det;
        result(0, 1) = -data[0][1] / det;
        result(1, 0) = -data[1][0] / det;
        result(1, 1) = data[0][0] / det;

        return result;
    }

    // Display the matrix
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << setw(8) << data[i][j];
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix A(2, 2);
    A(0, 0) = 1;
    A(0, 1) = 2;
    A(1, 0) = 3;
    A(1, 1) = 4;

    Matrix B(2, 2);
    B(0, 0) = 5;
    B(0, 1) = 6;
    B(1, 0) = 7;
    B(1, 1) = 8;

    Matrix C = A + B;
    Matrix D = A - B;
    Matrix E = A * B;
    Matrix F = A * 2.0;
    Matrix G = A.inverse();

    cout << "Matrix A:" << endl;
    A.display();

    cout << "Matrix B:" << endl;
    B.display();

    cout << "A + B:" << endl;
    C.display();

    cout << "A - B:" << endl;
    D.display();

    cout << "A * B:" << endl;
    E.display();

    cout << "A * 2.0:" << endl;
    F.display();

    cout << "Inverse of A:" << endl;
    G.display();

    return 0;
}
//Output
//Matrix A:
//       1       2
//       3       4
//Matrix B:
//       5       6
//       7       8
//A + B:
//       6       8
//      10      12
//A - B:
//      -4      -4
//      -4      -4
//A * B:
//      19      22
//      43      50
//A * 2.0:
//       2       4
//       6       8
//Inverse of A:
//      -2       1
//     1.5    -0.5


