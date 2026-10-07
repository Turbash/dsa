#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

ll ssDig(ll a){
    ll now = 0;
    while(a){
        now+=(a%10)*(a%10);
        a/=10;
    }
    return now;
}

void solve() {
    long long n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vi w(n);
    vi st(n);
    for(int i=0;i<n;i++){
        ll now = a[i];
        ll step = 0; 
        while(now!=4 && now!=1){
            now = ssDig(now);
            step++;
        }
        w[i] = now;
        st[i] = step;
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(w[i]==4){
                if(w[j]==4){
                    ll stepd = abs(st[i]-st[j]);
                    if(stepd % 8 ==0){
                        ans++;
                    }
                }
            }
            else{
                if(w[j]==1){
                    ans++;
                }
            }   
        }
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