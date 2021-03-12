//============================================================================
// Name        : Caixer_Automatic.cpp
// Author      : Ramon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

struct client{
	string nom;
	string dni;
	double saldo;
	int pin;
};
int o;
int pos=0;
string v;
double d;
bool t;
client *dades= new client[40];
int main() {


	do{
	cout << "Benvinguts al Caixer Automàtic. Quina operació desitja realitzar?" << endl; // prints Caixer Automàtic
	cout << "1.- Entrar nou client"<<endl;
	cout << "2.- Borrar client"<<endl;
	cout << "3.- Veure saldo disponible"<<endl;
	cout << "4.- Fer un ingrés"<<endl;
	cout << "5.- Treure diners"<<endl;
	cout << "6.- Sortir"<<endl;
	cin>> o;

	switch(o)
	{
					case 1:
						if ( pos<40){
						cout<<"Dona'm el nom del client:" << endl;
						getline(cin,v);
						dades[pos].nom=v;
						cout<<"Dona'm el DNI del client:";
						cin>>dades[pos].dni;
						cout<<"Entra un PIN de 4 digits:";
						cin>> dades[pos].pin;

						cout<< "S'ha desat el client "<<dades[pos].nom <<" amb un pin de " <<dades[pos].pin<<endl;
						pos++;
						}
						break;
					case 2:
						cout<<"Dona'm el nom del client que vols esborrar:"<<endl;
						getline(cin,v);
						t=true;
						for (int i =0; i<40;i++){
							if ( dades[i].nom==v ){
								dades[i].nom="";
								dades[i].dni="";
								dades[i].pin=0;
								dades[i].saldo=0;
								cout<< "S'ha esborrat el client " << v << endl;
								t=false;
							}
						}
						if(t){
							cout<< "No s'ha trobat el client " << v << endl;

						}
						break;
					case 3:
						cout<<"Dona'm el nom del client que vols consultar:"<<endl;
						getline(cin,v);
						t=true;
						for (int i =0; i<40;i++){
							if(dades[i].nom==v ){
								cout << "El saldo del client " << v << " és " << dades[i].saldo << endl;
								t=false;
							}
						}
						if(t){
						cout<< "No s'ha trobat el client " << v << endl;
						}
						break;
					case 4:
						cout<<"Dona'm el nom del client que vol fer l'ingrés:"<< endl;
						getline(cin,v);

						t=true;
						for (int i =0; i<40;i++){
							if(dades[i].nom==v ){
								cout<<"Quina quantitat vol ingressar:"<<endl;
								cin >> d;
								dades[i].saldo+=d;
								cout << "El saldo del client " << v << " és " << dades[i].saldo<< endl ;

								t=false;
							}
						}
						if(t){
							cout<< "No s'ha trobat el client " << v << endl;
						}
						break;
					case 5:
				cout<<"Dona'm el nom del client que vol fer l'ingrés:"<< endl;
				getline(cin,v);

				t=true;
				for (int i =0; i<40;i++){
					if(dades[i].nom==v ){
						cout<<"Quina quantitat vol retirar:"<<endl;
						cin >> d;
						dades[i].saldo=dades[i].saldo-d;
						cout << "El saldo del client " << v << " és " << dades[i].saldo<< endl;
						t=false;
						}
					}
				if(t){
					cout<< "No s'ha trobat el client " << v << endl;
				}
				break;
				default:
						cout << "Opció incorrecta!"<< endl;
				break;
	}
	}while (o!=6);
	cout << "Fins aviat!" << endl;
	return 0;
}

