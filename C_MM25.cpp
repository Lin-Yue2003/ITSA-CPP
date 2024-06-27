#include <iostream>
using namespace std;

int main() {
    int n, sum;
    while (cin >> n) {
        sum = 0;
        for (int i = 1; i <= n / 3; i++) {
            sum += 3 * i;
        }
        cout << sum << endl;
    }
    return 0;
}
