#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int hr, base_money;
    while (cin >> hr >> base_money) {
        double money = 0.0;
        if (hr > 120) {
            money += (hr - 120) * base_money * 1.66;
            hr = 120;
        }
        if (hr > 60) {
            money += (hr - 60) * base_money * 1.33;
            hr = 60;
        }
        money += hr * base_money;
        
        cout << fixed << setprecision(1) << round(money * 10.0) / 10.0 << endl;
    }

    return 0;
}
