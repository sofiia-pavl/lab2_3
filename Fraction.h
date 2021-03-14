//////////////////////////////////////////////////////////////////////////////
// Fraction.h
// заголовний файл Ц визначенн€ класу

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Fraction
{
private:
	int one;
	unsigned int two;
public:
	int getOne() const { return one; }
	int getTwo() const { return two; }

	void setOne(int value) { one = value; }
	void setTwo(unsigned int value) { two = value; }

	Fraction();
	Fraction(int, unsigned int);
	Fraction(const Fraction&);

	operator string() const;

	Fraction& operator ++();
	Fraction& operator --();
	Fraction operator ++(int);
	Fraction operator --(int);

	friend Fraction operator - (const Fraction& a,const Fraction& b);
	void operator () (Fraction& d)
	{
		if (one == d.one && two == d.two) cout << one << "." << two << " = " << d.one << "." << d.two;
		else if (one < d.one || one == d.one && two < d.two)   cout << one << "." << two << " < " << d.one << "." << d.two;
		else if (one > d.one || one == d.one && two > d.two)   cout << one << "." << two << " > " << d.one << "." << d.two;
	}

	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);
};

