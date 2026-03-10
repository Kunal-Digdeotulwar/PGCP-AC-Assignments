//============================================================================
// Name        : StaticVarAndFunction.cpp
// Author      : Kunal
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student {
	int rollNo;
	float marks;
	static string course;
	static int totalStudent;

public:
	Student() :
			rollNo(0), marks(0) {
		totalStudent++;
	}
	Student(int rollNo, float marks) :
			rollNo(rollNo), marks(marks) {
		totalStudent++;
	}

	void setRollNo(int rollNo) {
		this->rollNo = rollNo;
	}

	int getRollNo() const {
		return rollNo;
	}

	void setMarks(float marks) {
		this->marks = marks;
	}
	float getMarks() const {
		return marks;
	}
	static const string& getCourse() {
		return course;
	}
	void setCourse(const string &course) {
		this->course = course;
	}

	static int getTotalStudent() {
		return totalStudent;
	}

	void setTotalStudent(int totalStudent) {
		this->totalStudent = totalStudent;
	}

	static void getStudentsAndCourse() {
		cout << "Total Student: " << totalStudent << " | Course: " << course
				<< endl;
	}
};

string Student::course = "PGCP-AC";
int Student::totalStudent = 0;
int main() {
	Student s1(121, 48);
	cout << "Total Student : " << Student::getTotalStudent() << endl;
	return 0;
}
