#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

vi get_factors(ll n) {
    vi f;
    if (n < 2) return f;
    
    if (n % 2 == 0) {
        f.push_back(2);
        while (n % 2 == 0) n /= 2;
    }
    
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            f.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    
    if (n > 2) f.push_back(n);
    return f;
}

void solve() {
    long long n, x;
    cin>>n>>x;
    vi a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vi f = get_factors(x);
    ll ans = 0;
    for(int i = 0;i<f.size();i++){
        ll now = 0;
        for(int j=0;j<n;j++){
            if(a[j]%f[i]==0){
                now+=a[j];
            }
        }
        ans=max(now,ans);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}