/*
BEGIN
Display "Enter a number"
Get input
FOR i = input to 0 Do
	Display input ","
ENDFOR
END
*/#include <iostream>
using namespace std;
int main() {
	int input;
	cout << "Enter a number: ";
	cin >> input;
	for (int i = input; i > 0; i--) {
		cout << input << " ";
	}
	return 0;
}