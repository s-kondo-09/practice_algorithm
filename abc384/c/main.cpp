#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<int> scores(5);
    rep(i, 5) cin >> scores[i];

    string NAME = "ABCDE";
    vector<pair<int, string>> ranking;

    for (int tmp = 1; tmp < (1 << 5); ++tmp) {
	    bitset<5> s(tmp);
        int score = 0;
        string name = "";
        rep(i, 5) {
            if (s.test(i)) {
                name += NAME[i];
                score -= scores[i];
            }
        }
        ranking.push_back(make_pair(score, name));
	}

    sort(ranking.begin(), ranking.end());

    rep(i, (int)ranking.size()) {
        cout << ranking[i].second << endl;
    }

    return 0;
}