#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    
    set<string> names;
    rep(i, n) {
        string name;
        cin >> name;
        if (names.count(name)) continue;
        names.insert(name);
        cout << i + 1 << endl;
    }

    return 0;
}