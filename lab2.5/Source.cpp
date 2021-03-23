#include <iostream>	
#include "Time.h"
#include "Triad.h"

using namespace std;

int main()
{
	Time a(1, 2, 3), b(4, 6, 2);
	cin >> a;
	cout << "a    " << a;
	cout << "++a  " << ++a;
	cout << "--a  " << --a;
	cout << "a--  " << a--;
	cout << "a    " << a;
	cout << "a++  " << a++;
	cout << "a    " << a << endl;

	bool t = a == b;
	cout << "a == b    " << t << endl;
	t = a > b;
	cout << "a > b     " << t << endl;
	t = a < b;
	cout << "a < b     " << t << endl;
	

	return 0;
}