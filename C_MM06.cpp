#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a;
    while (cin >> a) {
        cout << fixed << setprecision(1) << round(a * 1.6 * 10.0) / 10.0 << endl;
    }
    return 0;
}
