// Datei: fktproto.cpp
// Deklaration von Funktionen
// N. Kaelin, 02.03.2018

#include <iostream>
using namespace std;

void init(int* alpha);	// das ist der Funktionsprototyp (Deklaration)

int main(void)
{
	int a;
	init(&a);
	cout << "Der Wert von a ist " << a << endl;
	return 0;
}

void init(int* alpha)
{
	*alpha = 10;
}