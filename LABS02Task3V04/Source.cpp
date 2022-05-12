// This program adds two numbers, prints their sum, quotient and remainder variation 1. **D**
#include <iostream>
#include <ostream>
using namespace std;
int main()
{
	int a = 12, b(4), sum = a + b;
	int product(a*b), quotient(a/b), remainder(a%b);
	cout << "The sum of " << a << " and " << b << " is " << sum <<"." <<endl;
	cout << "The product of " << a << " and " << b << " is " << product << "." << endl;
	cout << "The quotient of " << a << " divided by " << b << " is " << quotient << "." << endl;
	cout << "The remainder of " << a << " divided by " << b << " is " << remainder << "." << endl;
	return 0;
}