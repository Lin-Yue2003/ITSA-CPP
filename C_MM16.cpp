#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b) {
        c = a * a + b * b;
        if (c <= 100 * 100) {
            cout << "inside" << endl;
        } else {
            cout << "outside" << endl;
        }
    }
    return 0;
}
