#include <iostream>
using namespace std;

int main() {
    long long int a, b, c, d;
    while (cin >> a >> b) {
        cout << a << "+" << b << "=" << a + b << endl;
        cout << a << "*" << b << "=" << a * b << endl;
        cout << a << "-" << b << "=" << a - b << endl;
        c = a % b;
        if (c >= 0)
            cout << a << "/" << b << "=" << a / b << "..." << a % b << endl;
        else
            cout << a << "/" << b << "=" << a / b - 1 << "..." << c + b << endl;
    }
    return 0;
}
