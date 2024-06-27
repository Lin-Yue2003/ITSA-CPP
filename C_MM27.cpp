#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (a == b) {
            cout << a << endl;
        } else {
            cout << (a + b) * (b - a + 1) / 2 << endl;
        }
    }
    return 0;
}
