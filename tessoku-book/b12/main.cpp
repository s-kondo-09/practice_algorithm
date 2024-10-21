#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    double left = 0, right = 1e6;
    while (left <= right) {
        double mid = (right + left) / 2;
        double ans = mid * mid * mid + mid;
        if (abs(ans - n) < 1e-4) {
            left = mid;
            break;
        }
        if (ans >= n) right = mid;
        else left = mid;
    }
    cout << left << endl;
    return 0;
}