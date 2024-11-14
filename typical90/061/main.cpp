#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    deque<int> dq;

    rep(i, q) {
        int query, x;
        cin >> query >> x;

        if (query == 1) dq.push_front(x);
        else if (query == 2) dq.push_back(x);
        else {
            x--;
            cout << dq[x] << endl;
        }
    }

    return 0;
}