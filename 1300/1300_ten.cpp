#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vi a(n+1);
    for(int i=0;i<n;i++){
        cin >> a[i+1];
    }
    long long ans = 0;
    vi b;
    vi ind;
    for(int i=1;i<=n;i++){
        if(a[i]<i){
            b.push_back(a[i]);
            ind.push_back(i);
        }
    }
    sort(b.begin(), b.end());
    for(int i=0;i<b.size();i++){
        int in = lower_bound(b.begin(), b.end(), ind[i]+1) - b.begin();
        ans += b.size() - in;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}