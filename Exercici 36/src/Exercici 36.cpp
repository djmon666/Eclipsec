//============================================================================
// Name        : Exercici.cpp
// Author      : RAmon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct temps{
	int dies;
	int hores;
	int minuts;
};
temps operator+(temps t1 , temps t2);
void demanar_temps(temps *t);
void mostrar_temps(temps resultat);


int main() {
	temps t1,t2,resultat;
	demanar_temps(&t1);
	demanar_temps(&t2);
	resultat = t1 + t2;
	mostrar_temps(resultat);
	return 0;
}
temps operator+(temps t1, temps t2)
{
	temps suma;
	suma.minuts= t1.minuts+t2.minuts;
	suma.hores= t1.hores+t2.hores;
	suma.dies= t1.dies + t2.dies;
	if ( suma.minuts>59)
	{
		suma.minuts = suma.minuts%60;
		suma.hores= suma.hores+1;
	}
	if ( suma.hores>23)
		{
			suma.hores = suma.hores%24;
			suma.dies= suma.dies+1;
		}
	return suma;
}
void demanar_temps(struct temps *t)
{


	cout << "Entreu el minuts: ";
	cin >> t->minuts;
	cout << "Entreu les hores: ";
	cin >> t->hores;
	cout << "Entreu els dies: ";
	cin >> t->dies;


}
void mostrar_temps(temps resultat)
{
	cout << "La suma dels temps és: " << resultat.dies << " dies "<< resultat.hores << " hores " << resultat.minuts << " minuts ";
}
