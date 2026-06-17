#include <bits/stdc++.h>
using namespace std;

// Optimizes standard I/O operations for speed
void solve()
{
    // Your code goes here
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    for(int k=2;k<=n;k++){
        if(n%k==0){
            long long ma = LLONG_MIN;
            long long mi = LLONG_MAX;
            int t = n/k;
            for(int i=0;i<k;i++){
                long long curr = 0;
                for(int j=i*t;j<(i+1)*t && j<n;j++){
                    curr+=a[j];
                }
                ma=max(ma,curr);
                mi=min(mi,curr);
            }
            ans=max(ans,ma-mi);
        }
    }
    cout << ans << endl;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; // Comment this out if there is only 1 test case
    while (t--)
    {
        solve();
    }

    return 0;
}
