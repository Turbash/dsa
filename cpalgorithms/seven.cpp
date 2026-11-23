
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<long long>;


int main() {
    ll n, x;
    cin>>n>>x;
    vi c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vi dp(x+1, 0);
    for(int i=0;i<n;i++){
        if(c[i]<=x)
            dp[c[i]] = 1;
    }
    for(int i=0;i<=x;i++){
        for(int j=0;j<n;j++) {
            if(i+c[j]<=x) {
                dp[i+c[j]] = (dp[i+c[j]] + dp[i]) % 1000000007;
            }
        }
    }
    if(dp[x] == LLONG_MAX){
        cout<<-1<<endl;
    }else{
    cout<<dp[x]<<endl;
    }
}