#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    int a = S[0] - '0';
    int b = S[2] - '0';
    cout << a * b << endl;
    return 0;
}