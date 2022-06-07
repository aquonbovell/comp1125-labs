/* rand example: guess the number */
#include <iostream> /* cout, cin, puts, NULL */
#include <cstdlib> /* srand, rand */
#include <ctime> /* time */
using namespace std;
int main()
{
	int iSecret, iGuess;
	/* initialize random seed: */
	srand(time(NULL));
	/* generate secret number between 1 and 10: */
	iSecret = rand() % 10 + 1;
	do {
		cout << "Guess the number (1 to 10): ";
		cin >> iGuess;
		if (iSecret < iGuess)
			puts("The secret number is lower");
		else if (iSecret > iGuess)
			puts("The secret number is higher");
	} while (iSecret != iGuess);
	puts("Congratulations!"); // output to the screen
	return 0;
}