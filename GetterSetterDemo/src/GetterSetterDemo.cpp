//============================================================================
// Name        : GetterSetterDemo.cpp
// Author      : Kunal
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student {
	int rollNo;

public:
	int getRollNo() const {
		return rollNo;
	}

	void setRollNo(int num) {
		if (num > 0 && num < 100)
			rollNo = num;
	}
};
int main() {
	Student s;
	s.setRollNo(10);
//	s.setRollNo(-10);
	cout << s.getRollNo() << endl;
	return 0;
}
