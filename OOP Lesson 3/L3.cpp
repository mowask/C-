#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Student.h"
using namespace std;

int main() {
	int* arr = new int [5] {5, 2, 3, 1, 2};
	Student john("John Doe", 5, arr);
	delete[] arr;

	arr = new int [6] {5, 2, 4, 2, 2, 5};
	Student jane("Jane Doe", 6, arr);
	delete[] arr;

	/*cout << john.getName() << endl;
	cout << "Avg: " << john.getAverage() << endl;
	for (int i = 0; i < john.getMarksCount(); i++){
		cout << john.getMark(i) << ' ';
	}*/

	FILE* file = nullptr;
	fopen_s(&file, "C:\\exampless\\Students.csv", "r+");
	if (file == nullptr) {
		cout << "error";
	}
	else {
		//john.writeToFileCSV(file);
		//jane.writeToFileCSV(file);
		while (!feof(file)) {
			char buf[1000];
			//char* check = fgets(buf, 1000, file);
			//if (chek != nullptr) break;

			if (!fgets(buf, 1000, file)) break;
			//if (strlen(buf) <= 2) continue;

			char* token = strtok(buf, ";");
			char name[21];
			strcpy_s(name, 20, token);
			//cout << name << endl;

			token = strtok(NULL, ";");
			int marksCount = atoi(token);
			//cout<< marksCount << endl;

			int* marks = new int[marksCount];
			for (int i = 0; i < marksCount; i++) {
				token = strtok(NULL, ";");
				marks[i] = atoi(token);
			}

			Student fromFile(name, marksCount, marks);
			fromFile.showStudent();

			
		}
		fclose(file);
	}
	

	
	return 0;
}