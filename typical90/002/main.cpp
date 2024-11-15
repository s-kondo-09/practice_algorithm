#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;

    vector<string> ans;

    for (int tmp = 0; tmp < (1 << n); ++tmp) {
	    bitset<20> s(tmp);

	    //ビット全探索の処理
        string bracket;
        int cnt1 = 0, cnt2 = 0;
        bool flg = true;
        rep(i, n) {
            if (s.test(i)){
                bracket += '('; 
                cnt1++; 
            }
            else {
                bracket += ')';
                cnt2++;
            }
            if (cnt1 < cnt2) flg = false;
        }

        if (flg && (cnt1 == cnt2)) {
            ans.push_back(bracket);
        }
        
	}

    sort(ans.begin(), ans.end());
    rep(i, ans.size()) {
        cout << ans[i] << endl;
    }
    return 0;
}