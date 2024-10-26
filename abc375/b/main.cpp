#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<double> x(n+2);
    vector<double> y(n+2);
    x[0] = 0;
    y[0] = 0;
    x[n+1] = 0;
    y[n+1] = 0;
    rep(i,n) {
        cin >> x[i+1];
        cin >> y[i+1];
    }
    double ans = 0;
    rep(i,n+1) {
        ans += sqrt((x[i+1] - x[i])*(x[i+1] - x[i]) + (y[i+1] - y[i])*(y[i+1] - y[i]));
    }
    cout << fixed << setprecision(20);
    cout << ans << endl;
    return 0;
}