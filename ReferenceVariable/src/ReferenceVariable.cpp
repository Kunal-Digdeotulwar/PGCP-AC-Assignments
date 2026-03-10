//============================================================================
// Name        : ReferenceVariable.cpp
// Author      : Kunal
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int &ref = a;
	cout << "a : " << a << endl;
	cout << "ref : " << ref << endl;
	ref = 20;
	cout << "a : " << a << endl;
	cout << "ref : " << ref << endl;
	cout << "Address of a : " << &a << endl;
	cout << "Address of ref : " << &ref << endl;
	return 0;
}
