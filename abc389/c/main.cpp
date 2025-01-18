#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    deque<ll> snakes;
    deque<ll> snakes_len;
    ll head = 0;
    ll head_minus = 0;
    rep(i, q) {
        int query;
        cin >> query;
        if (query == 1) {
            ll l;
            cin >> l;
            snakes.push_back(l + head);
            snakes_len.push_back(l);
            head += l;
        }
        else if (query == 2) {
            head_minus += snakes_len.front();
            snakes.pop_front();
            snakes_len.pop_front();
        }
        else {
            int k;
            cin >> k;
            k--;
            ll ans = 0;
            if (k != 0) {
                ans = snakes[k-1] - head_minus;
            }
            cout << ans << endl;
        }
    }

    return 0;
}