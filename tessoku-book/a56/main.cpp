#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
ll MOD = 998244353;

vector<ll> H(200001);
vector<ll> Power100(200001);

ll Hash(int l, int r) {
    ll val = H[r] - (H[l-1] * Power100[r - l + 1] % MOD);
    if (val < 0) val += MOD;
    return val;
}

int main() {
    int n, q;
    string S;
    cin >> n >> q >> S;
    vector<ll> T(n+1);  // Sの各文字を数字に置き換えた配列 (a~z: 1~26)
    
    for (int i = 1; i <= n; ++i) T[i] = S[i-1] - 'a' + 1;

    // 100のn乗を先に計算する
    Power100[0] = 1;
    for (int i = 1; i <= n; ++i) Power100[i] = 100LL * Power100[i-1] % MOD;

    H[0] = 0;  // 部分文字列(0, 0)のハッシュ値は0
    for (int i = 1; i <= n; ++i) H[i] = (100LL * H[i-1] + T[i]) % MOD;  // 部分文字列(0, i)のハッシュ値を計算する

    rep(i, q) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll hash1 = Hash(a, b);
        ll hash2 = Hash(c, d);
        if (hash1 == hash2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}