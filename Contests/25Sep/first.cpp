#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    int l = 0;
    int r = n-1;
    int ans = 0;
    while(l<r){
        if(s[l]==s[r])
            ans+=0;
        else if(s[l]==c || s[r]==c)
            ans+=1;
        else
            ans+=2;
        l++;
        r--;
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