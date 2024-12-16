#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    char c1, c2;
    string S;
    cin >> n >> c1 >> c2 >> S;

    rep(i, n) {
        if (S[i] != c1) {
            S[i] = c2;
        }
    }

    cout << S << endl;

    return 0;
}