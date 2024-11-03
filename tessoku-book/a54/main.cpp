#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    map<string, int> grade;
    rep(i, q) {
        int query;
        cin >> query;
        if (query == 1) {
            string name;
            int score;
            cin >> name >> score;
            grade[name] = score;
        }
        else {
            string name;
            cin >> name;
            cout << grade[name] << endl;
        }
    }
    return 0;
}