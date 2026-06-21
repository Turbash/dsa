#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, x;
    cin >> n >> x;
    // Your code here
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long low = 1;
    long long high = 2e9+1;
        int ans = 0;
    while (low <= high){
        long long mid = low+(high-low)/2;
        long long val = 0;
        for(int i=0;i<n;i++){
            if(a[i]<mid){
                val+=(mid-a[i]);
            }
        }
        if(val>x){
            high=mid-1;
        }
        else{
            ans=mid;
            low=mid+1;
        }
        // cout<<low<<" "<<high<<" "<<val<<endl;
    }
    cout<<ans<<endl;
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