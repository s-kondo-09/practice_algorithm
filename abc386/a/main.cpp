#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<int> cards(4);
    vector<int> cnt_num(14, 0);
    int x = 0, y = 0;
    rep(i, 4) {
        cin >> cards[i];
        cnt_num[cards[i]]++;
    }
    vector<int> cnt(5, 0);
    rep(i, 14) {
        cnt[cnt_num[i]]++;
    }

    bool flg = false;

    if (cnt[2] >= 2) flg = true;
    if (cnt[1] >= 1 && cnt[3] >= 1) flg = true;
    
    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}