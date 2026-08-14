#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b;
    cin>>a>>b;
    long long ans = lcm(a,b);
    if(ans==a || ans==b){
        ans = b * b/a;
    }
    if(ans>1e9){
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}