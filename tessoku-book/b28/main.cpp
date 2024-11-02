#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> a(n+1);
    a[1] = 1; a[2] = 1;  // initial condition
    for (int i = 3; i <= n; ++i) {
        a[i] = a[i-1] + a[i-2];
        a[i] %= 1000000007;
    }

    cout << a[n] << endl;
    return 0;
}