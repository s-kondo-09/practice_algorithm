    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    #define rep(i, n) for (int i = 0; i < (int)(n); i++)

    struct line {
        int from_x;
        int from_y;
        int to_x;
        int to_y;
    };

    int main() {
        int n, S, t;
        cin >> n >> S >> t;
        vector<line> L(n);
        rep(i,n) cin >> L[i].from_x >> L[i].from_y >> L[i].to_x >> L[i].to_y;
        int P[n];
        rep(i,n) P[i] = i;

        double ans = DBL_MAX;
        
        do{
            double dist = 0;
            // 描画にかかる時間
            rep(i,n) {
                int dx = L[i].to_x - L[i].from_x;
                int dy = L[i].to_y - L[i].from_y;
                double dist_draw = sqrt(dx*dx + dy*dy) / t;
                dist += dist_draw;
            }

            // 移動にかかる時間
            double sum_dist_move = DBL_MAX;
            for (int tmp = 0; tmp < (1 << n); tmp++) {
                bitset<6> s(tmp);
                //ビット全探索の処理
                double dist_can = 0;
                int dx, dy;
                if (s.test(0)) {
                    dx = L[P[0]].to_x;
                    dy = L[P[0]].to_y;
                } else {
                    dx = L[P[0]].from_x;
                    dy = L[P[0]].from_y;
                }
                dist_can += sqrt(dx*dx + dy*dy) / S;

                for (int i = 1; i < n; ++i) {
                    if (s.test(i) && s.test(i-1)) {
                        dx = L[P[i]].to_x - L[P[i-1]].to_x;
                        dy = L[P[i]].to_y - L[P[i-1]].to_y;
                    } else if (s.test(i) && (!s.test(i-1))) {
                        dx = L[P[i]].to_x - L[P[i-1]].from_x;
                        dy = L[P[i]].to_y - L[P[i-1]].from_y;
                    } else if ((!s.test(i)) && s.test(i-1)) {
                        dx = L[P[i]].from_x - L[P[i-1]].to_x;
                        dy = L[P[i]].from_y - L[P[i-1]].to_y;
                    } else {
                        dx = L[P[i]].from_x - L[P[i-1]].from_x;
                        dy = L[P[i]].from_y - L[P[i-1]].from_y;
                    }
                    double dist_move = sqrt(dx*dx + dy*dy) / S;
                    dist_can += dist_move;
                }
                sum_dist_move = min(sum_dist_move, dist_can);
            }
            dist += sum_dist_move;
            
            ans = min(ans, dist);
        } while(next_permutation(P, P+n));
        cout << fixed << setprecision(20);
        cout << ans << endl;
        return 0;
    }