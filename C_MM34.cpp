#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int first = 1;
        for (int j = 1; j <= n; j++) {
            if (n % j == 0) {
                if (!first) {
                    cout << " ";
                } else {
                    first = 0;
                }
                cout << j;
            }
        }
        cout << endl;
    }
    return 0;
}
