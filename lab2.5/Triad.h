#pragma once
#include <iostream>	
#include <string>	
#include <iostream>

using namespace std;

class Triad
{
private:
	int first, second, third;
public:
	void setF(int value);
	void setS(int value);
	void setT(int value);
	Triad()
		:first(1), second(1), third(1) {}
	Triad(int first, int second, int third);
	Triad(const Triad& a);

	Triad& operator =(const Triad& a);
	operator string () const;

	friend ostream& operator << (ostream& out, const Triad& m);
	friend istream& operator >> (istream& in, Triad& m);
	//friend bool operator ==(Triad t1, Triad t2);
	friend bool operator >(const Triad& t1, const Triad& t2);
	//friend bool operator <(Triad t1, Triad t2);
	//friend bool operator >=(Triad t1, Triad t2);
	//friend bool operator <=(Triad t1, Triad t2);
	//friend bool operator !=(Triad t1, Triad t2);

	Triad& operator ++ ();
	Triad& operator -- ();
	Triad operator ++ (int);
	Triad operator -- (int);

	int getF() const { return first; }
	int getS() const { return second; }
	int getT() const { return third; }

	string toString() const;
	bool Equals(Triad t1, Triad t2);
	void Display(Triad g, Triad f) const;

};

