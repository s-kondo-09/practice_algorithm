#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // input
    int h, w;
    cin >> h >> w;
    vector<vector<int>> A(h, vector<int>(w));
    rep(i, h) {
        rep(j, w) {
            cin >> A[i][j];
        }
    }

    // preprocess
    vector<int> sum_row(h);
    vector<int> sum_column(w);
    
    rep(i, h) {
        rep(j, w) {
            sum_row[i] += A[i][j];
            sum_column[j] += A[i][j];
        }
    }

    vector<vector<int>> ans(h, vector<int>(w));

    rep(i,h) {
        rep(j, w) {
            ans[i][j] = sum_row[i] + sum_column[j] - A[i][j];
        }
    }

    // output
    rep(i, h) {
        rep(j, w) {
            if (j) cout << " ";
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}