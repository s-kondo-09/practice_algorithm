#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    string S;
    cin >> n >> k >> S;
    vector<string> S_parts;

    int mode = int(S[0] - '0');
    int place = 0;
    S_parts.push_back(to_string(mode));
    for (int i = 1; i < n; i++) {
        if ((mode == 0 && S[i] == '1') || (mode == 1 && S[i] == '0')) {
            if (mode == 0) mode = 1;
            else mode = 0;

            S_parts.push_back(to_string(mode));
            place++;
        }
        else {
            S_parts[place] += S[i];
        }
    }

    int idx_insert = 0, idx_k = 0;
    int cnt_insert = 0, cnt_k = 0;
    rep(i, (int)S_parts.size()) {
        if (S_parts[i][0] == '1') cnt_insert++;
        if (cnt_insert == k - 1) {
            idx_insert = i;
            break;
        }
    }

    rep(i, (int)S_parts.size()) {
        if (S_parts[i][0] == '1') cnt_k++;
        if (cnt_k == k) {
            idx_k = i;
            break;
        }
    }

    string str_insert = S_parts[idx_k];
    S_parts.erase(S_parts.begin() + idx_k);
    S_parts.insert(S_parts.begin() + idx_insert, str_insert);

    rep(i, (int)S_parts.size()) {
        cout << S_parts[i];
    }
    cout << endl;
    
    return 0;
}