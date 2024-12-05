#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    deque<int> A(n);
    rep(i, n) {
        cin >> A[i];
    }

    rep(i, q) {
        int T, x, y;
        cin >> T >> x >> y;
        x--; y--;

        if (T == 1) {
            swap(A[x], A[y]);       
        }
        else if (T == 2) {
            A.push_front(A.back());
            A.pop_back();
        }
        else {
            cout << A[x] << endl;
        }
    }

    return 0;
}