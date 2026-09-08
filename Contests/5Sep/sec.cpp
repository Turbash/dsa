#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int odds = 0;
    int even2s = 0;
    int even4s = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2){
            odds++;
        }else if(a[i]%4==0){
            even4s++;
        }else{
            even2s++;
        }
    }
    int ans = max(odds,max(even2s,even4s));
    cout<<ans<<endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}