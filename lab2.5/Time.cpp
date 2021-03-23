#include<sstream>
#include<string>
#include "Time.h"
#include<iostream>	
#include "Triad.h"

using namespace std;

Time::Time(int f, int s, int t)
{
	triad.setF(f);
	triad.setS(s);
	triad.setT(t);
}
Time::Time(const Time& tri)
{
	triad = tri.triad;
}
Time& Time:: operator = (const Time& tri)
{
	triad = tri.triad;
	return *this;
}
ostream& operator << (ostream& out, const Time& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Time& m)
{
	int f, s, t;

	cout << "Hour: "; cin >> f;
	cout << "Minute: "; cin >> s;
	cout << "Seconds: "; cin >> t;
	cout << endl;

	m.setF(f), m.setS(s), m.setT(t);
	return in;
}
string Format(int k)
{
	stringstream sout;
	if (k < 10)
		sout << "0";
	sout << k;
	return sout.str();
}
Time :: operator string () const
{
	stringstream sout;
	sout << Format(getF()) << " : " << Format(getS()) << " : " << Format(getT()) << endl;
	return sout.str();

}
void Time::setF(int value)
{
	if (value > -1 && value < 24)
		triad.setF(value);
	else
	{
		value = 0;
		triad.setF(value);
	}
}

void Time::setS(int value)
{

	if (value > -1 && value < 60)
		triad.setS(value);
	else
	{
		value = 0;
		triad.setS(value);
	}
}

void Time::setT(int value)
{
	if (value > -1 && value < 60)
		triad.setT(value);
	else
	{
		value = 0;
		triad.setT(value);
	}
}

bool operator ==(const Time& t1, const Time& t2)
{
	return (t1.triad.getF() == t2.triad.getF() && t1.triad.getS() == t2.triad.getS() && t1.triad.getT() == t2.triad.getT());
}
bool operator >(const Time& t1, const Time& t2)
{
	return (t1.triad.getF() > t2.triad.getF() ||
		t1.triad.getF() == t2.triad.getF() && t1.triad.getS() > t2.triad.getS() ||
		t1.triad.getF() == t2.triad.getF() && t1.triad.getS() == t2.triad.getS() && t1.triad.getT() > t2.triad.getT());
}
bool operator <(const Time& t1, const Time& t2)
{
	return (t1.triad.getF() < t2.triad.getF() ||
		t1.triad.getF() == t2.triad.getF() && t1.triad.getS() < t2.triad.getS() ||
		t1.triad.getF() == t2.triad.getF() && t1.triad.getS() == t2.triad.getS() && t1.triad.getT() < t2.triad.getT());
}
bool operator >=(const Time& t1, const Time& t2)
{
	return !(t1 < t2);
}
bool operator <=(const Time& t1, const Time& t2)
{
	return !(t1 > t2);
}
bool operator !=(const Time& t1, const Time& t2)
{
	return !(t1 == t2);
}
Time& Time::operator ++ ()
{
	triad++;
	return *this;
}
Time& Time::operator -- ()
{
	triad--;
	return *this;
}
Time Time::operator ++ (int)
{
	Time a(*this);
	triad++;
	return a;
}
Time Time::operator -- (int)
{
	Time a(*this);
	triad--;
	return a;
}

