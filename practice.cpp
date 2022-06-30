#include <iostream>
#include <math.h>

using namespace std;

int quadraticEquation(int a, int b, int c) {
    int x = (-b +- sqrt(pow(b,2) - (4*a*c)))/(2*a);

    cout << x;
    return 0;
}

int main() {
    quadraticEquation(1,2,3);
}