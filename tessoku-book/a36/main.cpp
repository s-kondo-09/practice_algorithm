#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    k -= 2 * n - 2;
    if (k < 0) cout << "No" << endl;
    else if (k % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}