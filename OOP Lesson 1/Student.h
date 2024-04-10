#pragma once
const int MARKS_SIZE = 5;
class Student
{
	private:
		int marks[MARKS_SIZE];
	public:
		char name[21];
		void setMark(int index, int x);
		int getMark(int index);
		double getAverage();
		int getMax();
		int getMin();
};

