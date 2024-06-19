#include <bits/stdc++.h>
using namespace std;
#define int long long
const long long MOD = 1e9 + 7;

bool is_valid(const vector<int>& numbers, const vector<int>& selected, int n, int c) {
    long long prod = 0;
    for (int i = 0; i < n; ++i) {
        if (selected[i] == 0) continue;
        for (int j = 0; j < n; ++j) {
            if (selected[j] == 0)
                prod += numbers[i] * numbers[j];
        }
    }
    return prod <= c;
}
void solve() {
   int n, c;
    cin >> n >> c;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    vector<int> selected(n, 0);
    selected[0] = 1;
    int cost_disconnect_1 = 0;
        for (int i = 1; i < n; ++i) {
            cost_disconnect_1 += (numbers[0] * numbers[i]);
        }

        if (cost_disconnect_1 <= c) {
            cout << 1 << endl; // Only Island 1 is reachable
            
        }
    else{if (is_valid(numbers, selected, n, c)) {
        cout << 1 << endl;
    } else {
        int size = 1;
        while (size < n) {
            int max_index = -1;
            for (int i = 0; i < n; ++i) {
                if (selected[i] == 0 && (max_index == -1 || numbers[i] > numbers[max_index]))
                    max_index = i;
            }
            selected[max_index] = 1;
            size++;
            if (is_valid(numbers, selected, n, c)) {
                cout << size << endl;
                return;
            }
        }
    }}
}

signed main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}