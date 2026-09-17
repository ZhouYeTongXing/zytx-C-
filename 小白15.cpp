#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        string name;
        cin >> name;

        int sum = 0;
        for (int j = 0; j < name.size(); j++) {
            sum += (int)name[j];
        }

        cout << "Case " << i << ": " << (sum % 3 == 0 ? "Yes" : "No") << '\n';
    }

    return 0;
}
