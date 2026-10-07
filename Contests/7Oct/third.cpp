#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<ll, ll> mp;
    for(int i=0;i<n-4;i++){
        ll sum = a[i] + a[i+2] - a[i+4];
        mp[sum]++;
    }
    ll ans = 0;;
    for(auto it: mp){
        if(it.second > 1){
            ans += (it.second * (it.second - 1)) / 2;
        }
    }
    ll overlap = 0;
    for(int i=0;i<n-6;i++){
        ll sum1 = a[i] + a[i+2] - a[i+4];
        ll sum2 = a[i+2] + a[i+4] - a[i+6];
        if(sum1 == sum2){
            overlap++;
        }
        if(i<n-8){
            ll sum3 = a[i+4] + a[i+6] - a[i+8];
            if(sum1 == sum3){
                overlap++;
            }
        }
    }
    cout<<ans-overlap<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}