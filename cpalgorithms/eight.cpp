#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<long long>;

int main()
{
    ll n, x;
    cin >> n >> x;
    vi c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vi dp(x + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if(c[i] > x)
        {
            continue;
        }  
        dp[c[i]] += 1;
        for (int j = 0; j <= x; j++)
        {
            if (c[i] + j <= x)
            {
                dp[c[i] + j] = (dp[c[i] + j] + dp[j]) % 1000000007;
                // cout<<i<<" "<<j<<" "<<dp[c[i]+j]<<endl;
            }
        }
    }
    cout << dp[x] << endl;
}