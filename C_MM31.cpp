#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 6 == 0 && i % 12 != 0) {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
