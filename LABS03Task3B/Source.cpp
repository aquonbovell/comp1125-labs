#include<iostream>
#include<string>
using namespace std;
int main() {
	char mychar;
	string decision = " ";
	do {
		cout << "Enter a letter:"<<endl;
		cin >> mychar;
		cout << "You have entered: " << mychar << endl;
		cout << "Enter \"n\" if you dont want to continue: " << endl; \
		//cin >> ws; //clears the white space.
		getline(cin>> ws, decision);//clears the white space within the getline() function.
	} while (decision != "n");
	return 0;
}