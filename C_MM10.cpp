#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double c;
    while (cin >> c) {
        cout << fixed << setprecision(1) << round((c * 9 / 5 + 32) * 10.0) / 10.0 << endl;
    }
    return 0;
}
