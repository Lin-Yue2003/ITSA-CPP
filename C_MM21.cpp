#include <iostream>
using namespace std;

int main() {
    int a;
    long long total = 1;
    while (cin >> a) {
        for (; a >= 1; a--) {
            total *= a;
        }
        cout << total << endl;
        total = 1;
    }
    return 0;
}
