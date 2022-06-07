#include<iostream>
#include <string>
using namespace std;
int main() {
	int runtime, comptime, slowtime(0);
	string slowname, compname, input, decision;
	cout << "Enter a run time: ";
	cin >> runtime;
	slowtime = runtime;
	cout << "Enter a name: " ;
	cin >> input;
	slowname = input;
	do {
		cout << "Enter another time: ";
		cin >> comptime;
		cout << "Enter a name: ";
		cin >> input;
		compname = input;
		if (comptime > runtime) {
			slowtime = comptime;
			slowname = compname;
		}
		cout << "Do you want to continue? \nEnter yes(y) or no(n). ";
		cin >> decision;
		while (decision!="y"&&decision!="n") {
			cout << "Enter a valid response: ";
			cin >> decision;
		}
	} while (decision != "n");
	cout << "The slowest time is " << slowtime<<" seconds ran by "<<slowname<<"\nGOODBYE!!!";
}