#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f=true;
void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        int x;
        cin >> x;
        cout << x << endl;
        return;
    } 
    
     
    vector<int> a(n, 0);
   
    for(int i=0;i<n;i++) cin>>a[i];
    int prevMax = abs(a[0]), prevMin = a[0];
    int nextMax = INT_MIN, nextMin = INT_MAX;
    for(int i=1; i<n; i++){
        nextMax = max(abs(prevMin + a[i]), abs(prevMax+a[i]));
        if(f) {nextMin = prevMin+a[i];}
        prevMin = nextMin, prevMax = nextMax;
    }
    cout<< max(prevMax, abs(prevMin))<<endl;;
}

signed main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
