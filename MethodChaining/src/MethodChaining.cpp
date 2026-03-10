//============================================================================
// Name        : MethodChaining.cpp
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

public:
	Student() :
			rollNo(0), marks(0) {
	}

	Student(int rollNo, float marks) :
			rollNo(rollNo), marks(marks) {
	}

	float getMarks() const {
		return marks;
	}

	Student& setMarks(float marks) {
		this->marks = marks;
		return *this;
	}

	int getRollNo() const {
		return rollNo;
	}

	Student& setRollNo(int rollNo) {
		this->rollNo = rollNo;
		return *this;
	}
};

int main() {
	Student s;
	s.setRollNo(101).setMarks(87.0f);
	cout << s.getRollNo() << " | " << s.getMarks() << endl;
	return 0;
}
