#include <iostream>
using namespace std;

int main() {
    int hr[2], min[2], minute, money = 0;
    cin >> hr[0] >> min[0] >> hr[1] >> min[1];
    minute = (hr[1] - hr[0]) * 60 + min[1] - min[0];
    if (minute > 4 * 60) {
        money += (minute - 4 * 60) / 30 * 60;
        money += 30 * 4 + 40 * 4;
    } else if (minute > 2 * 60) {
        money += (minute - 2 * 60) / 30 * 40;
        money += 30 * 4;
    } else {
        money += minute / 30 * 30;
    }
    cout << money << endl;
    return 0;
}
