#include "Triad.h"
#include<iostream>
#include<sstream>
#include<string>

using namespace std;
//Triad::Triad(){}
Triad::Triad(int f, int s, int t)
{
	setF(f);
	setS(s);
	setT(t);
}
Triad::Triad(const Triad& a)
{
	first = a.first;
	second = a.second;
	third = a.third;
}
Triad& Triad:: operator =(const Triad& a)
{
	first = a.first;
	second = a.second;
	third = a.third;
	return *this;
}
ostream& operator << (ostream& out, const Triad& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Triad& m)
{
	int f, s, t;

	cout << "first: "; in >> f;
	cout << "second: "; in >> s;
	cout << "third: "; in >> t;
	cout << endl;

	m.setF(f),m.setS(s),m.setT(t);
	return in;
}
Triad :: operator string () const
{
	stringstream sout;
	
	sout << first << "\t" << second << "\t" << third << endl;
	return sout.str();

}
bool operator > (const Triad& t1, const Triad& t2)
{
	return (t1.first > t2.first || 
		t1.first == t2.first &&	t1.second > t2.second || 
		t1.first == t2.first &&	t1.second == t2.second && t1.third > t2.third);
}

void Triad::setF(int value)
{
	first = value;
}

void Triad::setS(int value)
{
	second = value;
}

void Triad::setT(int value)
{
	third = value;
}

Triad& Triad::operator ++ ()
{
	first++;
	return *this;
}
Triad& Triad::operator -- ()
{
	first--;
	return *this;
}
Triad Triad::operator ++ (int)
{
	Triad a(*this);
	first++;
	return a;
}
Triad Triad::operator -- (int)
{
	Triad a(*this);
	first--;
	return a;
}