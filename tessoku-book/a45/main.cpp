#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

char fusion(char card1, char card2) {
    if (card1 == 'W' && card2 == 'W') return 'W';
    if (card1 == 'B' && card2 == 'B') return 'R';
    if (card1 == 'R' && card2 == 'R') return 'B';
    if (card1 == 'W' && card2 == 'B') return 'B';
    if (card1 == 'W' && card2 == 'R') return 'R';
    if (card1 == 'B' && card2 == 'R') return 'W';
    swap(card1, card2);
    if (card1 == 'W' && card2 == 'B') return 'B';
    if (card1 == 'W' && card2 == 'R') return 'R';
    if (card1 == 'B' && card2 == 'R') return 'W';
    return ' ';
}

int main() {
    int n;
    char c;
    string A;
    cin >> n >> c >> A;
    rep(i,n-1) {
        A[i+1] = fusion(A[i], A[i+1]);
    }
    if (A[n-1] == c) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}