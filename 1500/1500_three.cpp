#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
void solve()
{
    int n;
    cin >> n;
    // Your code here
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> dp(n, 0);
    dp[n-1]=0;
    for(int j=n-2;j>=0;j--){
        if(j+a[j]+1<=n){
            if(j+a[j]+1==n){
                dp[j]=max(dp[j+1],a[j]+1);
            }
            else{
                dp[j]=max(dp[j+1],a[j]+1+dp[j+a[j]+1]);
            }
        }
        else{
            dp[j]=dp[j+1];
        }
    }
    cout << n- dp[0] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}