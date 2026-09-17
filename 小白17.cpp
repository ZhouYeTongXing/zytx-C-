#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << '\n';
    bool first = true;
    for (int num : s) {
        if (!first) cout << ' ';
        cout << num;
        first = false;
    }
    return 0;
}
