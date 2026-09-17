#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    int minVal = 1001, maxVal = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        minVal = min(minVal, A[i]);
        maxVal = max(maxVal, A[i]);
    }

    // 丢失的数只可能出现在 [minVal-1, maxVal+1] 范围内
    for (int lost = minVal - 1; lost <= maxVal + 1; ++lost) {
        vector<int> B = A;
        B.push_back(lost);
        sort(B.begin(), B.end());

        bool ok = true;
        for (int i = 1; i < (int)B.size(); ++i) {
            if (B[i] != B[i-1] + 1) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << lost << endl;
            return 0;
        }
    }
    return 0;
}
