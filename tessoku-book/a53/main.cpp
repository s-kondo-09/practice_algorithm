#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> inventory;
    rep(i, q) {
        int query;
        cin >> query;
        if (query == 1) {
            int price;
            cin >> price;
            inventory.push(price);
        }
        else if (query == 2) {
            cout << inventory.top() << endl;
        }
        else {
            inventory.pop();
        }
    }
    return 0;
}