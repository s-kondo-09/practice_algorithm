#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    int n = s.length();
    if (s.substr(n-3, 3) == "san") cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}