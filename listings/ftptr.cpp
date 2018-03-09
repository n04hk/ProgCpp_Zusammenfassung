// Datei: ftptr.cpp
// Funktionspointer
// N. Kaelin, 03.03.2018

#include <iostream>
using namespace std;

int foo(char ch)
{
	int i;		// muss hier definiert werden
	for(i=1;i<=10;i++)
		cout << ch << " ";
	cout << endl;
	return i;
}

int main()
{
	int (*p) (char);	// Deklaration des Funktionspointers
	char c;
	int ret;
	cout << "Buchstabe eingeben: ";
	cin >> c;
	p = foo;	// ermittle Adresse der Funktion foo()
	ret = p(c);	// Aufruf von foo() ueber Funktionspointer
	return 0;
}