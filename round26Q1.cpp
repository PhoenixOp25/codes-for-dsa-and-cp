#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int x,c=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        int x=a[0];
        if(a[i]==x)c++;
    }
    if(c==n){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        string s;
        
        for(int i=0;i<n;i++){
            s+='R';
        }
        s[1]='B';
        cout<<s<<endl;
    }
       
}

int main() {
    int T;
    cin >> T;
    while(T--) solve();
}
