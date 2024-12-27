#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> max_index;
    map<int, int> type;
    rep(i, n) cin >> A[i];

    int ans = 0;
    int r = 0, cnt = 0;
    rep(l, n) {
        while (r < n) {
            if (type[A[r]] == 0 && cnt == k) break;
            if (type[A[r]] == 0) cnt++;
            type[A[r]]++;
            r++;
        }
        ans = max(ans, r - l);
        if (type[A[l]] == 1) cnt--;
        type[A[l]]--;
    }

    cout << ans << endl;

    return 0;
}