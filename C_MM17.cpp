#include <iostream>
using namespace std;

#define larger(x, y) ((x) >= (y) ? 1 : 0)

int f(int a, int b) {
    if (a % b == 0) return b;
    return f(b, a % b);
}

void swap(int &a, int &b) {
    int temp = a; a = b; b = temp;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (!larger(a, b)) swap(a, b);
        cout << f(a, b) << endl;
    }
    return 0;
}
