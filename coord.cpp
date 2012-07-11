#include "coord.h"
#include <cmath>

double Coord::calc(void){
       double b = sqrt( x*x + y*y);
       return b;
}
