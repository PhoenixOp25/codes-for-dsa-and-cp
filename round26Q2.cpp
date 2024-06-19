#include <bits/stdc++.h>
using namespace std;
bool ff=true;
bool isValidNumber(long long n) {
    string s = to_string(n);
    int sz = s.size();
    string sm = "01234", le = "56789";
   
    if (s.find(sm) != string::npos && s.find(le) != string::npos) {
        return false;
    }

    bool flag = false;
    int sum = 0, bd = 5 + 6 + 7 + 8 + 9;
    for (int i = 0; i < sz - 1; i++) {
        sum += (s[i] - '0');
        if (s[i] == '0') {
            flag = true;
        }
    }

    
    
    if ((sz % 10 == 0)|| (flag)||(s[0] != '1')||(sum == bd)||(s[sz - 1] == '9')) {
        return false;
    }


    return true;
}

void solve() {
    long long n;
    cin >> n;
    if (isValidNumber(n)&&ff) {
        cout << "Yes" << endl;
    } else {
        if(ff){cout << "No" << endl;}
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
