#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> B(n);
    int ans = 0;
    rep(i,n) cin >> A[i] >> B[i];
    for (int a = 1; a <= 100; ++a) {
        for (int b = 1; b <= 100; ++b) {
            int ans_can = 0;
            rep(i,n) {
                if (A[i] >= a && A[i] <= a+k && B[i] >= b && B[i] <= b+k) ans_can++;
            }
            ans = max(ans, ans_can);
        }
    }
    cout << ans << endl;
    return 0;
}