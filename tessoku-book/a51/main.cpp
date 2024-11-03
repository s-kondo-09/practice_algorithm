#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    stack<string> books;
    rep(i,q) {
        int query;
        cin >> query;
        if (query == 1) {
            string bookname;
            cin >> bookname;
            books.push(bookname);
        }
        else if (query == 2) {
            cout << books.top() << endl;
        }
        else {
            books.pop();
        }
    }
    return 0;
}