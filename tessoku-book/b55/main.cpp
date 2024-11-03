#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    set<int> table1;
    set<int> table2;
    rep(i, q) {
        int query, x;
        cin >> query >> x;
        
        if (query == 1) {
            table1.insert(x);
            table2.insert(-x);
        }
        else {
            auto itr1 = table1.lower_bound(x);
            auto itr2 = table2.lower_bound(-x);
            if (itr1 == table1.end() && itr2 == table2.end()) {
                cout << "-1" << endl;
            }
            else if (itr1 == table1.end()) {
                cout << abs(x + *itr2) << endl;
            }
            else if (itr2 == table2.end()) {
                cout << abs(x - *itr1) << endl;
            }
            else {
                cout << min(abs(x - *itr1), abs(x + *itr2)) << endl;
            }
        }
    }
    return 0;
}