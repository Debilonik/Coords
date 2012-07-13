#include "coord.h"
#include <cmath>

double Coord::calc(void){
       double b = sqrt( pow(x, 2) + pow(y, 2));
       return b;
}
