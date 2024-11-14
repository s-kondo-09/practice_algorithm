#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    
    int ans;
    if (h == 1 || w == 1) ans = h * w;
    else ans = ((h + 1 ) / 2) * ((w + 1) / 2);
    cout << ans << endl;
    return 0;
}