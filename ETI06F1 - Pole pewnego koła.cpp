#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double r, d, s;
    cin >> r;
    cin >> d;

    double nr = 0;

    nr = sqrt(-(d/2)*(d/2) + r*r);

    s = M_PI * nr * nr;

    cout << s;

    return 0;
}

