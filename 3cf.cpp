#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    int mid = (n + 1) / 2;
    for (int i = mid; i < n; i++) {
        cout << i + 1 << " ";
    }
    for (int i = 0; i < mid; ++i) {
        cout << i + 1 << " ";
    }
    cout << endl;
}

signed main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
