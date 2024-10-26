#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<char> H(q);
    vector<int> T(q);
    rep(i,q) {
        cin >> H[i] >> T[i];
        T[i]--;  // 0-indexed
    }
    int Lnow = 0, Rnow = 1;
    int cnt = 0;
    rep(i,q) {
        if (H[i] =='R') {
            int cnt_can1 = 0, cnt_can2 = 0;
            int Rnow1 = Rnow, Rnow2 = Rnow;
            while (true) {
                if (Rnow1 == T[i]) break;  
                cnt_can1++;
                Rnow1++;
                if (Rnow1 > n-1) {
                    Rnow1 -= n;
                }
                if (Rnow1 == Lnow) {
                    cnt_can1 = 1000;
                    break;
                }
                if (Rnow1 == T[i]) break;
            }
            while (true) {
                if (Rnow2 == T[i]) break;
                cnt_can2++;
                Rnow2--;
                if (Rnow2 < 0) {
                    Rnow2 += n;
                }
                if (Rnow2 == Lnow) {
                    cnt_can2 = 1000;
                    break;
                }
                if (Rnow2 == T[i]) break;
            }
            cnt += min(cnt_can1, cnt_can2);
            Rnow = T[i];
        }
        else if (H[i] =='L') {
            int cnt_can1 = 0, cnt_can2 = 0;
            int Lnow1 = Lnow, Lnow2 = Lnow;
            while (true) {
                if (Lnow1 == T[i]) break;
                cnt_can1++;
                Lnow1++;
                if (Lnow1 > n-1) {
                    Lnow1 -= n;
                }
                if (Lnow1 == Rnow) {
                    cnt_can1 = 1000;
                    break;
                }
                if (Lnow1 == T[i]) break;
            }
            while (true) {
                if (Lnow2 == T[i]) break;
                cnt_can2++;
                Lnow2--;
                if (Lnow2 < 0) {
                    Lnow2 += n;
                }
                if (Lnow2 == Rnow) {
                    cnt_can2 = 1000;
                    break;
                }
                if (Lnow2 == T[i]) break;
            }
            cnt += min(cnt_can1, cnt_can2);
            Lnow = T[i];
        }
    }
    cout << cnt << endl;
    return 0;
}