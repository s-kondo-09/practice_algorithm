#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string n;
    cin >> n;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    rep(i, (int)n.length()) {
        if (n[i] == '1') cnt1++;
        if (n[i] == '2') cnt2++;
        if (n[i] == '3') cnt3++;
    }

    if (cnt1 == 1 && cnt2 == 2 && cnt3 == 3) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}