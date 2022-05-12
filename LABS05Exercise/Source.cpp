#include <iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
int main() {
	string decision;
	char chr1 = ' ', chr2 = ' ', chr3 = ' ';
	char place1 = ' ', place2 = ' ', place3 = ' ', place4 = ' ', place5 = ' ', place6 = ' ', place7 = ' ', place8 = ' ', place9 = ' ';
	int rand1, rand2, rand3;
	int count1 = 0; int count2 = 3; int count3 = 6;
	bool grid = false;

	srand(time(NULL));

	cout << "Let's Play A Game" << endl;

	do {
		cout << "Enter the letters 'R', 'U', 'N': " << endl;
		cin >> chr1 >> chr2 >> chr3;

		while (chr1 != 'R' || chr2 != 'U' || chr3 != 'N') {
			cout << "Please Enter the letters 'R', 'U', 'N':" << endl;
			cin >> chr1 >> chr2 >> chr3;
		}
		rand1 = rand() % 9 + 1;
		rand2 = rand() % 9 + 1;
		rand3 = rand() % 9 + 1;

		while (rand1 >= rand2 || rand2 >= rand3) {
			rand1 = rand() % 9 + 1;
			rand2 = rand() % 9 + 1;
			rand3 = rand() % 9 + 1;
		}
		if (grid != true) {
			while (count1 < 3) {
				if (count1 == 2) {
					cout << count1 + 1 << endl;
				}
				else
					cout << count1 + 1 << "|";
				count1++;
			}

			cout << "-----" << endl;

			while (count2 < 6) {
				if (count2 == 5) {
					cout << count2 + 1 << endl;
				}
				else
					cout << count2 + 1 << "|";
				count2++;
			}

			cout << "-----" << endl;

			while (count3 < 9) {
				if (count3 == 8) {
					cout << count3 + 1 << endl;
				}
				else
					cout << count3 + 1 << "|";
				count3++;
			}
			cout << endl;
			cout << endl;
			grid = true;
		}

		if (rand1 == 1)place1 = chr1;
		else if (rand1 == 2)place2 = chr1;
		else if (rand1 == 3)place3 = chr1;
		else if (rand1 == 4)place4 = chr1;
		else if (rand1 == 5)place5 = chr1;
		else if (rand1 == 6)place6 = chr1;
		else if (rand1 == 7)place7 = chr1;
		else if (rand1 == 8)place8 = chr1;
		else place9 = chr1;

		if (rand2 == 1)place1 = chr2;
		else if (rand2 == 2)place2 = chr2;
		else if (rand2 == 3)place3 = chr2;
		else if (rand2 == 4)place4 = chr2;
		else if (rand2 == 5)place5 = chr2;
		else if (rand2 == 6)place6 = chr2;
		else if (rand2 == 7)place7 = chr2;
		else if (rand2 == 8)place8 = chr2;
		else place9 = chr2;

		if (rand3 == 1)place1 = chr3;
		else if (rand3 == 2)place2 = chr3;
		else if (rand3 == 3)place3 = chr3;
		else if (rand3 == 4)place4 = chr3;
		else if (rand3 == 5)place5 = chr3;
		else if (rand3 == 6)place6 = chr3;
		else if (rand3 == 7)place7 = chr3;
		else if (rand3 == 8)place8 = chr3;
		else place9 = chr3;

		count1 = 0; count2 = 3; count3 = 6;

		while (count1 < 3) {
			if (count1 == 2) {
				cout << place3 << endl;
			}
			else if (count1 == 1) {
				cout << place2 << "|";
			}
			else
				cout << place1 << "|";
			count1++;
		}

		cout << "-----" << endl;

		while (count2 < 6) {
			if (count2 == 5) {
				cout << place6 << endl;
			}
			else if (count2 == 4) {
				cout << place5 << "|";
			}
			else
				cout << place4 << "|";
			count2++;
		}

		cout << "-----" << endl;

		while (count3 < 9) {
			if (count3 == 8) {
				cout << place9 << endl;
			}
			else if (count3 == 7) {
				cout << place8 << "|";
			}
			else
				cout << place7 << "|";
			count3++;
		}
		cout << endl << endl;

		if ((place1 == 'R'||place1=='U'||place1=='N')&&(place2 == 'R' || place2 == 'U' || place2 == 'N')&&(place3 == 'R' || place3 == 'U' || place3 == 'N')&&(place4 == 'R' || place4 == 'U' || place4 == 'N')&&(place5 == 'R' || place5 == 'U' || place5 == 'N')&&(place6 == 'R' || place6 == 'U' || place6 == 'N')&&(place7 == 'R' || place7 == 'U' || place7 == 'N')&&(place8 == 'R' || place8 == 'U' || place8 == 'N')&&(place9 == 'R' || place9 == 'U' || place9 == 'N')) {
			cout << "The end has ended\nThank you for playing!!" << endl;
			decision = "no";
		}
		else {
			cout << "Do you want to continue: " << endl;
			cin >> ws;
			getline(cin, decision);
			while (decision != "yes" && decision != "YES" && decision != "NO" && decision != "no") {
				cout << "PLease Enter 'YES' or'yes' or 'NO' or 'no' !!" << endl;
				cin >> ws;
				getline(cin, decision);
			}
		}
	}while (decision != "no"&&decision!="NO");
	
	return 0;
}