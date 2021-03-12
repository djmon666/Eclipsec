//============================================================================
// Name        : Nombres.cpp
// Author      : Ramon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,c=0;
	cout << "Dona'm un nombre :"<< endl;
	cin >> a;
	for (int i=1;i<=a;i++){
		if ( a%i==0){
			c++;
		}
	}
	if (c>2){
		cout << "El numero " << a << " no és primer."<< endl;
	}
	else{
		cout << "El numero " << a <<  " és primer."<< endl;
	}
	return 0;
}
