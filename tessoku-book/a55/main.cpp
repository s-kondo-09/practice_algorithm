#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    set<int> table;
    rep(i, q) {
        int query, x;
        cin >> query >> x;

        if (query == 1) table.insert(x);
        else if (query == 2) table.erase(x);
        else {
            auto itr = table.lower_bound(x);
            if (itr == table.end()) cout << "-1" << endl;
            else cout << *itr << endl;
        }
    }
    return 0;
}