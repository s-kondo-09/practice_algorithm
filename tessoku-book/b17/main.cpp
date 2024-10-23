#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    vector<int> dp(n, 0);
    vector<int> route;

    // dynamic programming
    for (int i = 1; i < n; ++i) {
        if (i == 1) dp[i] = dp[i-1] + abs(h[i-1] - h[i]);
        else dp[i] = min(dp[i-1] + abs(h[i-1] - h[i]), dp[i-2] + abs(h[i-2] - h[i]));
    }

    // find route
    int place = n - 1;
    while (true) {
        route.push_back(place);
        if (place == 0) break;

        if (dp[place] == dp[place-1] + abs(h[place-1] - h[place])) place--;
        else place -= 2;
    }

    reverse(route.begin(), route.end());

    cout << route.size() << endl;
    rep(i,route.size()) {
        if (i) cout << " ";
        cout << route[i] + 1;  // 1-indexed
    }
    cout << endl;
    return 0;
}