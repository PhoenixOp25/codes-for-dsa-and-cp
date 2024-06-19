#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;
const int MOD2 = 998244353;
const int M = 1e6+7;

vector<int> p;
vector<int> sppf(M, 0);
void arrayy() {
    sppf[1] = 1;
    for (int i = 2; i < M; ++i) {
        if (sppf[i] == 0) {
            sppf[i] = i;
            for (int j = i * i; j < M; j += i) {
                if (sppf[j] == 0) {
                    sppf[j] = i;
                }
            }
        }
    }
}

void solve() {
   
    int k;
    cin >> k;
    long long res = 0;
    if (sppf[k] == k) {
        for (int prime : p) {
            if (prime > k) break;
            res += prime * k;
        }
    } else {
        for (int prime : p) {
            if (prime > sppf[k]) break;
            res += prime * k;
        }
    }
    cout << res << endl;
}

signed main() {
    arrayy();
    for (int i = 2; i < M; ++i) {
        if (sppf[i] == i) {
            p.push_back(i);
        }
    }
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}