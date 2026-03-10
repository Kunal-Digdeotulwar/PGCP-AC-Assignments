//============================================================================
// Name        : Constructor.cpp
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
	// default constructor
	Student() {
		rollNo = 0;
		marks = 0.0f;
	}

	float getMarks() const {
		return marks;
	}

	void setMarks(float m) {
		marks = m;
	}

	int getRollNo() const {
		return rollNo;
	}

	void setRollNo(int rn) {
		rollNo = rn;
	}
};
int main() {
	Student s;
	cout<<"Student RollNo : " << s.getRollNo() << " Student Marks : " << s.getMarks() <<endl;
	return 0;
}
