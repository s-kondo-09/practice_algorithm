#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    double t, l, x, y;
    cin >> t >> l >> x >> y;

    double pi = 3.1415926535897932384626;

    int q;
    cin >> q;

    rep(i, q) {
        double e;
        cin >> e;
        double omega = 2.0 * pi / t;
        double my_y = (l/2.0) * cos(-omega*e - pi/2.0);
        double my_z = (l/2.0) * sin(-omega*e - pi/2.0) + l/2.0;
        double dict = sqrt(x*x + (my_y - y)*(my_y - y) + my_z*my_z);
        double ans = asin(my_z / dict);
        ans *= 180.0 / pi;
        cout << fixed << setprecision(12);
        cout << ans << endl;
    }

    return 0;
}