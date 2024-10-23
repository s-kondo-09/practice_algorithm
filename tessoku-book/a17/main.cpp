#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for (int i = 1; i < n; ++i) cin >> A[i];
    for (int i = 2; i < n; ++i) cin >> B[i];

    vector<int> dp(n, 0);
    for (int i = 1; i < n; ++i) {
        if (i == 1) dp[i] = dp[i-1] + A[i];
        else dp[i] = min(dp[i-1] + A[i], dp[i-2] + B[i]);
    }
    
    vector<int> route;
    int place = n-1;
    while (true) {
        route.push_back(place);
        if (place == 0) break;

        if (dp[place] == dp[place-1] + A[place]) place--;
        else place -= 2;
    }

    reverse(route.begin(), route.end());
    cout << route.size() << endl;
    rep(i,route.size()) {
        if (i) cout << " ";
        cout << route[i] + 1;
    }
    cout << endl;
    return 0;
}