#include <iostream>
using namespace std;
//#include <cmath>


int main() {
    double x, a, b, c, d;
    cin >> x;
    a = x*x; // x^2
    b = a * a; // x^4
    c = b * a; // x ^6
    d = x * x * x;
    double y = c - 3 * d * a + 2 *  b - d + 4 * a - 13 * x + 2;
    cout << y << endl;
    return 0;
}
