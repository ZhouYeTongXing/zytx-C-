#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, s, l;
    cin >> n >> s >> l;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 注意：题目中给的 s 是 1-based（从1开始数），C++ 是从 0 开始，所以要减 1
    int pos = s - 1; 
    long long current_sum = 0; // 记录当前花费（用 long long 防止溢出）
    int merge_count = 0;       // 记录合并次数

    // 开始模拟。只要没超出限值，且数组元素大于 1 个，就一直合并
    while (a.size() > 1 && current_sum <= l) {
        // 防止 pos 越界
        pos = max(0, min(pos, (int)a.size() - 1));
        
        // 寻找较小的邻居进行合并（模拟往左或往右）
        if (pos > 0 && (pos == (int)a.size() - 1 || a[pos - 1] < a[pos + 1])) {
            // 与左边合并
            current_sum += a[pos - 1];
            a[pos] += a[pos - 1];
            a.erase(a.begin() + pos - 1);
            pos = pos - 1;
        } else {
            // 与右边合并
            current_sum += a[pos + 1];
            a[pos] += a[pos + 1];
            a.erase(a.begin() + pos + 1);
            // pos 保持不变，因为右边元素被删了，合并值现在在 pos 位置
        }
        merge_count++;
        
        // 检查花费是否超限
        if (current_sum > l) {
            cout << merge_count - 1 << endl; // 因为上一次合并导致了超限，所以要减 1
            return 0;
        }
    }
    
    // 如果全部都合并完了也没有超限
    cout << merge_count << endl;
    
    return 0;
}
