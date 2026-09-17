#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// 定义点的结构体
struct Point {
    long long x, y;
    char dir;
};

int main() {
    // 优化输入输出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<Point> points(N);
    for (int i = 0; i < N; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    string S;
    cin >> S;
    for (int i = 0; i < N; ++i) {
        points[i].dir = S[i];
    }

    // 排序：优先按 Y 坐标升序排列；如果 Y 相同，再按 X 坐标升序排列
    sort(points.begin(), points.end(), [](const Point& a, const Point& b) {
        if (a.y != b.y) return a.y < b.y;
        return a.x < b.x;
    });

    // 标记当前Y坐标组内是否遇到过向右走的人
    bool seen_R = false;
    long long current_y = points[0].y;

    for (int i = 0; i < N; ++i) {
        // 如果Y坐标变了，说明进入了新的水平线，重置标记
        if (points[i].y != current_y) {
            current_y = points[i].y;
            seen_R = false;
        }

        if (points[i].dir == 'R') {
            // 遇到了向右走的人
            seen_R = true;
        } else if (points[i].dir == 'L') {
            // 遇到了向左走的人，且之前已经遇到了向右走的人（左边向右，右边向左）
            if (seen_R) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    // 如果遍历完没有找到碰撞组合
    cout << "No" << endl;
    return 0;
}
