#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vi a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string s;
    cin>>s;
    int q;
    cin>>q;
    vi preXor(n+1,0);
    for(int i = 0; i < n; i++) {
        preXor[i+1] = preXor[i] ^ a[i];
    }
    int tot = preXor[n];
    int x1 = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            x1^=a[i];
        }
    }
    while(q--) {
        int type;
        cin>>type;
        if(type==1) {
            int l,r;
            cin>>l>>r;
            l--;r--;
            int bet = preXor[r+1]^preXor[l];
            x1=x1^bet;
        }
        else{
            int bl;
            cin>>bl;
            int ans = bl?x1: tot^x1;
            cout<<ans<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}