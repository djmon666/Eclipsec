//============================================================================
// Name        : Exemple.cpp
// Author      : RAmon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "iostream"
#include "stdio.h"

using namespace std;

int funcion(int valor)
{
    valor = valor + 10; //Se le suma 10
    return valor;
}

int funcionPunteros(int* valor)
{
    *valor = *valor + 10; //Se le suma 10 a la posición en memoria
    return *valor;
}
/* Definición de la estructura */
  struct coordenadas
  {
      float x;
      float y;
      float z;
  };

int main()
{
    int numero = 10;

    cout << "Antes de funcion " << numero << "\n"; //10

    funcion(numero); //Se pasa por valor

    cout << "Despues de funcion " <<numero << "\n"; //10

    cout << "Antes de funcionPunteros " << numero << "\n"; //10

    funcionPunteros(&numero); //Se envía la dirección de memoria y la función resuelve la referencia

    cout << "Despues de funcionPunteros " << numero << "\n"; //20 (10+10)


        /* Declaración de dos estructuras */
        struct coordenadas location1, location2;
        /* Declaración de dos punteros */
        struct coordenadas *ptr1, *ptr2;

        /* Asignación de direcciones a los punteros */
        ptr1 = &location1;
        ptr2 = &location2;

        /* Asignación de valores a la primera estructura */
        ptr1->x = 3.5;
        ptr1->y = 5.5;
        ptr1->z = 10.5;

        /* Copia de valores a la segunda estructura */
        ptr2->x = ptr1->x;
        ptr2->y = ptr1->y;
        ptr2->z = ptr1->z;


    return 0;
}
