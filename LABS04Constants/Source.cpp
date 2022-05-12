#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.14159;
	int r;
	cout << "Radius: ";
	cin >> r;
	cout << "Area: " << PI * r * r;
	return 0;
}