#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;
    
    long long d = y - x;
    long long total = 0;
    
    long long i = 0;
    for (; i < k && (x + i) <= d; ++i) {
        total += (y + i) % (x + i);
    }
    
    if (i < k) {
        total += (k - i) * d;
    }
    
    cout << total << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}