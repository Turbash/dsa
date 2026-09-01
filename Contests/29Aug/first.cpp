#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = gcd(a[0], a[n-1]);
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}