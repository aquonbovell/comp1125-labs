// countdown using a for loop variation1
#include <iostream>
using namespace std;
int main()
{
	int n, i;
	for (n = 0, i = 100; n != i; ++n, --i) {
		cout << n << ", ";
	}
	cout << "liftoff!\n";
	return 0;
}
