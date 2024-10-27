#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int X, Y;
    cin >> X >> Y;
    vector<pair<int, int>> route;
    while (X >= 2 || Y >= 2) {
        route.push_back(make_pair(X, Y));
        if (X > Y) X -= Y;
        else Y -= X;
    }
    reverse(route.begin(), route.end());
    cout << route.size() << endl;
    rep(i,route.size()) {
        cout << route[i].first << " " << route[i].second << endl;
    }
    return 0;
}