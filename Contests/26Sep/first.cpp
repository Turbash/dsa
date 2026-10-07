#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n, k;
    cin>>n>>k;
    ll extra = n-k+1;
    ll ans = (k-1)*2;
        ans+= 1<<extra;
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}