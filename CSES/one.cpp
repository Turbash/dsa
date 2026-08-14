#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 0;
    int r = n-1;
    int lc = 1;
    int rc= 1;
    long long lsum = a[0];
    long long rsum = a[n-1];
    while(l+1<r){
        if(lsum<rsum){
            l++;
            lsum+=a[l];
            lc++;
        }else{
            r--;
            rsum+=a[r];
            rc++;
        }
    }
    long long ans = lsum+rsum;
    if(rsum>lsum && rc==1){
        ans = rsum*2;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}