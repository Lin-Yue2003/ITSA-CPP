#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int prime = 2;
        for (int i = n - 1; i >= 2; i--) {
            bool is_prime = true;
            for (int k = i - 1; k >= 2 && is_prime; k--) {
                if (i % k == 0) {
                    is_prime = false;
                }
            }
            if (is_prime) {
                prime = i;
                break;
            }
        }
        cout << prime << endl;
    }
    return 0;
}
