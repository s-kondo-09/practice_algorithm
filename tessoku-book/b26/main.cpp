#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<bool> prime(n+1, true);
    prime[0] = false; prime[1] = false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }  
    int ans = 0;
    rep(i,n+1) {
        if (prime[i]) cout << i << endl;
    }
    return 0;
}