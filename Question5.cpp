//The code is for question 5

#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
double calculateSquareArea();
double calculateRectangleArea();
double calculateTriangleArea();
int getInput();

// Function to calculate the area of a square
double calculateSquareArea() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea() {
    double base, height;
    cout << "Enter the base length of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    return 0.5 * base * height;
}

// Function to get user input for shape selection
int getInput() {
    int selection;
    while (true) {
        cout << "\nPlease select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl;
        cout << "Enter selection: ";
        cin >> selection;

        if (selection >= 1 && selection <= 4) {
            return selection;
        } else {
            cout << "Invalid input. Please enter a valid selection." << endl;
        }
    }
}

int main() {
    while (true) {
        int choice = getInput();
        double area;

        switch (choice) {
            case 1:
                area = calculateSquareArea();
                cout << "Area of the square: " << area << endl;
                break;
            case 2:
                area = calculateRectangleArea();
                cout << "Area of the rectangle: " << area << endl;
                break;
            case 3:
                area = calculateTriangleArea();
                cout << "Area of the triangle: " << area << endl;
                break;
            case 4:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid selection." << endl;
        }
    }

    return 0;
}
