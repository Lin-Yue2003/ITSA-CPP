#include <iostream>
using namespace std;

int main() {
    int a;
    while (cin >> a) {
        if (a < 31) {
            cout << (1 << a) << endl;
        } else {
            cout << "Value of more than 31" << endl;
        }
    }
    return 0;
}
