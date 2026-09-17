#include <iostream>
using namespace std;

int main() {
    int t, l, c;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        cin >> l >> c;
        for (int i = 0; i < l; ++i) {
            for (int j = 0; j < c; ++j) {
                if (i == 0 || i == l - 1 || j == 0 || j == c - 1)
                    cout << '*';
                else
                    cout << '.';
            }
            cout << endl;
        }
        if (test != t - 1) cout << endl;
    return 0;
}
}
