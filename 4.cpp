#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f=true;
int mod=998244353;
const int nn=1e6+5;
int a[nn],f1[nn],f2[nn],w1[nn],w2[nn];
void solve() {
    int n;
    cin>>n;
    //vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    
    f1[1]=max(a[1],abs(a[1]));
    f2[1]=min(a[1],abs(a[1]));
    
    if(a[1]>=0 ){
        w1[1]=2;
        w2[1]=2;
    }
    else{
        w1[1]=1;
        w2[1]=1;
    }
    for(int i=2;i<=n;i++){
        f1[i]=max({f1[i-1]+a[i],abs(f1[i-1]+a[i]),f2[i-1]+a[i],abs(f2[i-1]+a[i])});


        if(f1[i]==f1[i-1]+a[i])w1[i]=(w1[i]+w1[i-1])%mod;

         if(f1[i]==abs(f1[i-1]+a[i]))w1[i]=(w1[i]+w1[i-1])%mod;

        if(f1[i-1]!=f2[i-1]){
            if(f1[i]==f2[i-1]+a[i]){
                w1[i]=(w1[i]+w2[i-1])%mod;
            }
            if(f1[i]==(abs(f2[i-1]+a[i]))){
                w1[i]=(w1[i]+w2[i-1])%mod;
            }
        }
        f2[i]=min({f1[i-1]+a[i],abs(f1[i-1]+a[i]),f2[i-1]+a[i],abs(f2[i-1]+a[i])});

        if(f2[i]==f1[i-1]+a[i])w2[i]=(w2[i]+w1[i-1])%mod;

        if(f2[i]==abs(f1[i-1]+a[i]))w2[i]=(w2[i]+w1[i-1])%mod;






        if(f2[i-1]!=f1[i-1]){
            if(f2[i]==f2[i-1]+a[i]){
                w2[i]=(w2[i]+w2[i-1])%mod;
            }
            if(f2[i]==(abs(f2[i-1]+a[i]))){
                w2[i]=(w2[i]+w2[i-1])%mod;
            }
        }
        


    }
    cout<<w1[n]<<endl;
    for(int i=1;i<=n;i++)w1[i]=w2[i]=0;
    
}

signed main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}