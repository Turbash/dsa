#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

vector<long long> palin;
long long mod = 1e9 + 7;

vector<long long> dp(4e4 + 1, 0);

void solve()
{
    int n;
    cin >> n;
    cout << dp[n] << endl;
    // Your code here
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 0; i <= 4e4; i++)
    {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if (s == t)
            palin.push_back(i);
    }
    dp[0] = 1;
    int sz = palin.size();
    for (int i = 0; i<sz;i++)
    {
        for (int j = 1; j <= 4e4; j++)
        {   
            if(j - palin[i]>=0){
                dp[j] = (dp[j] + dp[j - palin[i]]) % mod;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
        solve();
}