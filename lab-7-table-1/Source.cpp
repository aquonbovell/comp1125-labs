// example: one class, two objects
#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle();
	void set_values(int, int);
	int area() { return width * height; }
};

void Rectangle::set_values(int x, int y) {
	width = x;
	height = y;
}

Rectangle::Rectangle() {
	width = 2;
	height = 3;
}

int main() {
	int height, width, counter, i(0), numcalculateareas(0);
	Rectangle rect;

	cout << "Enter the number of areas to be calculated: ";
	cin >> counter;

	do {
		cout << "Enter a height: ";
		cin >> height;
		cout << "Enter a width: ";
		cin >> width;

		rect.set_values(width, height);

		cout << "Rect area: " << rect.area() << endl;
		numcalculateareas++;
		i++;

	} while (i < counter);

	cout << "The number of areas calculated is : " << numcalculateareas;

	return 0;
}