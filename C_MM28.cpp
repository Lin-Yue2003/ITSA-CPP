#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        bool first = true;
        for (int i = 35; i <= n; i += 35) {
            if (!first) {
                cout << " ";
            } else {
                first = false;
            }
            cout << i;
        }
        if (n >= 35) {
            cout << endl;
        }
    }
    return 0;
}
