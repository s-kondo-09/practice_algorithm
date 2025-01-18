#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> H(n);
    rep(i, n) {
        cin >> H[i];
    }
    int ans = 1;

    rep(i, n) {  // i番目以上から選択
        int height = 0;
        for (int j = 1; j < n; j++) {  // j個おきに選択
            int cnt = 0;
            for (int k = i; k < n; k+= j) {
                if (H[k] != height) {  // 違う高さが選ばれたらリセット
                    cnt = 0;
                    height = H[k];
                }
                cnt++;
                ans = max(ans, cnt);
            }
        }
    }

    cout << ans << endl;

    return 0;
}