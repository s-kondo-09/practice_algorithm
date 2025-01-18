#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll x;
    cin >> x;
    ll fact = 1;
    for (int n = 1; n <= 23; n++) {
        fact *= n * 1LL;
        if (fact == x) {
            cout << n << endl;
            break;
        }
    }
    return 0;
}