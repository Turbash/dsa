#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long n, cur = 0;
    cin >> n;
    multiset<long long> b;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        b.insert(x);
    }
    
    vector<long long> ans(n);
    for(int i = 0; i < n; i++){
        auto it = b.lower_bound(1 - cur);
        if(it == b.end()) return void(cout << -1 << '\n');
        cur += *it;
        b.erase(it);
        ans[i] = cur;
    }
    
    for(int i = 0; i < n; i++) cout << ans[i] << " \n"[i == n - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}