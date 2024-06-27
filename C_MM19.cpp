#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int minute;
    while (cin >> minute) {
        double money = minute * 0.9;
        if (minute >= 1500) {
            money *= 0.79;
        } else if (minute > 800) {
            money *= 0.9;
        }
        cout << fixed << setprecision(1) << round(money * 10.0) / 10.0 << endl;
    }
    return 0;
}
