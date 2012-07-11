
#include <iostream>
#include "coord.h"

using namespace std;

int main(int argc, char *argv[])
{
    double y, x;
    Coord c;
    cout << "Enter coords please: " << endl;
    cin >> y >> x;
    double res = c.calc();
    cout << dec << res << endl;
    return 0;
}
