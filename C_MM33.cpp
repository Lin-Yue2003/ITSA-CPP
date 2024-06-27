#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        bool first = true;
        for (int i = 6; i < n; i++) {
            int sum = 0;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    sum += j;
                }
            }
            if (sum == i) {
                if (!first) {
                    cout << " ";
                } else {
                    first = false;
                }
                cout << i;
            }
        }
        cout << endl;
    }
    return 0;
}
