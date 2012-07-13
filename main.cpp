#include <iostream>
#include "coord.h"

using namespace std;

int main(int argc, char *argv[])
{
	double y, x;
	Coord c;
	cout << "Enter coords please (x y): " << endl;
	cin >> x >> y;
	c.set (x, y);
	c.print();
	double res = c.calc();
	cout << "Result: " << dec << res << endl;
	return 0;
}
