//============================================================================
// Name        : CallByValue.cpp
// Author      : Kunal
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int add(int a, int b) {
	a = 1000;
	b = 2000;
	cout << "Inside add" << endl;
	cout << "Address of a : " << &a << endl;
	cout << "Address of b : " << &b << endl;
	return a + b;

}
int main() {
	int a = 10;
	int b = 20;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "Address of a : " << &a << endl;
	cout << "Address of b : " << &b << endl;

	int res = add(a, b);
	cout << "res : " << res << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	return 0;
}
