#include <iostream>
using namespace std;

int main() {
    int t, l, c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> l >> c;
        for (int j = 0; j < l; j++) {
            for (int k = 0; k < c; k++) {
                // 根据行列和决定输出 '*' 还是 '.'
                if ((j + k) % 2 == 0)
                    cout << '*';
                else
                    cout << '.';
            }
            cout << endl;
        }
        // 每个测试用例之间空一行（最后一个不空）
        if (i != t - 1) cout << endl;
    }
    return 0;
}
