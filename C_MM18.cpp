#include <iostream>
using namespace std;

int main() {
    int a;
    while (cin >> a) {
        if (a >= 0) cout << "0";
        else cout << "1";
        
        for (int i = 6; i >= 0; i--) {
            int b = 1 << i;
            ((a & b) == 0) ? cout << "0" : cout << "1";
        }
        
        cout << endl;
    }
    return 0;
}
