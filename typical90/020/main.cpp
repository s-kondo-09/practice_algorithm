#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll a, c;
    int b;
    cin >> a >> b >> c;
    
    ll pow = 1;
    rep(i, b) {
        pow *= c;
    }
    if (a < pow) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}