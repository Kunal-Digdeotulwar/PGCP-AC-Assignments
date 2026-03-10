//============================================================================
// Name        : Destructor.cpp
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
		cout<<"Default Ctor.."<<endl;
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
	~Student(){
		cout<<"Destructor.."<<endl;
	}
};
int main() {
	Student s;
	return 0;
}
