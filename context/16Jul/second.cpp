#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    long long c;
    cin >> n >> c;
    
    vector<long long> a(n);
    long long base_score = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        base_score += (a[i] - c);
    }
    
    sort(a.begin(), a.end());
    
    long long extra_gain = 0;
    int max_pairs = n / 2;
    
    for (int i = 0; i < max_pairs; i++) {
        if (a[i] < c) {
            extra_gain += (c - a[i]);
        }
    }
    
    cout << base_score + extra_gain << endl;
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}