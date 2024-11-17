#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    vector<int> A;
    
    bool reading = false;
    int cnt = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == '-') cnt++;

        if (s[i] == '|') {
            A.push_back(cnt);
            cnt = 0;
        }

    }

    rep(i, (int)A.size()) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;

    return 0;
}