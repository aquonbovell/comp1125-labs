#include <iostream>
#include <string>
using namespace std;


int main() {
    unsigned int age;
    string school;
    string decision;
    do {
        cout << "Enter age: ";
        cin >> age;

        if (age > 64) {
            cout << "Senior" << endl;
        }
        else if (age > 20) {
            cout << "Adult" << endl;
        }
        else if (age > 16) {
            cout << "Tertiary aged student" << endl;
        }
        else if (age > 10) {
            cout << "Secondary School" << endl;
        }
        else if (age > 3) {

            cout << "Are you in school?: ";
            cin >> school;

            if ((age < 8 && age>3) && school == "yes") {
                cout << "You are not in school" << endl;
            }
            else {
                cout << "Primary School" << endl;
            }
        }
        else if (age > 1) {
            cout << "Nursery School" << endl;
        }
        else if (age >= 0) {
            cout << "Baby" << endl;
        }
        cout << "Anymore persons: ";
        cin >> decision;

    } while (decision != "no");

    return 0;
}