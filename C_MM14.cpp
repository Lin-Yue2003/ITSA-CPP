#include <iostream>
using namespace std;

int main() {
    long long int a;
    while (cin >> a) {
        cout << a / (24 * 60 * 60) << " days" << endl;
        a %= (24 * 60 * 60);
        cout << a / (60 * 60) << " hours" << endl;
        a %= (60 * 60);
        cout << a / 60 << " minutes" << endl;
        a %= 60;
        cout << a << " seconds" << endl;
    }
    return 0;
}
