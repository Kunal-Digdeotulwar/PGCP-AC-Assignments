//============================================================================
// Name        : ScopeAndLifetime.cpp
// Author      : Kunal
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int num = 100;
int main() {
	cout<<num<<endl;
	int num = 10;
	cout<<num<<endl;
	{
		cout<<num<<endl;
		int num = 20;
		cout<<num<<endl;
	}
	cout<<num<<endl;
	return 0;
}
