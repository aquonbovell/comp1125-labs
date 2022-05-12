/*
Begin
STRUCTURE Student
	DECLARE FullName : CHAR[70]
	DECLARE IDNumber, TEST1,TEST2,TEST3,AVERAGE : UNSIGNED INTEGER
ENDSTRUCTURE

DECLARE name as char[70]
		id, test1, test2 and test3 as integer
		student1,student3,student3 as Student

PROMPT user for the student name, id and test scores
READ name, id, test1, test2 and test3

COPY name to Student1.name
SET Student1.IDNumber to id, Student1.TEST1 to test1, Student1.TEST2 to test2, Student1.TEST3 to test3

SETStudent1.AVERAGE to calaverage(struct Student1)

DISPLAY "Student average: " + Student1.AVERAGE

PROMPT user for the student name, id and test scores
READ name, id, test1, test2 and test3

COPY name to Student2.name
SET Student2.IDNumber to id, Student2.TEST1 to test1, Student2.TEST2 to test2, Student2.TEST3 to test3

SETStudent2.AVERAGE to calaverage(struct Student2)

DISPLAY "Student average: " + Student2.AVERAGE

PROMPT user for the student name, id and test scores
READ name, id, test1, test2 and test3

COPY name to Student3.name
SET Student3.IDNumber to id, Student3.TEST1 to test1, Student3.TEST2 to test2, Student3.TEST3 to test3

SETStudent3.AVERAGE to calaverage(struct Student3)

DISPLAY "Student average: " + Student3.AVERAGE

FUNCTION unsigned interger calaverage (struct Student student)
	student.AVERAGE = (student.TEST1+student.TEST2+student.TEST3)/3
	return student.AVERAGE
 ENDFUNCTION

*/


#include<iostream>
#include<cstring>
using namespace std;

//defines the calAverage function
unsigned int calAverage(struct Student student);

//Defines student structure
struct Student {
	char FullName[70];
	unsigned int TEST1, TEST2, TEST3, AVERAGE, IDNumber;
};

//returns the average from the student structure


int main() {
	char name[70];
	unsigned int id, test1, test2, test3;
	Student student1, student2, student3;

	//gets input for the first student
	cout << "Enter student name: ";
	cin.getline(name, 70);
	cout << "Enter student id number: ";
	cin >> id;
	cout << "Enter the grade for test#1 : ";
	cin >> test1;
	cout << "Enter the grade for test#2 : ";
	cin >> test2;
	cout << "Enter the grade for test#3 : ";
	cin >> test3;

	//assigns the input to student1 structure
	strcpy(student1.FullName, name);
	student1.IDNumber = id, student1.TEST1 = test1, student1.TEST2 = test2, student1.TEST3 = test3;
	//sets student1's average to the returned average from the calAverage function
	student1.AVERAGE = calAverage(student1);
	cout << "Student average: " << student1.AVERAGE;

	cout << endl;
	cout << endl;

	//gets input for the second student
	cout << "Enter student name: ";
	cin >> ws;
	cin.getline(name, 70);
	cout << "Enter student id number: ";
	cin >> id;
	cout << "Enter the grade for test#1 : ";
	cin >> test1;
	cout << "Enter the grade for test#2 : ";
	cin >> test2;
	cout << "Enter the grade for test#3 : ";
	cin >> test3;

	//assigns the input to student2 structure
	strcpy(student2.FullName, name);
	student2.IDNumber = id, student2.TEST1 = test1, student2.TEST2 = test2, student2.TEST3 = test3;

	//sets student2's average to the returned average from the calAverage function
	student2.AVERAGE = calAverage(student2);
	cout << "Student average: " << student2.AVERAGE;
	cout << endl;
	cout << endl;

	//gets input for the third student
	cout << "Enter student name: ";
	cin >> ws;
	cin.getline(name, 70);
	cout << "Enter student id number: ";
	cin >> id;
	cout << "Enter the grade for test#1 : ";
	cin >> test1;
	cout << "Enter the grade for test#2 : ";
	cin >> test2;
	cout << "Enter the grade for test#3 : ";
	cin >> test3;

	//assigns the input to student3 structure
	strcpy(student3.FullName, name);
	student3.IDNumber = id, student3.TEST1 = test1, student3.TEST2 = test2, student3.TEST3 = test3;

	//sets student3's average to the returned average from the calAverage function
	student3.AVERAGE = calAverage(student3);
	cout << "Student average: " << student3.AVERAGE;

	system("pause");
	return 0;
}

unsigned int calAverage(struct Student student) {
	student.AVERAGE = (student.TEST1 + student.TEST2 + student.TEST3) / 3;
	return student.AVERAGE;
}