#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> B(n);
    vector<int> vec(2*n);
    rep(i, n) {
        cin >> A[i] >> B[i];
        vec.push_back(A[i] - B[i]);
        vec.push_back(B[i]);
    }

    ll ans = 0;

    sort(vec.begin(), vec.end(), greater<int>());
    
    rep(i, k) ans += vec[i];

    cout << ans << endl;

    return 0;
}