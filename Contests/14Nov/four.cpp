#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vi cnt(n+1,0);
    long long ans = 1;
    for(int i=0;i<n;i++) {
        if(i>0 && a[i] != a[i-1]) {
            ans += i - cnt[a[i]];
        }
        cnt[a[i]]++;
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}