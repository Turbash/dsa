#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long b, r;
    cin>>b>>r;
    ll lb = 30 -b;
    ll lr = 30 - r;
    ll ans = lb * lr;
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}