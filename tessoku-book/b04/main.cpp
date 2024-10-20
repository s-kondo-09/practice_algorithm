#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int dec = 0;
    int i = 0;
    while (n > 0) {
        dec += (1 << i) * (n % 10);
        n /= 10;
        i++;
    }
    cout << dec << endl;
    return 0;
}