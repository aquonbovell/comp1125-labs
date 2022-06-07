#include<iostream>
using namespace std;

class TrapezPrism {
	double height, topwidth, bottomwidth, length;
public:
	TrapezPrism();
	TrapezPrism( double a, double b, double x, double y) : topwidth(a), bottomwidth(b), height(y), length(x) {}
	double area() { return ((topwidth + bottomwidth) * height) / 2; }
	double volume() { return area() * length; }
};

TrapezPrism::TrapezPrism() {
	height = 5, topwidth = 3, bottomwidth = 6, length = 8;
}

int main() {
	double height, topwidth, bottomwidth, length;
	
	cout << "Enter the topwidth: ";
	cin >> topwidth;
	while (topwidth <= 0 || topwidth >= 100000) {
		cout << "Please enter a valid top-width between 1 and 100,000: ";
		cin >> topwidth;
	}
	cout << "Enter the bottom-width: ";
	cin >> bottomwidth; 
	while (bottomwidth <= 0 || bottomwidth >= 100000) {
		cout << "Please enter a valid bottom-width between 1 and 100,000: ";
		cin >> bottomwidth;
	}
	cout << "Enter the height: ";
	cin >> height; 
	while (height <= 0 || height >= 100000) {
		cout << "Please enter a valid height between 1 and 100,000: ";
		cin >> height;
	}
	cout << "Enter the lenght: ";
	cin >> length; 
	while (length <= 0 || length >= 100000) {
		cout << "Please enter a valid length between 1 and 100,000: ";
		cin >> length;
	}
	cout << endl;

	TrapezPrism shape (topwidth, bottomwidth, length, height);
	
	cout << "Area is: " << shape.area();
	cout << endl;
	cout << "Volume is: " << shape.volume();
	cout << endl;
	return 0;
}