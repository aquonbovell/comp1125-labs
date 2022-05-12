#include<iostream>
#include<iomanip>
using namespace std;

#define MAX_STUDENTS 3
#define FINAL_WEIGHT 0.60
#define CW_WEIGHT 0.40

int main() {
	int i;
	unsigned int cswork[MAX_STUDENTS], final[MAX_STUDENTS];
	double score[MAX_STUDENTS];

	for (i = 0; i < MAX_STUDENTS; i++) {
		cout << "Enter course mark: ";
		cin >> cswork[i];
		cout << "Enter final mark: ";
		cin >> final[i];

		score[i] = cswork[i] * CW_WEIGHT + final[i] * FINAL_WEIGHT;
	}

	for (i = 0; i < MAX_STUDENTS; i++)
	{
		cout << "Score: " << score[i] << endl;
	}
	return 0;
}
