#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Function to calculate the area of a circle
double calculateArea(const double radius) {
	const double M_PI = 3.14159265358979323846; // Define M_PI if not defined
	return M_PI * radius * radius;	//calculate area of circle
}

double calculateRectangle(const double length, const double width) {
	return length * width;	//calsculate area of rectangle
}

double calculatePerimeter(const double radius) {
	const double M_PI = 3.14159265358979323846; // Define M_PI if not defined
	return 2 * M_PI * radius;	//calculate perimeter of circle
}

double calculatePerimeter(const double length, const double width) {
	return 2 * (length + width);	//calculate perimeter of rectangle
}

int main() {
	int choice;
	
	do { // Menu loop
		std::cout << "Geometric Calculations Menu:\n";
		std::cout << "1. Area of Circle\n";
		std::cout << "2. Perimeter of a Circle\n";
		std::cout << "3. Area of a Rectangle\n";
		std::cout << "4. Perimeter of Rectangle\n";
		std::cout << "5. Quit\n";

		// Input validation for menu choice
		cin >> choice;
		if (cin.fail()) {
			cin.clear(); // clear the error flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
			cout << "Invalid input. Please enter a number between 1 and 5.\n";
			continue;
		}

		switch (choice) {	// Handle menu choices
		case 1: {
			double radius;
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			if (cin.fail() || radius < 0) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Please enter a non-negative number for radius.\n";
			}
			else {
				cout << "Area of Circle: " << calculateArea(radius) << endl;
			}
			break;
		}

		case 2: {	// Perimeter of circle
			double radius;
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			if (cin.fail() || radius < 0) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Please enter a non-negative number for radius.\n";
			}
			else {
				cout << "Perimeter of Circle: " << calculatePerimeter(radius) << endl;
			}
			break;
		}

		case 3: {	// Area of rectangle
			double length, width;
			cout << "Enter the length and width of the rectangle: ";
			cin >> length >> width;
			if (cin.fail() || length < 0 || width < 0) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Please enter non-negative numbers for length and width.\n";
			}
			else {
				cout << "Area of Rectangle: " << calculateRectangle(length, width) << endl;
			}
			break;
		}

		case 4: {	// Perimeter of rectangle
			double length, width;
			cout << "Enter the length and width of the rectangle: ";
			cin >> length >> width;
			if (cin.fail() || length < 0 || width < 0) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Please enter non-negative numbers for length and width.\n";
			}
			else {
				cout << "Perimeter of Rectangle: " << calculatePerimeter(length, width) << endl;
			}
			break;
		}

		case 5:	// Quit
			cout << "Leaving the program.\n";
			break;
		}
	}

	while (choice != 5);	// Continue until user chooses to quit

	return 0;
}