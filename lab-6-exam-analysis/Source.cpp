/*Begin
Declare input as string
Declare students, numpassed, numfailed as integer

DO
	DISPLAY Enter a result
	READ input

	WHILE input !=a1 && input != a2 && input != A1 && input != A2 DO
		DISPLAY Enter a valid result either a1/A1 for pass or a2/A2 for fail
		READ input
	ENDWHILE

Increment students by 1

If input == a1 OR input == A1 DO
	Increment numpassed by 1
	DISPLAY Student has passed
	DISPLAY Newline
  ELSE
	Increment numfailed by 1
	DISPLAY Student has failed
	DISPLAY Newline
  ENDIF
ENDIF

WHILE student < 10
ENDDOWHILE

DISPLAY The number of students passed + numpassed
DISPLAY newline
DISPLAY The number of students failed + numfailed

IF numpassed>= 8
	DISPLAY Shoutout to the instructor for effectively teaching the students!!
ENDIF

END
*/

#include<iostream>
#include<string>
using namespace std;
int main() {
	string input = " ";
	int students = 0;
	int numberpassed = 0, numberfailed = 0;
	do {
		cout << "Enter result: " << endl;//outputs the message
		getline(cin, input);
		while (input != "a1" && input != "A1" && input != "a2" && input != "A2") {//checks to determine whether or not the input in valid
			cout << "Enter a valid result, either a1/A1 or a2/A2 : " << endl;
			getline(cin, input);
		}
		students++;
		if (input == "a1" || input == "A1") {//add 1 to the number of students passed
			numberpassed++;
			cout << "Student has passed!" << endl;
		}
		else {//add 1 to the number of students failed
			numberfailed++;
			cout << "Student has failed!" << endl;
		}
	} while (students < 10);//checks if the amount of entries are less than 10

	cout << "The number of students passed: " << numberpassed << endl;
	cout << "The number of students failed: " << numberfailed << endl;

	if (numberpassed >= 8) {//determines whether if 8 or more students have passed the course.
		cout << "Lecturer deserves a bonus!!" << endl;
	}
	return 0;
}