#pragma once
#include<sstream>
#include<string> 

using namespace std;

#include "Triad.h"
class Time
{
private:
	Triad triad;
public:
	int getF() const { return triad.getF(); }
	int getS() const { return triad.getS(); }
	int getT() const { return triad.getT(); }
	Time(){}
	Time(int first, int second, int third);
	Time(const Time& tri);
	Time& operator = (const Time& tri);

	operator string () const;

	friend ostream& operator << (ostream& out, const Time& m);
	friend istream& operator >> (istream& in, Time& m);

	void setF(int value);
	void setS(int value);
	void setT(int value);

	Time& operator ++ ();
	Time& operator -- ();
	Time operator ++ (int);
	Time operator -- (int);

	friend bool operator ==(const Time& t1, const Time& t2);
	friend bool operator >(const Time& t1, const Time& t2);
	friend bool operator <(const Time& t1, const Time& t2);
	friend bool operator >=(const Time& t1, const Time& t2);
	friend bool operator <=(const Time& t1, const Time& t2);
	friend bool operator !=(const Time& t1, const Time& t2);

	/*string toString1() const;
	bool Equal();
	void Init1(int value1, int value2, int value3);
	void Read();
	void Display() const;*/
};


