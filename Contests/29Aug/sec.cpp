#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n, m;
    cin >> n >> m;
    // Your code here
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> mp(2*m+1, 0);
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    sort(a.begin(),a.end());
    int i=0;
    int ans = 0;
    while(i<n){
        int curr = a[i];
        int freq = mp[curr];
        int doub = curr * 2;
        int now = n-i;
        i+=freq;
        now+=mp[doub];
        ans = max(ans, now);
        // cout<<curr<<" "<<now<<endl;
    }
    i=0;
    while(i<n){
        int curr = a[i];
        int freq = mp[curr];
        int  half= curr / 2;
        i+=freq;
        if(curr%2==1){
            continue;
        }
        int now = a.end() - lower_bound(a.begin(), a.end(), half);
        now += mp[curr];

        ans = max(ans, now);
        // cout<<curr<<" "<<now<<endl;
    }  
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}