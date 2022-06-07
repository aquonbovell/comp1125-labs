#include <iostream>
#include <string>
using namespace std;
int main() {
	const float PI = 3.14159;
	int radius, compradius, biggestradius, numcalculatedcircles(0);
	string decision=" ";

	cout << "Enter a radius: ";
	cin >> radius; 
	while (radius < 0) {
		cout << "Enter a valid radius, as radius cannot be negative: ";
		cin >> radius;
	}
	numcalculatedcircles++;
	biggestradius = radius;
	cout << "The area of the cirlce is: " << PI * radius * radius << "." << endl;
	cout << numcalculatedcircles << " cirlce was calculated." << endl;

	do {
		cout << "Enter a radius: ";
		cin >> compradius;
		while (compradius < 0){
			cout << "Enter a valid radius, as radius cannot be negative: ";
			cin >> compradius;
		}
		numcalculatedcircles++;
		cout << "The area of the cirlce is: " << PI * compradius * compradius<<"."<<endl;
		cout << numcalculatedcircles << " cirlces were calculated."<<endl;
		if (compradius > biggestradius) {
			biggestradius = compradius;
		}
		cout << "If you do not wish to repeat, Enter \'no\'.\nIf you do wish to repeat enter \'yes\'."<<endl;
		cin >> decision; 
		while (decision != "yes" && decision != "no") {
			cout << "Please enter a valid response!!!: ";
			cin >> decision;
		}
	} while (decision != "no");
	cout << "The area of the biggest circle is " << PI * biggestradius * biggestradius << " with radius " << biggestradius << endl;
	return 0;
}