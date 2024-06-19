#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m;
    cin>>n>>m;
    
    cout<<min(n%m, (n- (n%m)))<<endl;
    
}

signed main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}