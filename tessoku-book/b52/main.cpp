#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, x;
    string A;
    cin >> n >> x >> A;
    x--;  // 0-indexed
    queue<int> balls;
    balls.push(x);
    A[x] = '@';
    while(!balls.empty()) {
        int pos = balls.front();
        balls.pop();
        if (A[pos-1] == '.') {
            A[pos-1] = '@';
            balls.push(pos-1);
        }
        if (A[pos+1] == '.') {
            A[pos+1] = '@';
            balls.push(pos+1);
        }
    }
    cout << A << endl;
    return 0;
}