#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll g = gcd(gcd(a, b), c);
    cout << (a / g - 1) + (b / g - 1) + (c / g - 1) << endl;
    return 0;
}