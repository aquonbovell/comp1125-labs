#include<iostream>
#include<iomanip>
#include <array>

using namespace std;

//function declaration
void setPattern(char A[5][5], char character);
void setArray(char A[5][5]);
void displayArray(char A[5][5]);

int main() {
	char pattern[5][5];

	setArray(pattern);

	setPattern(pattern, 'X');

	displayArray(pattern);

	return 0;
}

//function definitions
void setPattern(char A[5][5], char character) {
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			A[i][j] = character;
		}
	}
}

void setArray(char A[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			A[i][j] = ' ';
		}
	}
}

void displayArray(char A[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == 4) {
				cout << A[i][j] << endl;
			}
			else
			{
				cout << A[i][j] << "|";
			}
		}
		if (i != 4) {
			cout << "---------" << endl;
		}
	}
}