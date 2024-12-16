#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, d;
    string s;
    cin >> n >> d >> s;

    int idx = 1;
    while (idx <= d) {
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '@') {
                s[i] = '.';
                idx++;
                break;
            }
        }
    }

    cout << s << endl;

    return 0;
}