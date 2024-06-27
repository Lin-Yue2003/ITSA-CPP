#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    float c = 100 - 30 * 2.54;
    while (cin >> a) {
        cout << (int)ceil(a * 100.0 / c) << endl;
    }
    return 0;
}
