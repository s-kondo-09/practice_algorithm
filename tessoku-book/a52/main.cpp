#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    queue<string> row;
    rep(i, q) {
        int query;
        cin >> query;
        if (query == 1) {
            string name;
            cin >> name;
            row.push(name);
        }
        else if (query == 2) {
            cout << row.front()  << endl;
        }
        else {
            row.pop();
        }
    }
    return 0;
}