//============================================================================
// Name        : Exercici.cpp
// Author      : RAmon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#define MAX 10
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int* t=NULL;

void omplir();
void mostra(int* t);
int intercanvi(int* t, int i);
int capgir(int* t);
int main() {
	t = new int[MAX];
	cout<< "Calculem array i el mostrem:"<< endl;
	omplir();
	mostra(t);
	cout <<endl;
	cout << "I ara el capgirem:"<< endl;
	capgir(t);
	mostra(t);
delete []t;
	return 0;
}

void omplir(){
	srand (time(NULL));

		int i;
		for (i=0;i<MAX;i++)
		{
			*(t+i)=rand() % 10 + 1;
		}
}
int intercanvi(int* t, int i){
	int one=*(t+i);
	*(t+i)=*(t+i+1);
	*(t+i+1)=one;
	return *t;
}
int capgir(int* t){
	for(int i=0; i<(MAX-1);i++)
	{
		for(int j=0; j<(MAX-i-1);j++){
		intercanvi(t,j);
		}
	}
	return *t;
}
void mostra(int* t){
	for (int i=0;i<MAX;i++){
		cout << *(t+i)<< " " ;
	}

}
