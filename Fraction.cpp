//////////////////////////////////////////////////////////////////////////////
// Fraction.cpp

#include "Fraction.h"
#include <sstream>


Fraction::Fraction()
{
	one = 0;
	two = 0;
}

Fraction::Fraction(int a, unsigned int b)
{
	one = a;
	two = b;
}

Fraction::Fraction(const Fraction& r)
{
	one = r.one;
	two = r.two;
}

Fraction::operator string()const
{
	stringstream ss;
	ss << "First part of number = " << one << endl;
	ss << "Second part of number = " << two << endl;

	return ss.str();
}

Fraction& Fraction::operator++()
{
	one++;
	return *this;
}

Fraction& Fraction::operator--()
{
	one--;
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction t(*this);
	one++;
	return t;
}

Fraction Fraction::operator--(int)
{
	Fraction t(*this);
	one--;
	return t;
}

Fraction operator - (const Fraction& a, const Fraction& b)
{
	return Fraction(a.one - b.one, a.two - b.two);
}

ostream& operator << (ostream& out, const Fraction& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, Fraction& r)
{
	cout << "First part of number= "; in >> r.one;
	cout << "Second part of number= "; in >> r.two;
	cout << endl;
	return in;
}
