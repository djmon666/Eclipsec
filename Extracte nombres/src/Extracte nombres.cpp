//============================================================================
// Name        : Extracte.cpp
// Author      : Ramon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n[10]={1,2,3,4,5,6,7,8,9,10};
	int len= sizeof(n)/sizeof(n[0]);
	int suma=0;
	cout << len<< endl; // prints !!!Hello World!!!
	for(int i=0;i<len;i++){
		suma=suma + n[i];
	}
	cout << "La suma de tots els elements de l'array és "<< suma;

	return 0;
}
