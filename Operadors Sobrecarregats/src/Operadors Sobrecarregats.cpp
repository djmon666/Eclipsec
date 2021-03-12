//============================================================================
// Name        : Operadors.cpp
// Author      : RAmon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//----------------------------------------------------------------
struct vector_2_dim{
int x;
int y;
};
vector_2_dim operator+(vector_2_dim v1, vector_2_dim v2);

//------------------------------------------------------------------
int main() {
vector_2_dim resultat, vector1, vector2;

vector1.x = 6;
vector1.y = 1;
vector2.x = 6;
vector2.y = 3;
resultat = vector1 + vector2;

cout << vector1.x << endl;
cout << vector1.y << endl;
cout << vector2.x << endl;
cout << vector2.y << endl;
cout << resultat.x << endl;
cout << resultat.y << endl;
return 0;
}
vector_2_dim operator+(vector_2_dim v1, vector_2_dim v2)
{
vector_2_dim temp;
temp.x = v1.x + v2.x;
if(temp.x > 10)
temp.x = 10;
temp.y = v1.y + v2.y;
if(temp.y > 10)
temp.y = 10;
return temp; }

