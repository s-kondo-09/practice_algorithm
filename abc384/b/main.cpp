#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, r;
    cin >> n >> r;
    vector<int> D(n);
    vector<int> A(n);

    rep(i, n) cin >> D[i] >> A[i];

    int rating = r;

    rep(i, n) {
        if (D[i] == 1) {
            if (rating >= 1600 && rating <= 2799) {
                rating += A[i];
            }
        }
        else {
            if (rating >= 1200 && rating <= 2399) {
                rating += A[i];
            }
        }
    }

    cout << rating << endl;

    return 0;
}