#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    for (int i = 9; i >= 0; --i) {
        cout << n / (1 << i) % 2;
    }
    cout << endl;
    return 0;
}