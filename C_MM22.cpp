#include <iostream>
#include <vector>
using namespace std;

struct Pair {
    int x, i, len;
};

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> x(m);
    vector<int> end(m), start(m);
    vector<vector<int>> len(m, vector<int>(100));

    for (int i = 0; i < m; i++)
        cin >> x[i];

    vector<int> min(100, -1);
    int cur_n = 0;

    for (int i = 0; i < m; i++) {
        end[i] = x[i] - 1;
        for (int j = 0; j < x[i]; j++) {
            cur_n++;
            cin >> len[i][j];
        }
    }

    vector<Pair> stack(100);
    int top = -1;

    while (cur_n > n) {
        int min_l = 101, min_x = -1;
        for (int j = 0; j < m; j++) {
            if (end[j] >= 0 && len[j][end[j]] < min_l) {
                min_l = len[j][end[j]];
                min_x = j;
                cout << "update min_x = " << min_x << " min_l = " << min_l << endl;
            }
        }
        if (min_x == -1) break;
        stack[++top] = {min_x, end[min_x]--, min_l};
        cout << "delete " << min_x << ", end[" << min_x << "] = " << end[min_x] << endl;
        cur_n--;
    }

    for (; top >= 0; top--) {
        int x = stack[top].x;
        int i = stack[top].i;
        int length = stack[top].len;
        if (i == end[x] + 1) {
            for (int j = 0; j < m; j++) {
                if (j != x && end[j] >= 0 && len[j][end[j]] < length) {
                    cout << "delete " << j << "[" << end[j] << "] add " << x << "[" << i << "]" << endl;
                    stack[top] = {j, end[j], len[j][end[j]]};
                    end[j]--; end[x]++; top++;
                    break;
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = end[i]; j >= 0; j--) {
            sum += len[i][j];
        }
    }
    cout << sum << endl;

    bool first = true;
    for (int i = 0; i < m; i++) {
        if (end[i] >= 0) {
            if (!first) cout << " ";
            else first = false;
            cout << "(" << i + 1 << "," << end[i] + 1 << ")";
        }
    }

    return 0;
}
