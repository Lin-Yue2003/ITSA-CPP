#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int sum = 0, temp = n;
        sum += (temp / 100) * (temp / 100) * (temp / 100);
        temp %= 100;
        sum += (temp / 10) * (temp / 10) * (temp / 10);
        temp %= 10;
        sum += temp * temp * temp;
        if (sum == n) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
