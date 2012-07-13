#include "coord.h"
#include <cmath>
#include <iostream>
using namespace std;

double Coord::calc(void){
       double b = sqrt( pow( (x + 0), 2) + pow( (y + 0), 2) );
       return b;
}

void Coord::print(void){
	cout << "X = " << dec << x << endl;
	cout << "Y = " << dec << y << endl;
}

void Coord::set(double x, double y){
	this -> x = x;
	this -> y = y;
}
