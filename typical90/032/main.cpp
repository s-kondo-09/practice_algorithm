#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    rep(i, n) {
        rep(j, n) {
            cin >> A[i][j];
        }
    }

    int m;
    cin >> m;
    vector<vector<int>> hate(n);
    rep(i, m) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        hate[x].push_back(y);
        hate[y].push_back(x);
    }

    int P[n];
    rep(i, n) P[i] = i;
    int min_ans = INT_MAX;

    do {
        int ans_op = 0;
        bool flg = false;
        rep(i, n-1) {
            if (find(hate[P[i]].begin(), hate[P[i]].end(), P[i+1]) !=  hate[P[i]].end()) {
                flg = true;
            }
        }
         
        if (flg) continue;

        rep(i, n) {
            ans_op += A[P[i]][i];
        }
        min_ans = min(min_ans, ans_op);
    } while(next_permutation(P, P+n));

    if (min_ans == INT_MAX) cout << -1 << endl;
    else cout << min_ans << endl;

    return 0;
}