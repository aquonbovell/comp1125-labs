#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	char input;
	char first, second;

	cout << "Input first initial" << endl;
	cin.get(input);
	first = input;
	cin.get(input);//flushing the iostream

	cout << "Input second initial" << endl;
	cin.get(input);
	second = input;
	cin.get(input);

	cout << endl;

	cout.put(first);
	cout.put(' ');
	cout.put(second);
	cout.put('\n');

	system("pause");
	return 0;
}