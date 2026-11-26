#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<long long>;

int main()
{
    ll n;
    cin >> n;
    vi dp(n + 1, LLONG_MAX);
    dp[0] = 0;
    for(int i=1;i<10;i++){
        if(i<=n)
            dp[i] = 1;
    }
    for (int i = 10; i <= n; i++)
    {   
        int temp = i;
        while (temp > 0) {
            int dig = temp%10;
            if(dig!=0)
                dp[i] = min(dp[i-dig] + 1, dp[i]);
            temp=temp/10;
        }
    }
    cout << dp[n] << endl;
}