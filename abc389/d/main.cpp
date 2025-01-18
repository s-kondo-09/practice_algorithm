#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 格子点が円の内部にある条件 (小数が現れないように両辺を4倍)
bool in(ll r, ll a, ll b) {
  return (2 * a + 1) * (2 * a + 1) + (2 * b + 1) * (2 * b + 1) <= 4 * r * r;
}

int main() {
  ll r;
  cin >> r;
  ll cnt = 0;
  ll up = r - 1;
  ll ans = (r - 1) * 4 + 1;  // 軸上にある格子点の数を最初に入れておく
  for (ll x = 1; in(r, x, 1); x++) {
    while(!in(r, x, up)) {
      --up;
    }
    cnt += up;
  }
  ans += cnt * 4;  // 第1象限のみ計算して4倍する
  cout << ans << endl;
  return 0;
}