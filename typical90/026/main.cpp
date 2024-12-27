    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    using Graph = vector<vector<int>>;
    #define rep(i, n) for (int i = 0; i < (int)(n); i++)

    // n: 頂点数
    int n;
    vector<int> col;
    Graph G;

    void dfs(int pos, int cur) {
        // col[i]は頂点iの色 (1 or -1)
        col[pos] = cur;
        for (int i: G[pos]) {
            if (col[i] == 0) {
                dfs(i, -cur);
            }
        }
    }

    int main() {
        // input
        cin >> n;
        col.resize(n, 0);
        G.resize(n);
        rep(i, n-1) {
            int a, b;
            cin >> a >> b;
            a--; b--;
            G[a].push_back(b);
            G[b].push_back(a);
        }

        // 塗り分け
        dfs(0, 1);

        // 多い方の色を判定
        int cnt1 = 0, cnt2 = 0;
        rep(i, n) {
            if (col[i] == 1) cnt1++;
            else cnt2++;
        }
        
        int most;
        if (cnt1 <= cnt2) most = -1;
        else most = 1;

        // 多い方の色で塗られた頂点をn/2だけ出力
        int cnt = 0;
        rep(i, n) {
            if (col[i] == most) {
                if (cnt) cout << " ";
                cout << i + 1;
                cnt++;
            }
            
            if (cnt == n / 2) break;
        }
        cout << endl;

        return 0;
    }