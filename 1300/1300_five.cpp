#include <bits/stdc++.h>
using namespace std;

// Optimizes standard I/O operations for speed
vector<long long> pre(2e5+1, 1);
long long mod = 998244353;
void solve()
{
    // Your code goes here
    string s;
    cin>>s;
    int n = s.size();
    long long ans = 1;
    long long one = 0;
    char prev = '.';
    for(int i=0;i<n;i++) {
        if(s[i] == prev) {
            int now = 1;
            int j= i;
            while(j<n && s[j] == prev) {
                now++;
                j++;
            }
            ans=(ans*now)%mod;
            one+=now-1;
            if(now>1)
                i+=now-1;
        } 
        prev = s[i];
    }
    ans=(ans*pre[one])%mod;
    cout << one <<" " << ans << endl;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i=2;i<2e5;i++) {
        pre[i] = pre[i-1]*i%mod;
    }
    int t = 1;
    cin >> t; // Comment this out if there is only 1 test case
    while (t--)
    {
        solve();
    }

    return 0;
}
