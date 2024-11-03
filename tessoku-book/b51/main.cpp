#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    stack<int> pos;
    rep(i, s.size()) {
        if (s[i] == '(') pos.push(i+1);
        else {
            cout << pos.top() << " " << i+1 << endl;
            pos.pop();
        }
    }
    return 0;
}