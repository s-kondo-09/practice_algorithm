#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    bool flg = false;
    int P[3] = {0, 1, 2};
    do {
        if (s[P[0]] == 'A' && s[P[1]] == 'B' && s[P[2]] == 'C') {
            flg = true;
            break;
        }
    } while(next_permutation(P, P+3));
    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}