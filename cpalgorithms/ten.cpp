#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<long long>;
 
ll mod = 1e9 + 7;

int main()
{
    ll n;
    cin >> n;
    vector<string> grid(n);
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }

    vector<vi> dp(n, vi(n, 0));
    if(grid[0][0] !='*')
        dp[0][0] = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            if(grid[i][j] == '*')
                continue;
            if(j-1>=0 && grid[i][j-1] != '*'){
                dp[i][j]=(dp[i][j] + dp[i][j-1])%mod;
            }
            if(i-1>=0 && grid[i-1][j] != '*'){
                dp[i][j]=(dp[i][j] + dp[i-1][j])%mod;
            }
        }
    }
    
    cout << dp[n-1][n-1] << endl;
}