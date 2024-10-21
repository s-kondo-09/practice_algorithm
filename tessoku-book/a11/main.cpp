#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> A(n);
    rep(i,n) cin >> A[i];
    int left = 0, right = n-1;
    int ans;
    while (left <= right) {
        int mid = (right + left) / 2;
        if (A[mid] > x) {
            right = mid - 1;
        } else if (A[mid] < x) {
            left = mid + 1;
        } else {
            ans = mid;
            break;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}