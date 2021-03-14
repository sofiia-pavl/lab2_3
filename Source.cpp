/////////////////////////////////////////////////////
// Source.cpp
// головний файл проекту - main

#include"Fraction.h"

int main()
{
	Fraction a, b;
	cout << " Add first number : "<<endl << endl; cin >> a;
	cout << endl;
	cout << " Add second number : " << endl << endl; cin >> b;
	cout << endl ;
	cout <<"++ of first number" << endl << ++a << endl;
	cout << "-- of second number" << endl << --b << endl;

	cout << "Subtraction of first and second number : " << endl << a - b;
	cout << endl;
	cout << "Comparison of first and second number : "<<endl;
	a(b);

	return 0;
}