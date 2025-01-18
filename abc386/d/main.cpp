#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct MyStruct {
    int x;      // 最初の整数
    int y;      // 2番目の整数
    char color;     // 文字

    // 比較演算子を定義（辞書順）
    bool operator<(const MyStruct& other) const {
        return std::tie(x, y, color) < std::tie(other.x, other.y, other.color);
    }

    bool operator==(const MyStruct& other) const {
        return std::tie(x, y, color) == std::tie(other.x, other.y, other.color);
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<MyStruct> occupied(m);
    rep(i, m) {
        cin >> occupied[i].x >> occupied[i].y >> occupied[i].color;
    }

    bool flg = true;

    map<int, char> color;
    sort(occupied.begin(), occupied.end());
    int min_y = INT_MAX;
    rep(i, m) {
        if (occupied[i].color == 'W') min_y = min(min_y, occupied[i].y);
        else {
            if (occupied[i].y >= min_y) flg = false;
        }
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}