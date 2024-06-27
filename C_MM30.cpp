#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        bool is_prime = true;
        int k = n - 1;
        for (; k >= 2 && is_prime; k--) {
            if (n % k == 0) 
                is_prime = false;
        }
        if (is_prime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
