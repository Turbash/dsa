#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<long long>;
 
ll mod = 1e9 + 7;

int main()
{
    ll n,m;
    cin >> n >> m; 

    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vi> dp(n, vi(m+1, 0));
    if(a[0]==0){
        for(int i=1;i<=m;i++)
            dp[0][i] = 1;
    }
    else{
        dp[0][a[0]] = 1;
    }
    for(int i=1;i<n;i++){
        if(a[i]==0){
            for(int j=1;j<=m;j++) {
                if(j-1>=1)
                    dp[i][j]=(dp[i][j]+dp[i-1][j-1])%mod;;
                dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
                if(j+1<=m)
                    dp[i][j]=(dp[i][j]+dp[i-1][j+1])%mod;
                // cout<<dp[i][j]<<endl;
            }
        }else{
            if(a[i]-1>=1)
                dp[i][a[i]]=(dp[i][a[i]]+dp[i-1][a[i]-1])%mod;
            dp[i][a[i]]=(dp[i][a[i]]+dp[i-1][a[i]])%mod;
            if(a[i]+1<=m)
                dp[i][a[i]]=(dp[i][a[i]]+dp[i-1][a[i]+1])%mod;   
        }
        
    }
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<dp[i][j]<<endl;
    //     }
    // }
    if(a[n-1]!=0){
        cout<<dp[n-1][a[n-1]]<<endl;
    }else{
        ll ans = 0;
        for(int i=1;i<=m;i++){
            ans=(ans+ dp[n-1][i])%mod;
            // cout<<ans<<" "<<dp[n-1][i]<<endl;
        }
        cout<<ans<<endl;
    }
}